#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 1000+9;

int n,m;
int mx=0,cnt=0;
vector<vector<int>> v(N,vector<int>(N,0));

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> v[i][j];
            v[i][j]+=v[i-1][j]+v[i][j-1]-v[i-1][j-1];
        }
    }
    for(int i=m;i<=n;i++){
        for(int j=m;j<=n;j++){
            int area = v[i][j]-v[i-m][j]-v[i][j-m]+v[i-m][j-m];
            if(mx<area){
                mx=area;
                cnt=1;
            }else if(mx==area){
                cnt++;
            }
        }
    }
    cout << mx << "\n" << cnt << "\n";
    return 0;
}
