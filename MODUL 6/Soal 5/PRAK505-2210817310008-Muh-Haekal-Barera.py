def Biodata(tahun, nama, asal):
    tahun_sekarang = 2020
    tahun = int(tahun)
    
    print("\nPerkenalkan Nama Saya : ", nama) 
    print("Umur Saya : ", tahun_sekarang - tahun) 
    print("Saya Adalah Angkatan : ", tahun_sekarang) 
    print("Asal Saya Dari : ", asal) 

tahunLahir = int (input())
Namaku = input()
Asal = input()
Biodata(tahunLahir, Namaku, Asal)