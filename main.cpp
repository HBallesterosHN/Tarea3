#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;
//Agrega valor (dado) a mi_mapa (dado), en la llave dada
//Nota: mi_mapa es un apuntador, para usarlo se sugiere desrreferenciarlo con el operador *

void asignarValor(map<string,int> *mi_mapa, string llave,int valor)
{
((*mi_mapa)[llave]=valor);//Primero desrreferenceo el apuntador con (*) y luego le guardo un elemento con los parametros recibidos
}
//Devuelve el valor asociado a la llave (dada) en mi_mapa (dado)
char obtenerValor(map<int,char> mi_mapa,int llave)
{
    return mi_mapa[llave]; //devuelvo el valor de la llave (variable)
}
//Devolver el un mapa con los siguientes valores dados en la tabla
//  LLave     |   Valor
//----------------------------
//  1         |   "lunes"
//  2         |   "martes"
//  3         |   "miercoles"
//  4         |   "jueves"
//  5         |   "viernes"
//  6         |   "sabado"
//  7         |   "domingo"
map<string,int> obtenerSemana()
{
    map<string,int> semana; //se crea un map
    semana["lunes"]=1;
    semana["martes"]=2;
    semana["miercoles"]=3;
    semana["jueves"]=4;         //aqui asigno los valores al map con su llave y valor
    semana["viernes"]=5;
    semana["sabado"]=6;
    semana["domingo"]=7;
    return semana; //retorno el map lleno
}

//devuelve la interseccion de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga unicamente los valores que mi_set1 y mi_set2 tengan en comun)
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3; //set donde se hace el match de las coincidencias en set1 y set2
    set <int>::iterator i = mi_set1.begin(); //variable iterador para recorrer set1
    while(i!=mi_set1.end())
        {//inicio while
                set <int>::iterator j = mi_set2.begin(); //iterador para set2
                while(j!=mi_set2.end())
                {//inicio while
                    if(*i == *j) //recorro el set2 en busca de coincidencias y si hay lo guardo en set3
                    {
                        mi_set3.insert(*i);
                    }
                    j++;
                }//end while
        i++;
        }//end while
    return mi_set3;
}

//devuelve la union de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga todos los valores de mi_set1 y mi_set2)
set<int> getUnion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3; //set donde se guardan los elementos de set1 y set2
    set <int>::iterator i = mi_set1.begin(); //iterador para recorrer set1 y set2
   while(i!=mi_set1.end())
        {
        mi_set3.insert(*i); //Recorro set1 y le lo guardo en set3
        i++;
        }
    i = mi_set2.begin();    //cambio el iterador a set2
    while(i!=mi_set2.end())
        {
        mi_set3.insert(*i); //Recorro set2 y le lo agrego en set3
        i++;
        }
    return mi_set3;//retorno el set matcheado
}

//devuelve true si mi_sub_set (dado) es un subconjunto de mi_set (dado)
//(mi_set contiene todos los valores de mi_sub_set)
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set)
{
  set <int>::iterator i = mi_sub_set.begin(); //iterador para recorrer sub set
   while(i!=mi_sub_set.end())
        {
                set <int>::iterator j = mi_set.begin();//iterador para rrecorer el set
                 while(j!=mi_set.end())
                {
                  if(*i == *j)  //recorro el set con un bucle de while
                    {           //si encuentra el elemento del sub set en el set: devuelve true
                       return true;
                    }
                j++;
                }
        i++;
        }
    return false; //si sale de los while y llega hasta aqui es que no encontro un elemento y retorna false
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 1;
}
