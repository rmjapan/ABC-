
#include <bits/stdc++.h>

using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
int N;
cin>>N;
vector<int> A(100000019);
    //これは木だね.木の高さはlog 
    //時系列で捉える必要がある.//Ai　のアメーバが分裂して消滅し,新たに2匹のアメーバが生まれる
    //同じ要素は上書き保存
   for (int i = 1; i<=N; i++)
   {
   int a;
   cin>>a;
   ll p=2*i;
   A[p]=A[a]+1;
   A[p+1]=A[a]+1;
   
   

   }
   int k=2*N+1;
  
for (int i = 1; i <=k; i++)
{
   cout << A[i] << endl;
}

    return 0;
}