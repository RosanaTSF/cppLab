#include <iostream>
#include "city.h"

using namespace std;

city::city (int a=0, int p=0){ // O operador de escopo ::  especifica o contexto para acessar ou definir um membro, um método, uma variável ou uma constante, dentro de uma classe, estrutura ou namespace.
    ano = a;
    populacao = p;
}

void city::setano (int a){
    ano = a;
}

int city::getano (){
    return ano;
}

void city::setpopulacao (int p){
    populacao = p;
}

int city::getpopulacao (){
    return populacao;
}

void city::acrescentapopulacao (int p){
    populacao += p;
}
