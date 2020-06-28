#include "iostream"

using namespace std;

void llenar_matriz(float[25][4],int,int); //float[] refiriendose a la matriz datos
void notafinal(float[25][4],int,int); //float[] refiriendose a la matriz datos
int numalum=1,numnota=1; //variables globales que se ocupan durante todo el programa

int main ()
{
    float datos[25][4];
    int nf,nc=5; //variables donde nc es numero de columnas y nf es numero de filas
    cout<<"\nBienvenido/a conoce la nota final de tus alumnos"<<endl;
    cout<<"\ndigite el numero de alumnos a evaluar (max 5)"<<endl;
    cin>>nf;
    cout<<endl;
    llenar_matriz (datos,nc,nf);//funcion guarda las 5 notas respectivas a cada alumno por separado por medio de matriz
    notafinal(datos,nc,nf);//funcion que declara de cada alumno por separa si aprobo o no
   
}

void llenar_matriz(float x[25][4],int nf,int nc){ //x[][]referencia a la matriz datos

    for (int i = 0; i < nf; i++)
    {
        cout<<"alumno: "<<numalum++<<endl; 
        for (int j = 0; j < nc; j++)
        {
            cout<<"nota numero:"<<numnota++<<endl;
            cin>>x[i][j];
        }
         numnota=1;
         cout<<endl;
    }
}
void notafinal( float x[25][4],int nc,int nf) //x[][]referencia a la matriz datos
{
      numalum=1;
      numnota=0;
      float suma,porcentaje[100];

      for (int i = 0; i < nf; i++)
       {
        for (int j = 0; j < nc; j++)
        {   
            
            porcentaje[numnota]=x[i][j]*0.20; //esta iteracion se pasa de tener una matriz a tener un solo array con respectivo porcentaje de notas
            numnota++;
        }
       }
    
     // en estas iteraciones se extrae del array elementos de 5 en 5 que son las notas de cada alumno 
     // y se evalua en cada iteracion si aprobo o no    
      for (int i = 0; i <= 4; i++){
        suma += porcentaje[i];
       }
       if (suma>7) cout<<"alumno 1 aprobado con: "<<suma<<endl;
        else cout<<"alumno 1 reprobado con: "<<suma<<endl;

     suma=0;

        for (int i = 5; i <= 9; i++){
        suma += porcentaje[i];
       }
       if (suma>7) cout<<"alumno 2 aprobado con: "<<suma<<endl;
        else cout<<"alumno 2 reprobado con: "<<suma<<endl;

    suma=0;

        for (int i = 10; i <= 14; i++){
        suma += porcentaje[i];
       }
       if (suma>7) cout<<"alumno 3 aprobado con: "<<suma<<endl;
        else cout<<"alumno 3 reprobado con: "<<suma<<endl;
     
     suma=0;

        for (int i = 15; i <= 19; i++){
        suma += porcentaje[i];
       }
       if (suma>7) cout<<"alumno 4 aprobado con: "<<suma<<endl;
        else cout<<"alumno 4 reprobado con: "<<suma<<endl;

    suma=0;

        for (int i = 20; i <= 24; i++){
        suma += porcentaje[i];
       }
       if (suma>7) cout<<"alumno 5 aprobado con: "<<suma<<endl;
        else cout<<"alumno 5 reprobado con: "<<suma<<endl;
        cout<<"Es un excelente maestro gracias vuelva pronto"<<endl;
        
    
}

    
    