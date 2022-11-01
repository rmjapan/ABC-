
#include <bits/stdc++.h>

using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
ll N,K;
cin>>N>>K;
ll n=N;
ll m=n;

for (ll i = 0; i < K; i++)
{

ll p=pow(10,i+1);
m=n;

n=n/p;
if(n%p>=5){
   n++;
}
n=n*p;

}
cout << n << endl;


    return 0;
}