#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	system("Title Aplicacion de prueba. ");
	system("color 04");	
	int cantidad;
	int i = 1;
	float nota,suma,promedio;	
	int opcion;
	
	cout<< "ingrese el valor de las notas que desea promediar: "<<endl;
	cin>>cantidad;
	
	while(i<=cantidad){
		cout<<"\n a continuacion ingrese la nota: "<<i<<endl;
		cin>>nota;
		suma+=nota;
		i++;
	}
	promedio = suma/cantidad,
	cout<<"\n el promedio del alumno es : "<<promedio<<endl;
	system("cls");
	cout<<"\n presione \n 0 para salir del programa \n 1 si quiere agregar nueva informacion"<<endl,
	cin>>opcion;
	if(opcion == 1){
		cout<< "\n Gracias por usar el programa. ";
		system("Title Opcion 1");
	}else{
		cout<< "\n Fin del programa.";
	}
	getch();
	return 0;
}