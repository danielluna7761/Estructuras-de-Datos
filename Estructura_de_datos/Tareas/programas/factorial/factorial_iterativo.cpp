#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int numero, fact=1;
	
	cout<<"Ingrese un numero: "; 
	cin>>numero;
	
	for(int i=1;i<=numero;i++){
		fact = fact * i; //inicia el ciclo  iterativo/
	}
	
	cout<<"El factorial del numero es: "<<fact<<endl;
	
	system("pause");
	return 0;
}
//la complejidad del algoritmo es de 0(2n-1)



