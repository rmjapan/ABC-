
#include <bits/stdc++.h>

using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
int N;
cin>>N;
vector<ll>A(N);
for(int i = 0; i < N; i++) {
   cin>>A[i];
}
int ans=0;
ll max1=A[0];

for(int i = 0; i < N; i++) {
    if(max1<A[i]){

       ans=i;
       max1=A[i];


    }

   

}
ans++;
cout << ans << endl;
    /*
    N本の橋　と高さ
    */

    return 0;
}