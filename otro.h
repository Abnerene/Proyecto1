

string Cortar(string x, int p){

 x=x.erase(p);
 return x;

}


string FormatoOperacion(string x,string b, string operador ){


  int resultado=0;
  string linea,doperador;

  if(operador=="C"){    
    resultado=stoi(x) + stoi(b);
    doperador="+";
  }

  if(operador=="c"){
    resultado=stoi(x) - stoi(b);
    doperador="-";
  }

  if(operador=="#"){
    resultado=stoi(x) * stoi(b);
    doperador="*";
  }

  if(operador=="@"){
    resultado=stoi(x) / stoi(b);
    doperador="/";
  }

  linea="("+ x + ") " + doperador + " ("+ b + ")" + " = " + to_string(resultado);

  return linea;
  //intento de commit2

}

