#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int contador=0;			//
	string arreglo[5]={"Inicio","Primer Dato","Segundo Dato","Tercer Dato","Fin"};	//arreglo de tipo string con 5 elementos.
	while(contador<5){
		cout<< arreglo[contador]<<endl;			// se imprime el contenido en cada INDICE.
		contador++;								// contador se incrementa en 1.
	}	
	getch();
	return 0;
}
