#include <bits/stdc++.h>

using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int func(int N){
    if(N==0)return 1;
    return N*func(N-1);

}
int main() {
int N;
cin>>N;
cout << func(N) << endl;
    

    return 0;
}