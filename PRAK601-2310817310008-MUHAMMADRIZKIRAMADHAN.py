def matriks(baris, kolom, data):
    mat = [[0 for _ in range(kolom)] for _ in range(baris)]
    indeks = 0

    for i in range(baris):
        for j in range(kolom):
            mat[i][j] = data[indeks]
            indeks += 1
    for i in range(baris):
        for j in range(kolom):
            print(mat[i][j], end=" ")
        print()

baris, kolom = map(int, input().split())
jumlah_data = baris * kolom
data = list(map(int, input().split()))

matriks(baris, kolom, data)