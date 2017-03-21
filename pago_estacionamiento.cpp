#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){
    int horas;
    cout << "TEST CASES" << endl;
    // Agrega tus casos de prueba
    cout << "test data: -1"<<" Expected results: 0" <<" results:"<<pago_estacionamiento(-1)<<endl;
    cout << "test data: 0"<<" Expected results: 0" <<" results:"<< pago_estacionamiento(0) <<endl;
    cout << "test data: 1"<<" Expected results: 10"<<" results:" << pago_estacionamiento(1) <<endl;
    cout << "test data: 5"<<" Expected results: "<<5*10 <<" results:"<< pago_estacionamiento(5) <<endl;
    cout << "test data: 10"<<" Expected results: " <<10*9<<" results:"<< pago_estacionamiento(10) <<endl;
    cout << "test data: 11"<<" Expected results: 0" <<" results:"<< pago_estacionamiento(11) <<endl;
    cout << "test data: 12"<<" Expected results: "<<12*7<<" results:" << pago_estacionamiento(12) <<endl;

}

int main()
{
    casos_de_prueba();
	return 0;
}
