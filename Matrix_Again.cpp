#include<bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main(){
ios::sync_with_stdio(0);cin.tie(0);
    int T; T=1;
    // cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        int mat[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>mat[i][j];
            }
        }
 
        for(int i=0;i<m;i++){
            cout<<mat[n-1][i]<<" ";
        }
        cout<<"\n";

        for(int i=0;i<n;i++){
            cout<<mat[i][m-1]<<" ";
        }
    }
    return 0;
}