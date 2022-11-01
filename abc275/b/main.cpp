
#include <bits/stdc++.h>

using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
ll A,B,C,D,E,F;
cin>>A>>B>>C>>D>>E>>F;
ll waru=998244353;

A=A%waru;
B=B%waru;
C=C%waru;
D=D%waru;
E=E%waru;
F=F%waru;
A=A%waru;
B=B%waru;
C=C%waru;
D=D%waru;
E=E%waru;
F=F%waru;
A=A%waru;
B=B%waru;
C=C%waru;
D=D%waru;
E=E%waru;
F=F%waru;
A=A%waru;
B=B%waru;
C=C%waru;
D=D%waru;
E=E%waru;
F=F%waru;
A=A%waru;
B=B%waru;
C=C%waru;
D=D%waru;
E=E%waru;
F=F%waru;


ll a,b;

a=(A*B)%waru;
a=a%waru;
a=a%waru;
a=a%waru;
a=(a*C)%waru;
a=a%waru;
b=(D*E)%waru;
b=b%waru;
b=b%waru;
b=b%waru;
b=b%waru;
b=(b*F)%waru;
b=b%waru;
b=b%waru;
b=b%waru;
b=b%waru;
//

//ll ans=(A*B*C)-(D*E*F);
//ans%=waru;//一問正解がふえただけでなにも変わっていない。ので飛ばす。

cout << ((a-b+waru)%waru)<< endl;
// 18*18*18
//考えたいこと
// 桁overせずにあまりをもとめる方法；
//なぜだろうか？

    return 0;
}

/// ((12345434543*1234546545342324*234343234323)-(12345321**12324543))%998244353