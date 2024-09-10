// A função has_zero() deve retornar true se um dos elementos do vetor tem valor
// zero e false se todos os elementos são diferentes de zero. Infelizmente, essa função
// contém um erro. Encontre o erro e mostre como arrumá-lo.
// bool has_zero(int a[], int n) {
// int i;
// for (i = 0; i < n; i++)
// if (a[i] == 0)
// return true; FALTA O BRAKE
// else
// return false; ERRADO, pois o codigo deve retornar false se, e somente se, TODOS os elementos forem diferentes de zero.....
// }

// CODIGO CORRRIGIDO:

bool has_zero(int a[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
        if (a[i] == 0)
        {
            return true;
            break;
        }
        else
        {
            j++;
            return false;
        }
}