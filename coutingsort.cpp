#include <iostream>
using namespace std;

void pedirdatos(int [], int);
void coutinsor(int [],int,int);
void mostrar_datos(int [],int);

int main(){
	int tam=0;
	int range=10;
	cout<<"ingrese el tamaño de la cadena: ";
	cin>>tam;
	int array[tam];
	pedirdatos(array,tam);	
	coutinsor(array,tam,range);
	mostrar_datos(array,tam);
	return 0;
}

void pedirdatos(int array[], int tam ){
	for(int i=0;i<tam;i++){
		cout<<"digite un num: ";cin>>array[i];
	}
}

void coutinsor(int array[], int x, int y){
	int array1[x];
	int arraycont[y];
	for(int i=0; i<y;i++){
		arraycont[i]=0;
	}
	for(int i=0;i<x;i++){
		++arraycont[array[i]];
	}
	for(int i=1;i<y;i++){
		arraycont[i]=arraycont[i]+arraycont[i-1];
	}
	for(int i=0;i<x;i++){
		array1[--arraycont[array[i]]]=array[i];
	}
	for(int i=0;i<x;i++){
		array[i]=array1[i];
	}
}

void mostrar_datos(int array[],int x){
	cout<<"la lista ordenada es"<<endl;
	for(int i=0;i<x;i++){
		cout<<array[i]<<" ";
	}
}