//primero se importa iostream para poner en practica las operaciopnes de entrada y salida

#include <iostream>
//se utiliza la siguiente linea "using namespace std;" para dar acceso al std

using namespace std;

//continuando se observa la implemetacion del codigo al utilizar cout y cin para obtener los datos.
//continuando con las operaciones aritmeticas para poder finalmente ilustrarlas
//en la parte final del algoritmo se observa que se utilizala linea "system("pause"); return EXIT_SUCCESS;",
//esto con el fin de poder ejecutar el programa sin que se suspenda abruptamente
int main()
{
 int a, b;
 cout << "Ingresa el primer numero"<<endl;
 cin >> a;
 cout << "Ingresa el segundo numero"<<endl;
 cin >> b;
 cout <<"La suma de los numeros es: "<< a+b <<endl;
 cout <<"La resta de los numeros es: "<< a-b <<endl;
 cout <<"La multiplicacion de los numeros es: "<< a*b <<endl;
 cout <<"La division de los numeros es: "<< a/b <<endl;
 cout <<"El residuo es: "<< a%b <<endl;

 system("pause");
 return EXIT_SUCCESS;
}
