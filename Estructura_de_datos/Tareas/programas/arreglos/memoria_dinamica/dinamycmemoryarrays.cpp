#include<stdio.h>
#include<stdlib.h>

int main(){
    int *even,p,dig;
    char cuenta[9];

    printf("Digita tu numero de cuenta: ");
    gets(cuenta);
    dig = cuenta[8] - '0';

    even = (int*)malloc(sizeof(int)*10); 
    if(even == NULL){
        printf("No se pudo asignar la memoria a la matriz dinamica");
        return(1);
    }
    
    for (p = 0; p < 10; p++)
        even[p]= 2*(p+1);

    for(p = 9; p > -1; p--)
        printf("|%d",even[p]);
    printf("|\n\n Modificando numero en el indice %d para -1 \n\n",dig);

    even[dig] = -1; 
    
    for(p = 9; p > -1; p--)
        printf("|%d",even[p]);
    printf("|\n");

    getchar();
    
}
