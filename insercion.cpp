#include <iostream>
using namespace std;
void insercion(int array[], int tam);
void mostrar(int [],int );
int main(){
	int array[]={5,9,8,6,3,2};
	int tam=sizeof(array)/sizeof (array[0]);
	insercion(array,tam);
	mostrar(array,tam);
	return 0;

}
void insercion(int array[], int tam){
	int i,aux,pos;
	for(i=0;i<tam;i++){
		pos=i;
		aux=array[i];
		while((pos>0) && (array[pos-1]>aux)){
				array[pos]=array[pos-1];
				pos--;
	 		}
	 	array[pos]=aux;
		}
		
	}
void mostrar(int array[], int tam){
	for(int i=0;i<tam;i++){
		cout<<array[i]<<" ";
	}
}