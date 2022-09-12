#include <stdio.h>
#include <stdlib.h>

int main(){
	int j, pares[10],dig;
	char cuenta[9];
	system("cls");

	for (j = 0; j < 10; j++)
        pares[j]= 2*(j+1);

	for(j=9;j>=0;j--)
		printf("|%d",pares[j]);
	printf("|\n");

	printf("\nDigita tu numero de cuenta: ");
    gets(cuenta);
    dig = cuenta[8] - '0'; 

	printf("Modificando numero en indice %d para -1",dig);

	pares[dig]=-1;
	
	for(j=9;j>=0;j--)
		printf("|%d",pares[j]);
	printf("|\n");

	system("pause");
}
