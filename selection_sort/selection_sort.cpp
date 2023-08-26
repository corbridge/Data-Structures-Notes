#include <iostream>
using namespace std;

int main()
{
    int arreglo[] = {8,3,5,1,6,2,7,4};
    int min, aux;

    for(int i = 0; i < 8; i++)
    {
        min = i;

        for(int j = i + 1; j < 8; j++)
        {
            if(arreglo[j] < arreglo[min])
            {
                min = j;
            }
        }

        aux = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min] = aux;

    }

    for(int i = 0; i < 8; i++)
    {
        cout<<arreglo[i]<<" ";
    }

    return 0;
}