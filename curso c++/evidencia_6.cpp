#include <iostream>
using namespace std;
int numero;
int i = 0;
float a, b, c;
string conts;

int main(int argc, char const *argv[])

{
cout << "Ingrese S o s si usted desea ingresar una nota: ";
cin >> conts;


while(conts == "s" || conts == "S" )
{
	cout << "Ingrese la nota: ";
	cin >> numero;
	b = b + numero;
	cout << "Ingrese S si desea continuar o ingrese N si desea finalizar ";
    cin >> conts;
    i++;
}
c = b/i;
cout << "El promedio es: " <<c ;

}
