#include <bits/stdc++.h>
using namespace std;

int b,m,n;
vector<int> v;
vector<bool> prime(1009,true);

void solve(){
    prime[0] = prime[1] = false;
    for(int i=2;i*i<=1009;i++){
        if(!prime[i])continue;
        for(int j=i*i;j<=1009;j+=i){
            prime[j] = false;
        }
    }
    return ;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> b >> m >> n;
    solve();
    for(int i=0;i<m;i++){
        int x;cin >> x;
        if(prime[x]){
            int tmp = v.size();
            tmp-=b;
            tmp=max(0,tmp);
            v.insert(v.begin() + tmp,x);
        }else{
            v.push_back(x);
        }
    }
    
    int ans = 0;
    
    for(int i=m-1;i>=m-n;i--){
        // cout << v[i] << " ";
        ans += v[i];
    }
    cout << ans << "\n";
    return 0;
}
/*
3 6 5 9 4  
*/