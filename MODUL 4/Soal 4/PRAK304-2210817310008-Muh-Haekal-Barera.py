bil = int(input("Masukkan Bilangan : "))

if bil >= 99 and bil <= 100 :
    print("Anda Menginput Melebihi Limit Bilangan")
elif bil >= 20 and bil < 99 :
    print("Puluhan")
elif bil >= 10 and bil < 20 :
    print("Belasan")
elif bil > 0 and bil < 10 :
    print ("Satuan")
else :
    print ("Nol")