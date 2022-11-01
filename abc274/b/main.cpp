
#include <bits/stdc++.h>

using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
int H,W;
cin>>H>>W;
char A[1100][1100];
for (int i = 0; i < H; i++)
{
   for (int j = 0; j < W; j++)
   {
   cin>>A[j][i];
   }
   
}

for (int i = 0; i < W; i++)
{
    ll count=0;
   for (int j = 0; j < H; j++)2
   {
   if(A[i][j]=='#')
        count++;
   }
   if(i!=W-1)
   cout <<count<<" ";
   else cout<<count;
   
   
}
    //縦H 横Wである.

    ///これは転置行列したほうが数えやすい.aijと入力するとこを,ajiとするのがみそ


    return 0;
}