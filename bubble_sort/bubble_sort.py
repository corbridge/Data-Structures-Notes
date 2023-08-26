arreglo = [8,3,5,1,6,2,7,4]

for i in range(len(arreglo) - 1):
    for j in range(len(arreglo) - 1):
        if arreglo[j] > arreglo[j + 1]:
            aux = arreglo[j]
            arreglo[j] = arreglo[j + 1]
            arreglo[j + 1] = aux
print(arreglo)