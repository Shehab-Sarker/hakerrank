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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(n%2==0){
            cout<<a[(n/2)-1]<<" "<<a[n/2];
        }else{
            cout<<a[n/2];
        }
    }
    return 0;
}