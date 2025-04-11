#include<bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main(){
ios::sync_with_stdio(0);cin.tie(0);
    int T; T=1;
    // cin>>T;
    while(T--){
        int n;
        cin>>n;
        int m[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>m[i][j];
            }
        }

        int temp=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    if(m[i][j]!=1){
                        temp=0;
                        break;
                    }
                }else{
                    if(m[i][j]!=0){
                        temp=0;
                        break;
                    }
                }
            }
            if(temp==0){
                break;
            }
        }
        if(temp==1){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    return 0;
}