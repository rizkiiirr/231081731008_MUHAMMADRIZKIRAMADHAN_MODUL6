pertama, kedua = map(int, input().split())
baris1 = []
baris2 = []
if (pertama != kedua):
    print("Jumlah tidak sama")
else:
    barispertama = input().split()
    bariskedua = input().split()
    for i in range(0,pertama):
        baris1.append(int(barispertama[i]))
        baris2.append(int(bariskedua[i]))
        for i in range(pertama):
            print(baris1[i] * baris2[i], end=" ")
