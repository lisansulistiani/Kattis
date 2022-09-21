#include<iostream>
using namespace std;
int main()
{
    int a[5][4],b[5],maksimum=0,jumlah=0,indeks;
    for(int baris=0; baris<5;baris++)
    {
        jumlah=0;
        for(int kolom=0;kolom<4;kolom++)
        {
            cin>>a[baris][kolom];
            jumlah=jumlah+a[baris][kolom];
        }
        if(jumlah>maksimum)
        {
            maksimum=jumlah;
            indeks=baris+1;
        }
    }
    cout<<indeks<<" "<<maksimum<<endl;
    return 0;
}
