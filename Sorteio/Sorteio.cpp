#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
	int main(){
		setlocale(LC_ALL,"Portuguese_Brazil");
    	srand(time(NULL)); 
    	
    	int vetor[10], num, i;

    	for (i = 0; i < 10; i++){
        	vetor[i] = rand() % 10; 
   		}
    	printf("\nDigite um número: ");
    	scanf("%d", &num);

    	for (i = 0; i < 10; i++){
        	if (vetor[i] == num){
            	printf("O Número %d Está No Vetor, Na %d° Posição\n", num, i+1);
            	return 0;
        }
    }
    	printf("O Número %d Não Está No Vetor\n", num);
    	return 0;
}


