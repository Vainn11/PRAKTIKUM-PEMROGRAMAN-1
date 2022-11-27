def pilihan ():
    print("\nPilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n")
    nilai = int(input('Masukkan Pilihan : '))
    if(nilai >= 1 and nilai <= 4) :
        a = float(input('\nMasukkan Nilai Pertama : '))
        b = float(input('\nMasukkan Nilai Kedua : '))
        if (nilai == 1) :
            hasil = a + b
            print("\nHasil Penjumlahan Antara %.2f dan %.2f Adalah %.2f\n" %(a,b,hasil))
            pilihan()
        elif (nilai == 2) :
            hasil = a - b
            print("\nHasil Pengurangan Antara %.2f dan %.2f Adalah %.2f\n" %(a,b,hasil))
            pilihan()
        elif(nilai == 3) :
            hasil = a * b
            print("\nHasil Perkalian Antara %.2f dan %.2f Adalah %.2f" %(a,b,hasil))
            pilihan()
        elif(nilai == 4) :
            hasil = a / b
            print("\nHasil Pembagian Antara %.2f dan %.2f Adalah %.2f" %(a,b,hasil))
            pilihan()
    elif (nilai == 5) :
        print("\nTerima kasih telah menggunakan kalkulator Muh. Haekal Barera\n")
    else :
        print("Input Anda Salah, Silahkan Coba Lagi \n")
        pilihan()
pilihan()