#include <bits/stdc++.h>

using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
int N;
cin>>N;

vector<int> A(N);

vector<int> P(1000000001);
int count=0;
for(int i = 0; i<N; i++) {
    cin>>A[i];
    if(P[A[i]==0]){
        P[A[i]]=1;
        count++;
    }

}
int a=*min_element(A.begin(),A.end());
int b=*max_element(A.begin(),A.end());
for(int i =a; i <=b; i++) {
    if(P[i]!=0)P[i+1]++;
  
}

    return 0;
}