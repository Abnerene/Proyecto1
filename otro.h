

string Cortar(string x, int p){

 x=x.erase(p);
 return x;

}


string FormatoOperacion(string x,string b, string operador ){


  int resultado=0;
  string linea,doperador;

  if(operador==suma){    
    resultado=stoi(x) + stoi(b);
    doperador="+";
  }

  else if(operador==resta){
    resultado=stoi(x) - stoi(b);
    doperador="-";
  }

  else if(operador==multi){
    resultado=stoi(x) * stoi(b);
    doperador="*";
  }

  else if(operador==divi){
    resultado=stoi(x) / stoi(b);
    doperador="/";
  }

  linea="("+ x + ") " + doperador + " ("+ b + ")" + " = " + to_string(resultado);

  return linea;


}

