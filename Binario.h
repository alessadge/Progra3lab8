#ifndef BINARIO_H
#define BINARIO_H
#include <vector>
#include <iostream>
using namespace std;

class Binario{
   private:
      int* arreglo;
   public:
      Binario();

      int* getArreglo();
      void setArreglo(int*);

      int* operator +(Binario& binario){
	int* temporal=new int[4];

      	for(int i=0; i<4; i++){

		if(this->arreglo[i]==1&&binario.getArreglo()[i]==0){
			temporal[i]=1;
		}
		if(this->arreglo[i]==1&&binario.getArreglo()[i]==1){
			temporal[i]=1;

		}
		if(this->arreglo[i]==0&&binario.getArreglo()[i]==0){
			temporal[i]=0;


		}
		if(this->arreglo[i]==0&&binario.getArreglo()[i]==1){
			temporal[i]=1;


		}
	}
	return temporal;
      }

     int* operator -(Binario& binario){
        int* temporal=new int[4];

        for(int i=0; i<4; i++){

                if(this->arreglo[i]==1&&binario.getArreglo()[i]==0){
                        temporal[i]=0;
                }
                if(this->arreglo[i]==1&&binario.getArreglo()[i]==1){
                        temporal[i]=1;

                }
                if(this->arreglo[i]==0&&binario.getArreglo()[i]==0){
                        temporal[i]=0;


                }
                if(this->arreglo[i]==0&&binario.getArreglo()[i]==1){
                        temporal[i]=0;


                }
        }
        return temporal;
      }
       int* operator *(Binario& binario){
        int* temporal=new int[4];

        for(int i=0; i<4; i++){

                if(this->arreglo[i]==1&&binario.getArreglo()[i]==0){
                        temporal[i]=0;
                }
                if(this->arreglo[i]==1&&binario.getArreglo()[i]==1){
                        temporal[i]=1;

                }
                if(this->arreglo[i]==0&&binario.getArreglo()[i]==0){
                        temporal[i]=1;


                }
                if(this->arreglo[i]==0&&binario.getArreglo()[i]==1){
                        temporal[i]=1;


                }
        }
        return temporal;
      }
      int* operator /(Binario& binario){
        int* temporal=new int[4];

        for(int i=0; i<4; i++){

                if(this->arreglo[i]==1&&binario.getArreglo()[i]==0){
                        temporal[i]=0;
                }
                if(this->arreglo[i]==1&&binario.getArreglo()[i]==1){
                        temporal[i]=1;

                }
                if(this->arreglo[i]==0&&binario.getArreglo()[i]==0){
                        temporal[i]=1;


                }
                if(this->arreglo[i]==0&&binario.getArreglo()[i]==1){
                        temporal[i]=0;


                }
        }
        return temporal;
      }
      int* operator ^(Binario& binario){
        int* temporal=new int[4];

        for(int i=0; i<4; i++){

                if(this->arreglo[i]==1&&binario.getArreglo()[i]==0){
                        temporal[i]=1;
                }
                if(this->arreglo[i]==1&&binario.getArreglo()[i]==1){
                        temporal[i]=0;

                }
                if(this->arreglo[i]==0&&binario.getArreglo()[i]==0){
                        temporal[i]=0;


                }
                if(this->arreglo[i]==0&&binario.getArreglo()[i]==1){
                        temporal[i]=1;


                }
        }
        return temporal;
      }

};
#endif
