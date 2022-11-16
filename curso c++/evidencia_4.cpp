#include <iostream>
using namespace std;

float nota1, nota2, nota3, nota4,promedio;

int main(int argc, char const *argv[])
{
cout<<"Ingrese su primer nota: ";
cin>>nota1;
cout<<"Ingrese su segunda nota: ";
cin>>nota2;
cout<<"Ingrese su tercer nota: ";
cin>>nota3;
cout<<"Ingrese su ultima nota: ";
cin>>nota4;
promedio= (nota1 + nota2 + nota3 + nota4)/4;
if (promedio>=3 && promedio<=3.4){
cout<<"Usted tiene una oportunidad para recuperar."<<endl;
}
else{
	if (promedio>=3.5){
	cout<<"Usted ha aprovado la materia."<<endl;
	}
	else{
	cout<<"No paso la materia"<<endl;
	}
}

system("pause");
return 0;
}
