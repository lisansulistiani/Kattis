#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int K;
    cin>>K;
    int a = 1;
    int b = 0;

    for (int i = 0; i < K; ++i) {
        int tmp = a + b;
        a = b;
        b = tmp;
    }

    cout << a << " " << b << endl;

    return 0;
}
