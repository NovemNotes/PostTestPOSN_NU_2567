#include <bits/stdc++.h>
using namespace std;

const int N = 509;
vector<vector<bool>> v(N,vector<bool>(N,false));
int n,m;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin >> n >> m;
    int q;cin >> q;
    int cnt=q;
    while(q--){
        int x,y;cin >> x >> y;
        v[x][y]=true;
    }
    cin >> q;
    while(q--){
        int x,y,r;cin >> x >> y >> r;
        int ax=max(x-r,0),ay=max(y-r,0);
        int bx=min(x+r,n-1),by=min(y+r,m-1);
        for(int i=ax;i<=bx;i++){
            for(int j=ay;j<=by;j++){
                if(v[i][j]){
                    cnt--;
                    v[i][j]=false;
                }
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}
