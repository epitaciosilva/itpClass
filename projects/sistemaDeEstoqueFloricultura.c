#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // true, false

/*
* Structs e typedefs
*/
typedef struct
{
	char nome[255];
	float preco;
} Planta;
struct Estoque_s
{
	int qtdeVendas;
	float lucro;
	int tamanho;
	Planta *plantas;
} Estoque_default = { 0, 0.0, 0 };
typedef struct Estoque_s Estoque;

/*
* Funções
*/
int menu_opt ();
void create_planta ( Estoque * _estoque );
void show_planta ( Estoque * _estoque );
void sell_planta ( Estoque * _estoque );
void show_estatisticas ( Estoque * _estoque );

/*
* Estoque de floricultura
*/
int main( int argc, char* argv )
{
	// O estoque já surge com valores default
	Estoque estoque = Estoque_default;
	int opcao = -1;  // Opção inicial (para 'while')
	int i;
	float totalGanho = 0;

	Planta *plantas = malloc(1*sizeof(Planta));

	while(opcao != 0)
	{
		opcao = menu_opt();

		switch(opcao)
		{
			case 1: create_planta(&estoque); break;
			case 2: show_planta(&estoque);break;
			case 3: sell_planta(&estoque);break;
			case 4: show_estatisticas(&estoque);break;
		}
	}	
}

int menu_opt ()
{
	int opt = -1;

	do
	{
		// Menu
		printf("\n|==================|");
		printf("\n|====== MENU ======|");
		printf("\n|==================|");
		printf("\n0 - Sair");
		printf("\n1 - Adicionar uma planta");
		printf("\n2 - Exibir plantas");
		printf("\n3 - Vender planta");
		printf("\n4 - Estatisticas\n");
		scanf("%i", &opt);
		// Validar opção
		if (opt < 0 || opt > 4)
			printf("--> Opção inválida!\n");
	}
	while (opt < 0 || opt > 4);

	return opt;
}

void create_planta ( Estoque * _estoque )
{
	// Ajusta o ponteiro para as plantas no estoque
	(*_estoque).tamanho++;
	if ((*_estoque).tamanho == 1 )
		(*_estoque).plantas = malloc(sizeof(Planta)*1);
	else
		(*_estoque).plantas = realloc((*_estoque).plantas, sizeof(Planta)*(*_estoque).tamanho);
	// Variáveis para pegar as informações da nova planta
	Planta planta;
	// Recolhe informações da planta
	printf("Informe o nome da planta: ");
	scanf("%s", planta.nome);
	printf("Informe o preço da planta: ");
	scanf("%f", &planta.preco);
	// Salva no estoque
	(*_estoque).plantas[ (*_estoque).tamanho-1 ] = planta;
}

void show_planta ( Estoque * _estoque )
{
	// Caso não tenha plantas no estoque
	if ((*_estoque).tamanho == 0)
	{
		printf("Não existe plantas no estoque para mostrar.\n");
		return;
	}

	// Lista as plantas
	int i;
	printf("----- PLANTAS -----\n");
	for (i = 0; i < (*_estoque).tamanho; i++)
	{
		printf("- %d:\n", (i+1));
		printf("..Nome: %s\n", (*_estoque).plantas[i].nome);
		printf("..Preço: %.2f\n", (*_estoque).plantas[i].preco);
	}
}

void sell_planta ( Estoque * _estoque )
{
	// Caso não tenha plantas no estoque
	if ((*_estoque).tamanho == 0)
	{
		printf("Não existe plantas no estoque para vender.\n");
		return;
	}

	int idx = -1;
	int i;
	do
	{
		printf("----- PLANTAS -----\n");
		for (i = 0; i < (*_estoque).tamanho; i++)
		{
			printf("Identificador: %d\n", (i+1));
			printf("Nome: %s\n", (*_estoque).plantas[i].nome);
			printf("Preço: %.2f\n", (*_estoque).plantas[i].preco);
		}

		printf("Digite o identificador da planta que deseja vender ou 0 para sair: ");
		scanf("%d", &idx);
		// Se for igual a 0, sai
		if (idx == 0)
			break;
		// Valida o identificador
		if (idx < 0 || idx > (*_estoque).tamanho)
		{
			printf("--> Identificador inválido!\n");
			continue;
		}
		// AUmenta a quantidade de vendas e atualiza o lucro
		(*_estoque).lucro += (*_estoque).plantas[ idx-1 ].preco;
		(*_estoque).qtdeVendas++;
		// Desloca todas as plantas seguintes em uma casa para a esquerda
		for (i = idx; i < (*_estoque).tamanho; i++)
			(*_estoque).plantas[ i-1 ] = (*_estoque).plantas[i];
		// Atualiza o tamanho do ponteiro e valor de tamanho
		(*_estoque).tamanho--;
		(*_estoque).plantas = realloc((*_estoque).plantas, sizeof(Planta)*(*_estoque).tamanho);
	}
	while ((idx < 0 || idx >= (*_estoque).tamanho) && ((*_estoque).tamanho > 0));
}

void show_estatisticas ( Estoque * _estoque )
{
	// Exibe informações
	printf("Você vendeu %d plantas.\n", (*_estoque).qtdeVendas);
	printf("Você lucro R$%.2f.\n", (*_estoque).lucro);
}