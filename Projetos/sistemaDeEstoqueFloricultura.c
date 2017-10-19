#include <stdio.h>
#include <stdlib.h>

typedef struct Plantas{
	char nome[255];
	float preco;
} Planta;

typedef enum{
	true, false
} boolean;
//Estoque de floricultura
int main(){
	int tamanho = 1, opcao = 99, estoque, i;
	float totalGanho = 0;

	Planta *plantas = malloc(1*sizeof(Planta));

	while(opcao != 0){
		printf("\n0 para sair\n1 para adicionar uma flor\n2 para exibir flores cadastradas\n3 para vender flor\n4 para estatisticas\n");
		scanf("%i", &opcao);
		if(opcao == 1){
			if(tamanho == 1){
				printf("Informe o nome da planta\n");
				scanf("%s", plantas[0].nome);
				printf("Informe o preço da planta\n");
				scanf("%f", &plantas[0].preco);
				
			}else{
				plantas = realloc(plantas, (tamanho)*sizeof(Planta));

				printf("Informe o nome da planta\n");
				scanf("%s", plantas[tamanho-1].nome);
				printf("Informe o preço da planta\n");
				scanf("%f", &plantas[tamanho-1].preco);
			}

			++tamanho;
		}else if(opcao == 0){
			return 0;
		}else if(opcao == 2){
			boolean cond = false;

			for(i = 0; i < tamanho-1; i++){
				if(plantas[i].nome[0] != '?' && plantas[i].preco != 0){
					printf("\nRosa: %s\n", plantas[i].nome);
					printf("Preço: %f\n", plantas[i].preco);
					cond = true;
				}
			}
			
			if(cond == false){
				printf("Nada cadastrado no estoque");
			}

		}else if(opcao == 3){
			int exclui;
			boolean cond = false;

			for(i = 0; i < tamanho-1; i++){
				if(plantas[i].nome[0] != '?' && plantas[i].preco != 0){
					printf("\nNúmero: %i\n", i+1);				
					printf("Rosa: %s\n", plantas[i].nome);
					printf("Preço: %f\n", plantas[i].preco);

					cond = true;
				}
			}		
			
			if(cond == true){
				printf("\nDigite um número de flor para excluir\n");
				scanf("%i", &exclui);
			
				/*
				Aparentemente string não aceita atribuição '\0'
				E nem float NULL. Ai tive que fazer essa 'gambiarra'
				*/
				totalGanho += plantas[exclui-1].preco;
				plantas[exclui-1].nome[0] = '?';
				plantas[exclui-1].preco = 0;			
			}else{
				printf("Nenhuma flor encontrada no estoque");
			}
		}else if(opcao == 4){
			printf("Você vendeu %f R$", totalGanho);
		}else{
			printf("Opção inválida");
		}
	}

	
	
}
