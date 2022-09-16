#include<iostream>
using namespace std;
int hitungKingQueen(int N)
{
    if(N!=1)
    {
        if(N==0)
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<-(N-1)<<" ";
        }
    }
    else
    {
        cout<<0<<" ";
    }
}
int hitungRooksBishopsKnights(int X)
{
    if(X!=2)
    {
        if(X<2)
        {
            cout<<2-X<<" ";
        }
        else
        {
            cout<<-(X-2)<<" ";
        }
    }
    else
    {
        cout<<0<<" ";
    }
}
int hitungPawns(int P)
{
    if(P!=8)
    {
        if(P<8)
        {
            cout<<8-P<<endl;
        }
        else
        {
            cout<<-(P-8)<<endl;
        }
    }
    else
    {
        cout<<0<<endl;
    }
}
int main()
{
    int KING, QUEEN, ROOKS, BISHOPS, KNIGHTS, PAWNS;
    //K=1;Q=1;R=2;;B=2;K=2;P=8
    cin>>KING>>QUEEN>>ROOKS>>BISHOPS>>KNIGHTS>>PAWNS;
    hitungKingQueen(KING);
    hitungKingQueen(QUEEN);
    hitungRooksBishopsKnights(ROOKS);
    hitungRooksBishopsKnights(BISHOPS);
    hitungRooksBishopsKnights(KNIGHTS);
    hitungPawns(PAWNS);
    return 0;
}
