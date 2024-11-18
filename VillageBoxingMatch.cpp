#include <bits/stdc++.h>
using namespace std;

int n,ans = 0,k=1;
vector<pair<int,int>> v;

int check(int i,int j){
    int m = v[i].first * v[j].first;
    int num = k;
    if(v[i].second != 0)num /= v[i].second;
    if(v[j].second != 0)num /= v[j].second;
    
    return m * num;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    for(int i=0;i<n;i++){
        int x,y;cin >> x >> y;
        v.push_back({x,y});
        if(y!=0)k*=y;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ans += check(i,j);
        }
    }
    cout << ans;
    return 0;
}