#include <iostream>

int main()
{
    int arreglo[] = {8,3,5,1,6,2,7,4};
    int pos, aux;

    for(int i = 0; i < 8; i++)
    {
        pos = i;
        aux = arreglo[i];

        while((pos > 0) && (arreglo[pos - 1] > aux))
        {
            arreglo[pos] = arreglo[pos - 1];
            pos--;
        }

        arreglo[pos] = aux;

    }

    for(int i = 0; i < 8; i++)
    {
        std::cout<<arreglo[i]<<" ";
    }

    return 0;
}