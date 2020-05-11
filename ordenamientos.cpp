#include <iostream>
using namespace std;
void ingresardatos();
void quicksort(int [], int, int );
void mostrardatos();
int array[100], cont;
int main(){
	
	cout<<"ingrese la longitud del array: ";
	cin>>cont;
	ingresardatos();
	quicksort(array,0,cont-1);
	mostrardatos();
	return 0;
}
void ingresardatos(){
	for(int i=0;i<cont;i++){
		cout<<"ingrese un numero: ";
		cin>>array[i];
	}
}
void quicksort(int array[], int izquierda, int derecha ){
	int i=izquierda, j=derecha;
	int pivot=array[(izquierda+derecha)/2];
	int aux;
	while(i<=j){
		while(array[i]<pivot)i++;
		while(array[j]>pivot)j--;
		if(i<=j){
			aux=array[i];
			array[i]=array[j];
			array[j]=aux;
			i++;
			j--;
		}
	}
	if(izquierda<=j){
		quicksort(array,izquierda,j);
	}
	if(i<=derecha){
		quicksort(array,i,derecha);
	}

}
void mostrardatos(){
	cout<<"la cadena ordenada es..."<<endl;
	for(int i=0;i<cont;i++){
		cout<<array[i]<<endl;
	}
}
