#include <iostream>
//#include <conio.h>
 
using namespace std;
 
int main() {
    int edad;
 
    cout<<"\nIngrese la edad de la persona : ";
    cin>>edad;
    
    if (edad<6){
    	cout<<"\nprimera infancia";
	}
	else{
		if (edad >= 6 && edad < 12 ){
		    	cout<<"\nsegunda infancia"; 
	    }
    	if (edad >= 12 && edad < 18 ){
    	cout<<"\nadolescencia"; 
		}
	} 
	
  return 0;
}
