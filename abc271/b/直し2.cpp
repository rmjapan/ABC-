#include <bits/stdc++.h>

using namespace std;

int main() {
    int N,Q;
    cin>>N>>Q;
    vector<vector<int>> A(N);
    for(int i = 0; i < Q; i++) {
        int l1;
        cin>>l1;
        A[i].resize(l1);
        for (int k = 0;k < l1; k++)
        {
            int p;
            cin>>p;
         A[i].push_back(p);
        }


    }
    for(int i = 0; i < Q; i++) {
 int s,t;
    cin>>s>>t;
    cout << A[s-1][t-1] << endl;

    }
    

        

    return 0;
}