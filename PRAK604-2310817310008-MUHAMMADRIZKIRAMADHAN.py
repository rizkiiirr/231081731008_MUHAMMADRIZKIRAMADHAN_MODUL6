kalimat1 = input(" ")
kalimat2 = input(" ")

a = len(kalimat1)
b = len(kalimat2)

if(a == b):
    bintang = 0; pagar = 0
    for i in range(0, a):
        if kalimat1[i] == ' ' and kalimat2[i] == ' ':
             print(" ", end=" ")
        elif kalimat1[i] == kalimat2[i]:
             print("*", end="")
             bintang += 1
        else:
             print("#", end="")
             pagar += 1

    print("\n* = {}\n# = {}".format(bintang, pagar))
    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
else:
        print("Panjang kalimat berbeda, pesan palsu")