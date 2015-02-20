#include "Evaluador.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

//Devuele la suma de todos los elementos de mi_pila (dado) y mi_cola (dado)
float sumarElementos(stack<float> mi_pila, queue<float> mi_cola)
{
    // suma la valores de mi cola
    int c=0;
    while(!mi_cola.empty()) // verifica que cola no este vacia
    {
      c = c + (mi_cola.front()); // suma los elementos de mi cola
      mi_cola.pop();
    }

    // suma los valores de mi pila
    int p=0;
    while(!mi_pila.empty()) // verifica que pila no este vacia
    {
      p = p + (mi_pila.top()); // suma los elementos de mi pila
      mi_pila.pop();
    }

    return c+p;
}

//Devuelve true si mi_vector (dado) tiene valores repetidos
bool existenRepetidos(vector<string> mi_vector)
{
    return false;
}

//Devuelve la cantidad de elementos en edades (dado) que son mayores o iguales que 18
int contarMayoresDeEdad(list<int>edades)
{

   int cont=0;
   while (!edades.empty())
    {
    if(edades.front() >= 18)
        cont++;

    edades.pop_front();
    }
return cont;

}

//Devolver el un mapa con los siguientes valores dados en la tabla
//   LLave      |   Valor
//----------------------------
//  "Lolo"      |   98923212
//  "Lola""     |   92123243
//  "Rufo"      |   93212322
//  "Punpun"    |   99321273
//  "Ponpon"    |   92133243
map<string,int> obtenerAgenda()
{
    map<string,int> agenda;
    agenda["Lolo"]= 98923212;
    agenda["Lola"]= 92123243;
    agenda["Rufo"]= 93212322;
    agenda["Punpun"]= 999321273;
    agenda["Ponpon"]= 92123243;

    return agenda;
}

//Devuelve el numero menor en mi_set (dado)
double obtenerMenor(set<double> mi_set)
{
    set<double> mi_set1;

    set<double>::iterator i= mi_set.begin();

    double may=0;
    while(i!=mi_set.end())
    {
        i++;
    }


    return may;
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
