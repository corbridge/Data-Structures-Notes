arreglo = [8,3,5,1,6,2,7,4]

for i in range(len(arreglo)):
    pos = i
    aux = arreglo[i]
    while((pos > 0) & (arreglo[pos - 1] > aux)):
        arreglo[pos] = arreglo[pos - 1]
        pos -= 1
    arreglo[pos] = aux
print(arreglo)