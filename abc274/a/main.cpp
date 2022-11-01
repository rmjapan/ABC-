#include <bits/stdc++.h>

using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
double A,B,C;

cin>>A>>B;
C=B/A;
    // A,B は 1≤A≤10,0≤B≤A 
    //この手の問題は苦手
    printf("%.3f",C);//ちゃんと四捨五入してくれるという有能ぶり。

    return 0;
}