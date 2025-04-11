#include<bits/stdc++.h>
using namespace std;
#define lli long long int

void odd_even(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ev=0,od=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            ev++;
        }else{
            od++;
        }
    }
    printf("%d %d",ev,od);
}

int main(){
ios::sync_with_stdio(0);cin.tie(0);
    int T; T=1;
    // cin>>T;
    while(T--){
        odd_even();
    }
    return 0;
}