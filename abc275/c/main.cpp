
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
int main() {
string s[9];
for (int i = 0; i < 9; i++)
{
    cin>>s[i];
}
int count=0;
for (int i = 0; i < 9; i++)
{
   for (int j = 0; j < 9; j++)
   {
    if(s[i][j]=='#')
        count++;
   }
   
}
int p=0;
vector<pair<int,int>> v(count);
for (int i = 0; i < 9; i++)
{
    for (int j = 0; j < 9; j++)
   {
    if(s[i][j]=='#'){
       v[p].first=i;
       v[p].second=j;
       p++;
    }
   }
   
}
sort(v.begin(),v.end());

ll ans=0;
for (int i = 0; i < count; i++)
{
   for (int j = i+1; j < count; j++)
   {
    pair<int,int>t1={v[i].first - (v[j].second - v[i].second), v[i].second + (v[j].first - v[i].first)};
    pair<int, int> t2 = {v[j].first - (v[j].second - v[i].second), v[j].second + (v[j].first - v[i].first)};
     if (binary_search(all(v), t1) && binary_search(all(v), t2))
        {
            ans++;
        }
   }
   
   
}
ans=ans/2;
cout << ans << endl;




    return 0;
}