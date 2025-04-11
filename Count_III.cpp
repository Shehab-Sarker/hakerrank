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
        int cnt[26]={0};
        for(int i=0;i<s.size();i++){
            cnt[s[i]-'a']++;
        }

        for(char i='a';i<='z';i++){
            cout<<i<<" - "<<cnt[i-'a']<<endl;
        }
    }
    return 0;
}