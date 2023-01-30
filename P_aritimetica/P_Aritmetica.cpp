#include <stdio.h>
#include <locale.h>

		int main(){
			setlocale(LC_ALL, "Portuguese_Brazil");
			int PA[10]; // mudar pa para PG
			int R;
			
			printf("Digite o valor inicial: ");
			scanf("%d", &PA[0]);
			printf("Digite a razão: ");
			scanf("%d", &R);
			
			PA[0] = A;
			
			for(int i = 1; i < 10; i++){
				PA[I] = PA[I -1] + R; // mudar mais para *
			}
			for(int i =0; i < 10; i++){
				printf("%d" , PA[i);
			}
			return 0;
		}
