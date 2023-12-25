def perkalianmatriks(ordo, matriksA, matriksB):
    hasil = [[0 for _ in range(ordo)] for _ in range(ordo)]
    for i in range(ordo):
        for j in range(ordo):
            hasil[i][j] = 0
            for k in range(ordo):
                hasil[i][j] += matriksA[i][k] * matriksB[k][j]
    return hasil

ordo = int(input(" "))
matriksA = []
print("Matriks A")
for i in range(ordo):
    baris = list(map(int, input().split()))
    matriksA.append(baris)
    
matriksB = []
print("Matriks B")
for i in range(ordo):
    baris = list(map(int, input().split()))
    matriksB.append(baris)

hasil = perkalianmatriks(ordo, matriksA, matriksB)
    
print("Matriks AXB")
for i in range(ordo):
    for j in range(ordo):
        print(hasil[i][j], end=" ")
    print()