#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin >> n;
    vector<pair<int,int>> v(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
        sum+=v[i].second;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int pe = sum-v[i].second-v[j].second;
            int box = v[i].first*v[j].first;
            ans+=pe*box;
        }
    }
    cout << ans << "\n";
    return 0;
}
