arreglo = [8,3,5,1,6,2,7,4]

for i in range(len(arreglo)):
    min = i
    for j in range(i+1, len(arreglo)):
        if arreglo[j] < arreglo[min]:
            min = j
    aux = arreglo[i]
    arreglo[i] = arreglo[min]
    arreglo[min] = aux
print(arreglo)