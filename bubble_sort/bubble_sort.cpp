#include <iostream>
using namespace std;

int main()
{
    int arreglo[] = {8,3,5,1,6,2,7,4};
    int aux;

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(arreglo[j] > arreglo[j + 1])
            {
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }
    for(int i = 0; i < 8; i++)
    {
        cout<<arreglo[i]<<" ";
    }

    return 0;
}