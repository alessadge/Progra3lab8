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
            temporal[i]= rand() % 2;
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
	 int opcion;
	 int* temporal=new int[4];
	 
	 while(opcion!=6){
	    cout<<"QUE DESEA CALCULAR?"<<endl;
	    cout<<"1) Disyuncion"<<endl;
	    cout<<"2) Conjuncion"<<endl;
	    cout<<"3) Implicacion"<<endl;
	    cout<<"4) Doble implicacion"<<endl;
	    cout<<"5) Disyuncion exclusica"<<endl;
	    cout<<"6) Salir"<<endl;
	    cin>>opcion;
	 
	    if(opcion==1){
	       cout<<"Ingrese la posicion de A: "<<endl;
               cin>>posicion1;
	       cout<<"Ingrese la posicion de B: "<<endl;
	       cin>>posicion2;

	       temporal=binarios[posicion1]+binarios[posicion2];
	       cout<<"Binario C: "<<endl;
	       for(int i=0;i<4;i++){
		  cout<<temporal[i]<<endl;
	       }
	    }
	    if(opcion==2){
	       cout<<"Ingrese la posicion de A: "<<endl;
               cin>>posicion1;
               cout<<"Ingrese la posicion de B: "<<endl;
               cin>>posicion2;
	 
	       temporal=binarios[posicion1]-binarios[posicion2];
	       cout<<"Binario C: "<<endl;
               for(int i=0;i<4;i++){
                  cout<<temporal[i]<<endl;
               }

	    }
	    if(opcion==3){
	       cout<<"Ingrese la posicion de A: "<<endl;
               cin>>posicion1;
               cout<<"Ingrese la posicion de B: "<<endl;
               cin>>posicion2;

               temporal=binarios[posicion1]*binarios[posicion2];
	       cout<<"Binario C: "<<endl;
               for(int i=0;i<4;i++){
                  cout<<temporal[i]<<endl;
               }

	    }
	    if(opcion==4){
	       cout<<"Ingrese la posicion de A: "<<endl;
               cin>>posicion1;
               cout<<"Ingrese la posicion de B: "<<endl;
               cin>>posicion2;

               temporal=binarios[posicion1]/binarios[posicion2];
	       cout<<"Binario C: "<<endl;
               for(int i=0;i<4;i++){
                  cout<<temporal[i]<<endl;
               }

	    }
	    if(opcion==5){
	       cout<<"Ingrese la posicion de A: "<<endl;
               cin>>posicion1;
               cout<<"Ingrese la posicion de B: "<<endl;
               cin>>posicion2;

               temporal=binarios[posicion1]^binarios[posicion2];
	       cout<<"Binario C: "<<endl;
               for(int i=0;i<4;i++){
                  cout<<temporal[i]<<endl;
               }

	    }
	 }//while
      }


   }//while

return 0;
}

