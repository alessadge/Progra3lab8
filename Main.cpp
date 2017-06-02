#include<string>
#include<vector>
#include<cstdlib>
#include<iostream>
#include"Binario.h"
using namespace std;

int main(){
   int opcion;
   vector<Binario> binarios;
   while(opcion!=4){
      cout<<"MENU"<<endl;
      cout<<"1.) Crear un Binario"<<endl;
      cout<<"2.) Listar todos los binarios"<<endl;
      cout<<"3.) Calculadora"<<endl;
      cout<<"4.) Salir"<<endl;
      cin>>opcion;
      if(opcion==1){
         int random;
	 int* temporal=new int[4];
	 Binario binario;	

         for(int i=0; i <4; i ++){
            random = rand() % 100;
            if(random<=50){
               temporal[i]=1;
            }else{
               temporal[i]=0;
	    }
	 }
	 binario.setArreglo(temporal);
         binarios.push_back(binario);
         cout<<"Se agrego exitosamente el Binario posicion: "<<binarios.size()<<"."<<endl;
      

      }
      if(opcion==2){
         for(int i=0; i<binarios.size(); i++){
	    cout<<"Vector posicion: "<<i<<endl;
            for(int j=0; j<4;j++){
            cout<<binarios[i].getArreglo()[j]<<endl;
            }
         }
      }
      if(opcion==3){
	 int posicion1, posicion2;
	 cout<<"Ingrese la posicion de A: "<<endl;
	 cin>>posicion1;
	 cout<<"Ingrese la posicion de B: "<<endl;
	 cin>>posicion2;
	 
	  
      }


   }//while

return 0;
}

