#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void pedirdatos(int [],int);
int getmax(int [], int);
void coutingsor(int [], int);
void radix(int [], int);
void mostrar_datos(int [],int);
int main(){
	int tam;
	cout<<"ingrese el largo de la cadena: ";
	cin>>tam;
	int array[tam];
	pedirdatos(array,tam);
	radix(array,tam);
	mostrar_datos(array,tam);
}
void pedirdatos(int array[],int tam){
	for(int i=0;i<tam;i++){
		cout<<"ingrese un valor: ";
		cin>>array[i];
	}
}
int getmax(int array[], int tam){
	int max=array[0];
	for(int i=1; i<tam;i++){
		if(array[i]>max){
			max=array[i];
		}
	}
	return max;
}
void coutingsor(int array[],int tam,int div){
	int output[tam];
	int cont[10]={0};
	for(int i=0;i<tam;i++){
		cont[(array[i]/div)%10]++;
	}
	for(int i=1;i<10;i++){
		cont[i]+=cont[i-1];
	}
	for(int i=tam-1;i>=0;i--){
		output[cont[(array[i]/div)%10]-1]=array[i];
		cont[(array[i]/div)%10]--;
	}
	for(int i=0;i<tam;i++){
		array[i]=output[i];
	}


}
void radix(int array[],int tam){
	int m= getmax(array,tam);
	for(int i=1;m/i>0;i*=10){
		coutingsor(array,tam,i);
	}
}
void mostrar_datos(int array[], int tam){
	for(int i=0;i<tam;i++){
		cout<<array[i]<<" ";
	}
}
