#include <bits/stdc++.h>
using namespace std;

const int N = 1009;

int n,m;

int table[N][N];

int ans = 0 , area = 0;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> table[i][j];
            table[i][j] += table[i-1][j] + table[i][j-1] - table[i-1][j-1];
        }
    }
    
    for(int i=m;i<=n;i++){
        for(int j=m;j<=n;j++){
            int tb = table[i][j] - table[i-m][j] - table[i][j-m] + table[i-m][j-m];
            area = max(area,tb);
            if(area == tb)ans++;
        }
    }
    cout << area << "\n" << ans << "\n";
    return 0;
}