#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int a,p,ncuenta[9]={0},**fila;
    char cuenta[9];

    printf("Digita tu numero de cuenta ");
    gets(cuenta);
    for(a=0; a < strlen(cuenta);a++)
        ncuenta[a] = cuenta[a] - '0';

    fila = (int**)malloc(sizeof(int)*9);
    if(fila == NULL){
        printf("No fue posible asignar la memoria para la matriz de columnas");
        return(1);
    }
    
    for (a = 0; a < 9; a++)
    {
        fila[a]= (int*)malloc(sizeof(int)*ncuenta[a]);

        if(fila[a] == NULL){
            printf("No fue posible asignar la memoria para la matriz %d ",a++);
            exit(1);
        }

        for (p = 0; p < ncuenta[a]; p++)
        {
            fila[a][p]=ncuenta[a];
            printf("|%d",fila[a][p]);
        }
        printf("|\n");
    } 
}
