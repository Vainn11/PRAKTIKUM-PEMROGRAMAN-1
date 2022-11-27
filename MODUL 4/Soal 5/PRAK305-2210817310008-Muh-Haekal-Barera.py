waktu = int(input())
hari = int (waktu // 86400)
sisahari = int (waktu % 86400)
jam = int (sisahari // 3600)
sisajam = int (sisahari % 3600)
menit = int (sisajam // 60)
detik = int (sisajam % 60)

if waktu <= 86400 :
    print("%.2d:%.2d:%.2d"% (jam, menit, detik))
else :
    print("%d hari %.2d:%.2d:%.2d"% (hari, jam, menit, detik))