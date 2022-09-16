#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;

    while(cin>>N>>M && N!=0 && M!=0)
    {
        int Jack[N], Jill[M];
        vector<int> jack, jill, ans;
        for(int i=0;i<N;i++)
        {
            cin>>Jack[i];
            jack.push_back(Jack[i]);

        }
        for(int i=0;i<M;i++)
        {
            cin>>Jill[i];
            jill.push_back(Jill[i]);
        }
        set_intersection(jack.begin(), jack.end(), jill.begin(), jill.end(), back_inserter(ans));
        cout<<ans.size()<<endl;
    }
    return 0;
}
