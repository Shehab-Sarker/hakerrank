#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int is_palindrome(string s){
    string s1="";
    for(int i=s.size()-1;i>=0;i--){
        s1+=s[i];
    }

    if(s1==s){
        return 1;
    }else{
        return 0;
    }
}

int main(){
ios::sync_with_stdio(0);cin.tie(0);
    int T; T=1;
    // cin>>T;
    while(T--){
        string s;
        cin>>s;

        int check=is_palindrome(s);
        if(check){
            printf("Palindrome");
        }else{
            printf("Not Palindrome");
        }
    }
    return 0;
}