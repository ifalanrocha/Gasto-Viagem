#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
using namespace std; 
 
int main(void)
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    int VELOCIDADEMEDIA, TEMPO, LITROSUSADOS, DISTANCIA;
 
    cout<<"Qual o tempo ? \n";
    cin >>TEMPO;
    
    cout<<"Qual a velocidade media ? \n";
    cin >>VELOCIDADEMEDIA;
    
    DISTANCIA=TEMPO*VELOCIDADEMEDIA;
 
    LITROSUSADOS=DISTANCIA/12;
    
    cout <<"A velocidade é :"<< VELOCIDADEMEDIA; 
    cout <<"\n"; 
 
    cout <<"A distancia é :"<< DISTANCIA; 
    cout <<"\n"; 
 
    cout <<"O tempo é :"<< TEMPO; 
    cout <<"\n"; 
 
    cout <<"Os litros usados são :"<< LITROSUSADOS; 
    cout <<"\n"; 
    
    system("pause");  
}
