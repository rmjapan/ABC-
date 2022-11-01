
    #include <bits/stdc++.h>

    using namespace std;

    int main() {
    set<int>s;
    int N;
    cin>>N;
    for(int i = 0; i < N; i++) {
        int x;
        cin>>x;
            s.insert(x);
        }
    //cout << s.count(0) << endl;存在の確認ができる.
    int ans=0;
    int sum=0;
    for(int i = 1;i<=N; i++) {
        if(s.count(i))sum++;
        else sum=sum+=2;
        if(sum>N)break;
        ans=i;
    }
    cout << ans << endl;
    
    
    
    /* int N;
        cin>>N;
        vector<long long > A(N);
        for(int i = 0; i < N; i++) {
            cin>>A[i];
        }
        sort(A.begin(),A.begin()+N);
        int zan=N;
        int curent;
        if(zan>1||A[0]==1){
        curent=1;
        }else{
            curent=0;
            
        }
        int i=0;
        int j=N-1;
        while(i<=j){
            if(A[i]==curent){
            curent++;
            i++;
            zan--;
            }
            else{
            if(i==j){j--;continue;}
                j=j-2;
                curent++;
                zan=zan-2;//重複しているやつを優先でうりたい
            }
            
        
        }
        if(curent==0){
            cout << "0" << endl;
        }
    cout << curent-1 << endl;
        
    */
        return 0;
    }