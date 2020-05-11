#include <iostream>
using namespace std;
void seleccion(int [], int );
void mostrar(int [], int);
int main(){
	int numeros[]={5,2,1,4,3};
	int tam=sizeof(numeros)/sizeof(numeros[0]);
	seleccion(numeros,tam);
	mostrar(numeros,tam);
	return 0;
}
void seleccion(int numeros[], int tam){
	int min, aux;
	for(int i=0;i<tam;i++){
		min=i;
		for(int j=i+1;j<tam;j++){
			if(numeros[j]<numeros[min]){
				min=j;
			}
		}
		aux=numeros[i];
		numeros[i]=numeros[min];
		numeros[min]=aux;
	}
}
void mostrar(int numeros[], int tam){
	cout<<"orden ascendente"<<endl;
	for (int i=0;i<tam;i++){
		cout<<numeros[i]<<" ";
	}
}