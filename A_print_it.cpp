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
        for(int i=1;i<=n+10;i=i+2){
            for(int j=n+10;j>i;j=j-2){
                cout<<" ";
            }
            for(int k=i;k>=1;k--){
                cout<<"*";
            }
            cout<<'\n';
        }
        for(int i=1;i<=5;i++){
            for(int j=0;j<5;j++){
                cout<<" ";
            }
            for(int k=0;k<n;k++){
                cout<<"*";
            }
            cout<<"\n";
        }
    }
    return 0;
}