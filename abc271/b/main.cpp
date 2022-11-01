#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int N,Q;
    cin>>N>>Q;
    //long long int A[10000001][10000001];
    vector<long long int>A(N);
    for(long long int i = 0; i < N; i++) {
    int L;
        cin>>L;
        for(long long int j = 0; j < L; j++) {
            cin>>A[j].uk(x);
            }
    }

    for(long long int i = 0; i < Q; i++) {
        int s,t;
        cin>>s>>t;
        cout << A[s-1][t-1] << endl;
    }
    

    return 0;
}