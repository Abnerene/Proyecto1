#include <iostream>
#include <string>
#include <fstream>

using namespace std;
#include "otro.h"

int main() {

  string tabla[2];
  tabla[0]="0123456789";
  tabla[1]="By/8T&QEPF";

  string entrada,salida,cantidad1,cantidad2,numero1,numero2,operador,resultado;
  int b,d,i,largo,t=0;
  string linea;

  cout<<"Escribe el nombre del archivo de entrada"<<endl;
  cin >> entrada ;
  cout<<endl;
  cout<<"Escribe el nombre del archivo de salida"<<endl;
  cin >> salida ;
  cout<<endl;

  ifstream archivoEntrada;
  archivoEntrada.open(entrada);

  ofstream archivoSalida;
  archivoSalida.open(salida);

while(getline(archivoEntrada,linea))
{

if(t>0){


  d=linea.find(" "); 
  numero1=Cortar(linea,d);
  linea=linea.erase(0,d+1);
  d=linea.find(" ");
  operador=Cortar(linea,d);
  numero2=linea.erase(0,d+1);


  largo=numero1.length();///largo del primer numero
  i=0;
  while(i<largo){//while primer número "desencripta el número1"

      string letra=numero1.substr(i,1);
      b= tabla[1].find(letra);
      cantidad1=cantidad1.insert(i,to_string(b));
      i++;
     
  }


  i=0;
  largo=numero2.length();//largo del segundo número
  while(i<largo){//while del segundo número "desencripta el número2"

      string letra=numero2.substr(i,1);
      b= tabla[1].find(letra);
      cantidad2=cantidad2.insert(i,to_string(b));
      i++;

  }

  resultado=FormatoOperacion(cantidad1,cantidad2,operador);
    
  cout<<resultado<<endl;
  archivoSalida << resultado <<endl;

  cantidad1="";
  cantidad2="";

  }

  t++;
}

archivoEntrada.close();
archivoSalida.close();

return 0;


}
//intento de commit