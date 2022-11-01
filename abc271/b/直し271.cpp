#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int N,Q;
    cin>>N>>Q;
   // vector<int> A(N);
   vector<vector<int>> A(N);

    for (int i = 0; i <N; i++)
    {
       int L;
       cin>>L;
      A[i].resize(L);
      for (int j = 0; j < L; j++)
      {
        cin>>A[i][j];
      }

    }
      for (int i = 0; i < Q; i++)
      {
        int s,t;
        cin>>s>>t;
       
        s--;t--;
        cout <<A[s][t] << endl;
      }
      
      

    
    


    return 0;
}