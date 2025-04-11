#include<bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main(){
ios::sync_with_stdio(0);cin.tie(0);
    int T; T=1;
    // cin>>T;
    while(T--){
        string s;
        cin>>s;
        int sm=0,cap=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&& s[i]<='z'){
                sm++;
            }else if(s[i]>='A'&& s[i]<='Z'){
                cap++;
            }
        }
        cout<<cap<<" "<<sm;
    }
    return 0;
}