#include<bits/stdc++.h>

using namespace std;

int a, b, n, t, mx;
char c;
vector<int> v;

int work(char x, int a, int b) {
    switch(x) {
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '*':
            return a * b;
        default:
            return (int) -1e9;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << right;
    while(cin >> n) {
        if(n == 0) {
            break;
        }
        if(++t > 1) {
            cout << "\n";
        }
        v.clear();
        mx = 0;
        for(int i = 0; i < n; i++) {
            cin >> a >> c >> b;
            int w = work(c, a, b);
            v.push_back(w);
            mx = max(mx, (int) to_string(w).length());
        }

        int f = 50/(mx+1) + ((50 % (mx+1)) == mx);

        stringstream ss;

        for(int i = 0; i < n; i++) {
            cout << setw(mx) << v[i];
            bool lil = (i % f == f-1) || (i == n-1);
            if(!lil) {
                cout << " ";
            }
            if(lil) {
                cout << "\n";
            }
        }
    }
    return 0;
}