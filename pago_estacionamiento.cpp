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
    cout << pago_estacionamiento(-1) <<endl;
    cout << pago_estacionamiento(0) <<endl;
    cout << pago_estacionamiento(1) <<endl;
    cout << pago_estacionamiento(5) <<endl;
    cout << pago_estacionamiento(10) <<endl;
    cout << pago_estacionamiento(11) <<endl;
    cout << pago_estacionamiento(12) <<endl;

}

int main()
{
    casos_de_prueba();
	return 0;
}
