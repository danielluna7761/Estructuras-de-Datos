#include <iostream>
#include <conio.h>
using namespace std;

int fact(int);

int main(){
	int numero;
	cout<<"Ingrese un numero: "; 
	cin>>numero;
	cout<<"El factorial del numero es: "<<fact(numero)<<endl;
}

int fact(int n){
	if(n==0){
		n=1;
	}
	else{
		n=n*fact(n-1); //la función se está llamando dentro de ella, por eso es recursiva//
	}
	return n;
}


//la complejidad del algoritmo es de O(n)

