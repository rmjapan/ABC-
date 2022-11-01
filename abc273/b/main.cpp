
#include <bits/stdc++.h>

using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
ll x;
int k;
cin>>x>>k;
ll x_keta=log10(x);
ll ans=pow(10,x_keta);
ll min_ans=1000000000000000000;
ll min_index=0;
for(int i = 0; i <=10; i++) {
 if(min_ans>abs(x-ans*i)&&x!=i){
    min_ans=abs(x-ans*i);
    min_index=i;
 }
}
ans=min_index*ans;
cout << ans << endl;

for (int i = 0; i <=k; i++)
{
    int y=pow(10,i+1);
    int min=
    for(int j=0;j<=10;j++){

    }
}











/*ll N;
int k;
cin>>N>>k;
vector<int>A(16);
int keta=log10(N);
for (int i =0; i <k; i++)
{
int k=pow(10,i);
if(N%k>=5){
int p=(N%(k*10)/k)+1;
A[i+1]=p;
A[i]=0;

}else{
    
int p=(N%(k*10)/k);
A[i+1]=p;
A[i]=0;


}
}
reverse(A.begin(),A.end());
for(int i = 0; i < 16; i++) {
  cout << A[i] ;
   
}

    return 0;*/
}





   


/*
string s=to_string(N);
vector<int>A;
for (int i = 0; i <=keta+1; i++)
{
  switch(s[i]){
    case '0': A.push_back(0);
    case '1': A.push_back(1);
    case '2': A.push_back(2);
    case '3': A.push_back(3);
    case '4': A.push_back(4);
    case '5': A.push_back(5);
    case '6': A.push_back(6);
    case '7': A.push_back(7);
    case '8': A.push_back(8);
    case '9': A.push_back(9);
    
 }
}

 for(int i = 0; i <k; i++) {
    if(A[A.size()-i-1]>=5){
        A[A.size()-i-2]++;
    }
    else{
        A[A.size()-i-1]=0;

    }
}
if(A[0]==0){
    for(int i = 0; i < A.size(); i++) {
      cout << A[i];
    }
}else{
     for(int i = 1; i < A.size(); i++) {
      cout << A[i];
     }

}

*/



