#include<iostream>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1.size()<<" "<<s2.size()<<endl;
    string s3=s1+s2;
    cout<<s3<<endl;
     char ch=s1[0];
    s1[0]=s2[0];
    s2[0]=ch;
    cout<<s1<<" "<<s2;
    return 0;
}
