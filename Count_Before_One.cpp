#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int count_before_one(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]==1){
            return i;
        }
    }
    return n;
}

int main(){
ios::sync_with_stdio(0);cin.tie(0);
    int T; T=1;
    // cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt=count_before_one(a,n);
        cout<<cnt;
    }
    return 0;
}