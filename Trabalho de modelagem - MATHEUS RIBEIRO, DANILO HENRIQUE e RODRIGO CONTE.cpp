#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	
	int x, a=11, b=0, m=16, semente=7, res;
	
	while(1){
		
		system("cls");
		
		printf("Grupo:\n\n");
		printf("Matheus de Melo Ribeiro\n");
		printf("Danilo Henrique\n");
		printf("Rodrigo Conte\n\n");
		printf("M%ctodo Congruencial\n\n",-126);
		
		printf("Informe o valor de X que corresponde ao n%cmero de valores alet%crios que deseja gerar:\n",-93,-94);
		scanf("%d",&x);
		
		printf("\nF%crmula Gen%crica: Xn+1 = (a . Xn + b) mod m\n\n",-94,-126);
		
		printf("Informe as constantes a, b, m e a semente:\n");
		printf("\nValor de a: ");
		scanf("%d",&a);
		printf("\nValor de b: ");
		scanf("%d",&b);
		printf("\nValor de m: ");
		scanf("%d",&m);
		printf("\nValor da semente: ");
		scanf("%d",&semente);
		
		system("cls");
		
		printf("F%crmula Gen%crica: Xn+1 = (a . Xn + b) mod m\n\n",-94,-126);
		printf("Resultado para a = %d, b = %d, m = %d, semente = %d:\n\n",a,b,m,semente);
		
		int count;
		
		for(count=0;count<x;count++){
			res = (a*semente + b) % m ;
			printf("%d\n",res);
			
			semente = res;
		}
		
		getch();
	}
	
	return(0);
	
}

