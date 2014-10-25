#include "Evaluador.h"
#include <iostream>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int * ptr)
{
   return *ptr; // Accede al valor del apuntador
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    return *a + *b; // Desrefenciamos los apuntadores de las variables y sacamos los valores para sumarlos
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if(a!=b)//Comparamos si apuntan al mismo espacio de memoria diciendo si son diferentes para que devuelva false sino sera true
    return false;
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    if(a==b)//Estamos comparando si los valores son iguales en el espacio de memoria
    return false;
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    char letra = a->at(0);//Usamos la funcion at() que devuelve el valor de la posicion 0 es decir la primera
    return letra;
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
    string * palindromo = new string ("");//Creamos una variable tipo string para almacenar el apuntador
    for( int x = a->length()-1; x>= 0; x-- ) //Ciclo que va a recorrer la longitud de la cadena almacenada restando 1 y va  comparando cada elemento hasta que x sea =0

{
     palindromo+= a->at(x);//Funcion at() donde se va posicionando en el elemento que indica el contador

}
    if(palindromo==a) //Hacemos la comparacion de los elementos que guardo
        return true;



}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    int potencia = 1;// Inicialisamos la variable potencia en 1
    for(int i=0; i<*exponente;i++)//Hacemos el ciclo para determinar cuantas veces vamos a multiplicar la base con el exponente
    {
        potencia=potencia*(*base);//Aqui vamos almacenando el resultado de la multiplicacion
    }

    return potencia;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
