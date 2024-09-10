//Os dois parâmetros recebidos devem ser devolvidos ordenados (para os parâmetros
//a e b, o menor dos valores deve ser armazenado em a e o maior em b). Caso sejam
//passados valores iguais, a ordem da resposta entre eles não importa.

#include<iostream>
using namespace std;

void ordenacao(int *a, int *b){
    if(*a>*b)
        swap(*a, *b);
}

int main(){
    int a, b;
    cin>>a>>b;
    ordenacao(&a,&b);
    cout<<a<<"\t"<<b<<endl;
}

