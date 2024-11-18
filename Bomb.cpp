#include <bits/stdc++.h>
using namespace std;

const int N = 509 , M = 509;

bool table[N][M];
int n,m;
int tmp;

void solve(int dx,int dy,int ex,int ey){
    for(int i=dx;i<=ex;i++){
        for(int j=dy;j<=ey;j++){
            if(table[i][j]){
                table[i][j] = false;
                tmp--;
            }
        }
    }
    
    return;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m;
    int h;cin >> h;
    tmp = h;
    while(h--){
        int x,y;cin >> x >> y;
        table[x][y] = true;
    }
    int q;cin >> q;
    while(q--){
        int x,y,r;cin >> x >> y >> r;
        solve(max(0,x-r),max(0,y-r),min(x+r,n),max(y+r,m));
    }
    cout << tmp;
    return 0;
}