ruangan = int(input(" "))
zetsu = []
nilai = input((" ").split())
for i in range(0, ruangan):
    zetsu.append(int(nilai[i]))
for i in range(0, ruangan):
    print(zetsu[i] * (i + 1), end=" ")