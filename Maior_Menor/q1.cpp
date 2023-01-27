#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int num[10];
		int MaiorN=num[0], MenorN=1000000, PosiM=0, PosiMn=0;
		
		printf("Teste maior e menor numero \n");
		
		for(int i =0; i < 10; i++){
			printf("Digite o %d° número: ", i+1);
			scanf("%d", &num[i]);
			if (MaiorN < num[i]){
				MaiorN = num[i];
				PosiM = i;
			}if(MenorN > num[i]){
				MenorN = num[i];
				PosiMn = i;
			}
		}
		printf("O maior número é %d e está na posição %d \n", MaiorN, PosiM+1);
		printf("O menor número é %d e está na posição %d", MenorN, PosiMn+1);
		return 0;
	}
