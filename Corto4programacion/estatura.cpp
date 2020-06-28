#include "iostream"
#include "string.h"

using namespace std;
float media(float[]);
float arriba_media(float,float[]);// float[] refiriendose al array estaturas[25]
float abajo_media(float,float[]);// float[] refiriendose al array estaturas[25]

int main()
{
  int contador=1;
  float estaturas[25],promedio;
  cout<<"ingrese las estaturas de sus alumnos"<<endl;
  for (int i = 0; i < 25 ; i++)//iteracion para guardar los datos de las estaturas dentro de un array 
  {
      cout<<"ingrese la estatura del alumno numero "<<contador++<<endl;
      cin>>estaturas[i];
  }
  promedio=media(estaturas);// se asigna a promedio la funcion media para poder ocupar ese dato mas adelante
  cout<<"el promedio de la estatura de sus almunos es "<<promedio<<endl;
  cout<<"el numero de alturas arriba del promedio es: "<<arriba_media(promedio,estaturas)<<endl;
  cout<<"el numero de alturas abajo del promedio es: "<<abajo_media(promedio,estaturas)<<endl;
}

float media(float x[])// funcion para sacar promedio de las estaturas
{
    float media,suma;
    for (int i = 0; i < 25; i++)
    {
        suma += x[i];//suma todas las estaturas del array y luego divide entre total de alumnos que son 25
        media=suma/25;
    }
    return media;   
}

float arriba_media(float promedio,float x[]){ 
int contador=0;
for (int i = 0; i < 25 ; i++) //iteracion para recorrer todo el array de estaturas y conocer si es mayor a promedio
    {
       if (x[i] > promedio) contador++;// contador que solo suma 1 si promedio es mayor
    }
return contador;
}

float abajo_media(float promedio,float x[]){ //iteracion para recorrer todo el array de estaturas y conocer si es menor a promedio
int contador=0;
for (int i = 0; i < 25 ; i++)
    {
       if (x[i] < promedio) contador++;// contador que solo suma 1 si promedio es menor
        
    }
return contador;
}