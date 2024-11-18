#include <bits/stdc++.h>
using namespace std;

int n,x,y,ans = 0;
vector<int> v;

void solve(int cnt,int sum){
    if(cnt == n){
        if(sum >= x && sum <= y)ans++;
        return;
    }
    solve(cnt+1,sum);
    solve(cnt+1,sum+v[cnt]);
    return;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        v.push_back(x);
    }
    cin >> x >> y;
    solve(0,0);
    cout << ans << "\n";
    return 0;
}