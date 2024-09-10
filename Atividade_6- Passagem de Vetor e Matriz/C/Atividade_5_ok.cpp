//C. Implemente funções (e suas chamadas no main()), de acordo com as três formas
//de passagem de vetores por parâmetro, que cumpram as seguintes funcionalidades:
//1. Retorne o maior dentre os valores armazenados em um vetor de inteiros.
//2. Retorne a média dos elementos de um vetor de inteiros.
//3. Retorne o número de elementos positivos armazenados em um vetor de inteiros.
//4. Insira n valores em um vetor e apresente-o na função main() (n deve ser fornecido
//como parâmetro.)
//5. Encontre o maior e o menor número em um vetor de inteiros e os apresente na
//função main() (é necessária a passagem de parâmetros por referência). 
#include <iostream>
using namespace std;
#define K 10

int maior(int v[], int k)
{
    int maior = v[0];
    for (int i = 1; i < k; i++)
    {
        if (v[i] > maior)
            maior = v[i];
    }
    return maior;
}

int maior_2(int v[K])
{
    int maior = v[0];
    for (int i = 1; i < K; i++)
    {
        if (v[i] > maior)
            maior = v[i];
    }
    return maior;
}

int maior_3(int *v, int k)
{
    int maior = v[0];
    for (int i = 1; i < k; i++)
    {
        if (*(v + i) > maior)
            maior = *(v + i);
    }
    return maior;
}

double media(int v[], int k)
{
    double media = 0.0;
    for (int i = 0; i < k; i++)
    {
        media += v[i];
    }
    return media / k;
}

double media_2(int v[K])
{
    double media = 0.0;
    for (int i = 0; i < K; i++)
    {
        media += v[i];
    }
    return media / K;
}

double media_3(int *v, int k)
{
    double media = 0.0;
    for (int i = 0; i < k; i++)
    {
        media += *(v + i);
    }
    return media / k;
}


int positivos(int v[], int k)
{
    int positivos = 0;
    for (int i = 0; i < k; i++)
    {
        if (v[i] > 0)
            positivos++;
    }
    return positivos;
}

int positivos_2(int v[K])
{
    int positivos = 0;
    for (int i = 0; i < K; i++)
    {
        if (v[i] > 0)
            positivos++;
    }
    return positivos;
}

int positivos_3(int *v, int k)
{
    int positivos = 0;
    for (int i = 0; i < k; i++)
    {
        if (*(v + i) > 0)
            positivos++;
    }
    return positivos;
}


void insira_td(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}
void maior_menor(int *v, int k, int &maior, int &menor)
{
    maior = v[0];
    menor = v[0];
    for (int i = 1; i < k; i++)
    {
        if (v[i] > maior)
            maior = v[i];
        if (v[i] < menor)
            menor = v[i];
    }
}

int main()
{
    int k = 10, v[k]={1,2,3,4,5,6,7,8,9,0}, n;
    cout << "Digite o numero de elementos: ";
    cin >> n;
    insira_td(v, n);
    cout << "Vetor: ";
    for (int i = 0; i < k; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    int maior_valor = maior(v, k);
    cout << "Maior valor (maior): " << maior_valor << endl;

    int maior_valor_2 = maior_2(v);
    cout << "Maior valor (maior_2): " << maior_valor_2 << endl;

    int maior_valor_3 = maior_3(v, k);
    cout << "Maior valor (maior_3): " << maior_valor_3 << endl;

    double media_valor = media(v, k);
    cout << "Media (media): " << media_valor << endl;

    double media_valor_2 = media_2(v);
    cout << "Media (media_2): " << media_valor_2 << endl;

    double media_valor_3 = media_3(v, k);
    cout << "Media (media_3): " << media_valor_3 << endl;

    int positivos_valor = positivos(v, k);
    cout << "Numero de elementos positivos (positivos): " << positivos_valor << endl;

    int positivos_valor_2 = positivos_2(v);
    cout << "Numero de elementos positivos (positivos_2): " << positivos_valor_2 << endl;

    int positivos_valor_3 = positivos_3(v, k);
    cout << "Numero de elementos positivos (positivos_3): " << positivos_valor_3 << endl;

    int maior, menor;
    maior_menor(v, k, maior, menor);
    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
}
