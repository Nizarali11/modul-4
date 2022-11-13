x = int(input())

hari= x/(24*3600)
jam= x % (24*3600)/3600
menit= x % 3600/60
detik= x % 60

if x<=86400:
    print("%02d:%02d:%02d" % (jam, menit, detik))
elif x>86400:
    print("%d hari %02d:%02d:%02d" % (hari, jam, menit, detik))