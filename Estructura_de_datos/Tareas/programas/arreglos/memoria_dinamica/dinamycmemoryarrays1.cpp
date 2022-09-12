#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

typedef struct estudiante{
        char nombre[25];
        int calif;
        int edad;
}es;
    
int main(){
    int estudiantes,i;
    float prom=0,edades=0;
    es *est;
    
    printf("Numero de alumnos: ");
    scanf("%d",&estudiantes);

    est = malloc(sizeof(es)*estudiantes);
    if(est == NULL){
        printf("No fue posible asignar la matriz");
        return(1);
    }
    
    for(i=0;i<estudiantes;i++){
        printf("\t---Alumno %d---\nNombre: ",i+1);
        fflush(stdin);
        gets(est[i].nombre);
        printf("Edad: ");
        scanf("%d",&est[i].edad);
        edades += est[i].edad;
        printf("Calificacion: ");
        scanf("%d",&est[i].calif);
        prom += est[i].calif;
    }
    
    prom /= estudiantes;
    edades /= estudiantes;

    printf("| Nombre\t| Edad\t| Grado\t|\n ----------------------------------\n");
    for(i=estudiantes-1;i>=0;i--){
        printf("|%s\t",est[i].nombre);
        printf("|%d\t",est[i].edad);
        printf("|%d\t",est[i].calif);
        printf("|\n");
    }

    printf("\nPromedio de la calificacion: %.2f",prom);
    printf("\nEdad promedio es",edades);
}
