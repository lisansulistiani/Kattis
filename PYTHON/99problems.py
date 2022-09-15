a = list(input())
if(int("".join(a))<100):
    print(99)
else:
    kebawah = []
    keatas = []
    nilai_bawah = int(str(int("".join(a[:-2]))-1)+str(99))
    nilai_atas = int(str(int("".join(a[:-2])))+str(99))
    nilai = int("".join(a))
    if(nilai-nilai_bawah<nilai_atas-nilai):
        print(nilai_bawah)
    else:
        print(nilai_atas)