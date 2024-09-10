//Um valor double deve ser decomposto em uma parte inteira e uma parte
//fracionária. (Para obter somente a parte inteira do número use o modificador int.
//Por exemplo, se na função foi usada uma variável ponteiro denominada *int_part
//e uma variável float x para receber o número, use a seguinte expressão para obter
//a parte inteira: *int_part = (int) x;.)
#include<iostream>
using namespace std;

void inteiro(float *a){
   *a=int(*a);
}

int main(){
    float a;
    cin>>a;
    inteiro(&a);
    cout<<a<<endl;
}

