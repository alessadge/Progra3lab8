#ifndef BINARIO_H
#define BINARIO_H
#include <vector>


class Binario{
   private:
      int* arreglo;
   public:
      Binario();

      int* getArreglo();
      void setArreglo(int*);

      int* operator +(Binario binario){
	int* temporal=new int[4];
      	for(int i=0; i<4; i++){
		if(arreglo[i]==1&&binario.getArreglo()[i]==0){
			temporal[i]=1;
		}
		if(arreglo[i]==1&&arreglo[i]==1){
			temporal[i]=1
		}
		if(arreglo[i]
	}
      }
};
#endif
