#include <stdio.h>
#include <locale.h>

		int main(){
			setlocale(LC_ALL, "Portuguese_Brazil");
			int PG[10];
			int R;
			
			printf("Digite o valor inicial: ");
			scanf("%d", &PG[0]);
			printf("Digite a razão: ");
			scanf("%d", &R);
			
			
			for(int i = 1; i < 10; i++){
				PG[i] = PG[i -1] * R; 
			}
			for(int i =0; i < 10; i++){
				printf("%d " , PG[i]);
			}
			return 0;
		}
