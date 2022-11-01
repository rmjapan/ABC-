
#include <bits/stdc++.h>

using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
int N,Q;
cin>>N>>Q;
vector<vector<int>>A(N);
for (int i = 0; i < N; i++)
{
    int L1;
    cin>>L1;
    A[i].resize(L1);
    for (int j = 0; j < L1; j++)
    {
      cin>>A[i][j];
    }
    
}
for (int i = 0; i < Q; i++)
{   int s,t;
    cin>>s>>t;
    cout << A[s-1][t-1] << endl;
}


    

    return 0;
}