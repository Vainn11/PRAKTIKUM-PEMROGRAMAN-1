x = 0
y = 0
asli = list(input(""))
palsu = list(input(""))

kode = len(asli)
pesan = len(palsu)

if kode != pesan:
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range(kode):
        if " " in asli[i] and " " in palsu[i] :
            continue
        
        elif asli[i] == palsu[i]:
            print("*", end="")
            x += 1
        else:
            print("#", end="")
            y += 1
    print("\n* = ", x)
    print("# = ", y)
    if x >= y:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")