#include "iostream"
#include "string.h"

using namespace std;
void codificar(char[]);
int main()
{
    int contador=1;
    char palabra[9];//el array contiene el numero de letras de la palabra murcielago
    cout<<"\nBienvenido/a\ningrese la palabra m-u-r-c-i-e-l-a-g-o letra por letra"<<endl;
    for (int i = 0; i < 10; i++) //esta iteracion se utiliza para guardar cada una de las letras de murcielago en el array palabra
    {
        cout<<"ingrese la letra numero "<<contador++<<endl;
        cin>>palabra[i];
    }
      cout<<"codificando.."<<endl;
      cout<<"la palabra murcielago fue codificada en: "<<endl;
      codificar (palabra);// muestra la palabra murcielago ya codificada
   
    
        
}

void codificar(char x[]) // funcion para codificar la palabra murcielago
{
char numeros[10] = {'0','1','2','3','4','5','6','7','8','9'}; 
for (int i = 0; i < 10; i++) //esta iteracion se utiliza para asignar a cada una de las letra su respectivo numero
    {
        x[i]=numeros[i]; 
    }
    for (int i = 0; i < 10; i++) // esta iteracion se utiliza para mostrar la palabra codificada
    {
        cout<< x[i];
    }
}
