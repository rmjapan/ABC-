
#include <bits/stdc++.h>

using namespace std;

int main() {
    int A,B;
    cin>>A>>B;
    int a[3],b[3];
    int c[3];
    int C=0;
    for(int i = 0; i < 3; i++) {
        a[i]=0;
        b[i]=0;
        c[i]=0;
        /* code */
    }
    if(A==7){
        a[0]=1;
        a[1]=1;
        a[2]=1;
    }else if(A==6){
        a[1]=1;
        a[2]=1; 
    }
    else if(A==5){
        a[0]=1;
        a[2]=1;
    }else if(A==3){
        a[0]=1;
        a[1]=1;
    }else if(A==4){
        a[2]=1;
    }else if(A==2){
        a[1]=1;
    }else if(A==1){
        a[0]=1;
    }
    if(B==7){
        b[0]=1;
        b[1]=1;
        b[2]=1;
    }else if(B==6){
        b[1]=1;
        b[2]=1; 
    }
    else if(B==5){
        b[0]=1;
        b[2]=1;
    }else if(B==3){
        b[0]=1;
        b[1]=1;
    }else if(B==4){
        b[2]=1;
    }else if(B==2){
        b[1]=1;
    }else if(B==1){
        b[0]=1;
    }
    int ans=0;
for(int i = 0; i < 3; i++) {
    c[i]=(a[i]|b[i]);
    if(c[i]==1)ans+=1<<i;
}
cout << ans << endl;

      
    return 0;
}