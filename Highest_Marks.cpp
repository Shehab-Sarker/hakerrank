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
        int mx=INT_MIN;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>=mx){
                mx=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            cout<<mx-arr[i]<<" ";
        }
    }
    return 0;
}