#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int N;

    cin>>N;
    vector<long long int>A(N);
    for(int i = 0; i < N; i++) {
        cin>>A[i];
    }
   int size=A.size();
   int k=1;
   int i=0;
   int ans=0;
   if(size==1&&A[0]==1){cout << 1 << endl;return 0;}
   while (i<=size&&size>1)
   {
   if(A[i]==k){
    size--;
    k++;
    ans++;
    i++;
    }
   else if(size>=2) {
    A.pop_back();
    A.pop_back();
    size--;size--;
    ans++;
    k++;
   }
   }
   
   cout << ans << endl;
   
    

    return 0;
}