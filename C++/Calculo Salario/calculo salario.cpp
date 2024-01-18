/*  
* Valor del salario diario en el 20xx.
* Al trabajador se le debe pagar más que el salario diario.
* Carga prestacional en el salario diario del trabajador.
* Valor de la seguridad social por día de trabajo.
* Aportes parafiscales por día de trabajo.
* Costo total del día de trabajo para el empleador.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char** argv) {
	
	float salario,valor_dia,valor_dia_aux_trans,aux_trans;
	
	cout<< "Digite el valor del salario : ";
	cin>> salario;
	cout<< "Digite el valor del auxilio de transporte : ";
	cin>> aux_trans;
	valor_dia = salario/30;
	valor_dia_aux_trans = aux_trans/30;
	cout<< "Valor dia : "<< valor_dia<<endl;
	cout<< "Aux Transporte dia : "<< valor_dia_aux_trans;
	
	cout<< "\n\n\t CARGA PRESTACIONAL EN EL SALARIO DIARIO DEL TRABAJADOR";
	cout<< "\n";
	cout<< "\n\t Prima de servicio : 8.33% ";
	cout<< "\n\t Auxilio de Cesantias: 8.33% ";
	cout<< "\n\t Intereses sobre cesantias: 12%";
	cout<< "\n\t Vacaciones: 4.17% "<<endl;
	
	cout<< "\n Estos porcentajes se aplican sobre el salario diario mas el auxilio de transporte : "<<endl;	
	
	getch();
	return 0;
}