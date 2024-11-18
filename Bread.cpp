#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &v){
    int total = accumulate(v.begin(),v.end(),0);
    if(total%2 == 1)return false;
    int target = total/2;
    int n = v.size();
    vector<bool> dp(target,false);
    dp[0] = true;
    for(auto num : v){
        for(int j=target ; j >= num ; j--){
            dp[j] = dp[j] || dp[j - num];
        }
    }
    
    return dp[target];
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int q;cin >> q;
    while(q--){
        int n;cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin >> v[i];
        cout << solve(v) << "\n";
    }
    return 0;
}