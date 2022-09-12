#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nombre[25];
	int ed, calif;
} alumno;



int main(){
	alumno alumnos[20];
	int d, a;
	float x=0, y=0;
	
	printf("Dame la cantidad de alumnos que registraras: ");
	scanf("%d",&d);
	
	system("cls");
	
	for(a=0; a<d; a++){
		printf("\t\t Alumno %d\n",a+1);
		printf("Introduzca nombre (max 25 letras): ");
		fflush(stdin);gets(alumnos[a].nombre);
		printf("Introduzca edad: ");
		scanf("%d",&alumnos[a].ed);
		printf("Introduzca calificación: ");
		scanf("%d",&alumnos[a].calif);
		
		system("cls");
	}
	
	for(a=0; a<d; a++){
		x+=alumnos[a].ed;
		y+=alumnos[a].calif;
	}
	
	x=(float)x/d;
	y=(float)y/d;
	
	printf("Promedio de edades: %f\n", x);
	printf("Promedio grupal: %f", y);
	
	system("pause");system("cls");
	
	printf("\t\tAlumnos: ");
	for(a=d-1; a>=0; a--){
		printf("%d. %s\n",d-a,alumnos[a].nombre);
	}
	
	system("pause");
	system("cls");
	
	return 0;
}
