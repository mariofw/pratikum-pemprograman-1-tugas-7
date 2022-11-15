a, b = map(int, input().split())
angka = []
x = 0
isi = list(map(int, input().split()))
for i in range (a):
    angka.append(isi[x : x + b])
    x = x + b
for a in angka:
    for isi in a:
        print(isi, end=' ')
    print()