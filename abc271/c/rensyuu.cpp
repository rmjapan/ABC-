#include <bits/stdc++.h>

using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
/*素因数分解*/
int N;
cin>>N;
bitset<8>A(N);
for(int i = 0; i < N; i++) {
    int k;
    cin>>k;
    A[i]=k;
    cout << A[i] << endl;
}
cout << A << endl;
}   