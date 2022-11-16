#include <iostream>

using namespace std;

//definir las variables necesarios para la ejecucion del codigo
int Num1,Num2,NumeroMultiplicar,velocidadInicio=0, velocidadFinal=0, aceleracion=0,t=0,op;

int main(int argc, char const *argv[])
{
    cout<<"Digite un la opcion que desea usar \n 1. Calculadora sencilla \n 2. Tablas de multiplicar \n 3. Calcular la acelarecion de un vehiculo. \n Opcion: ";
    cin>> op; 

    switch (op)
{
   case 1:
        //Calculadora sencilla
        cout << "Ingresa el primer numero: ";
        cin >> Num1;

        cout << "Ingresa el segundo numero: ";
        cin >> Num2;

        cout <<"La suma de los numeros es: "<< Num1+Num2 <<endl;
        cout <<"La resta de los numeros es: "<< Num1-Num2 <<endl;
        cout <<"La multiplicacion de los numeros es: "<< Num1*Num2 <<endl;
        cout <<"La division de los numeros es: "<< Num1/Num2 <<endl;
        cout <<"El residuo es: "<< Num1%Num2 <<endl;
    system("pause");

   case 2://Imprimir tablas de multiplicar de un número ingresado
        cout<<"\nSegundo ejercicio con tablas de multiplicar"<<endl;
        do{
            cout<<"Ingrese un numero para ver su tabla de multiplicar: ";
            cin>>NumeroMultiplicar;

        }while((NumeroMultiplicar<1) || (numero>30));
            
        for(int i=1; i<=10; i++){
            cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
        }
    system("pause");

   case 3://calcular la aceleracion desde velocidad inicial y velocidad final   
        cout<<"\nCalcular la aceleracion de un vehiculo: " ;
        cout<<"Introduce la velocidad inicial: ";
        cin>>velocidadInicio;

        cout << "Introduce la velocidad final: ";
        cin>>velocidadFinal;

        cout << "Introduce el tiempo: ";
        cin>>t;

        acel = (velocidadFinal - velocidadInicio)/t;
        cout <<"La acelacion del vehiculo es:\n "<< aceleracion <<endl;
    
    system("pause");
    return 0;
    
   default: //No ha dijitado una opcion disponible
        cout<<"No ha elegido una opcion del 1 al 3";
}      
}
