#include <iostream>
using namespace std;
void merge(int array[], int izquierda, int medioizq, int mediodere, int derecha){
	int longitud=derecha-izquierda+1;
	int aux[longitud];
	int left=izquierda;
	int right=mediodere;
	for (int i=0;i<longitud;i++){
		if(left>medioizq){
			aux[i]=array[right++];
		}else if(right>derecha){
			aux[i]=array[left++];
		}else if(array[left]<=array[right]){
			aux[i]=array[left++];
		}else{
			aux[i]=array[right++];
		}
	}
	for(int i=0;i<longitud;i++){
		array[izquierda++]=aux[i];

	}
}
void nerge_sort(int array[], int primero, int ultimo){
	if(	primero>=ultimo){
		return;
	}
	else{
		int medio=(primero+ultimo)/2;
		nerge_sort(array,primero,medio);
		nerge_sort(array,medio+1,ultimo);
		merge(array,primero,medio, medio+1, ultimo);
	}
}
void merge_sort(int array[],int tam){
	nerge_sort(array,0,tam-1);
}
void mostrar(int array[], int tam){
	for(int i=0;i<tam;i++){
		cout<<array[i]<<" ";
	}
}
int main(){
	int array[]={9,5,3,6,8,1,4};
	int tam=sizeof(array)/sizeof(array[0]);
	mostrar(array,tam);
	cout<<endl;
	merge_sort(array,tam);
	cout<<"arreglo ordenado"<<endl;
	mostrar(array,tam);
	return 0;

}