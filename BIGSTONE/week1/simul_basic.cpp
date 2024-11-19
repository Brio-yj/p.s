#include <bits/stdc++.h>
using namespace std;

void print(string txt){
    cout<<txt<<"\n";
}

int main(){
    string  str = "umzunsik";

    cout<<str.size()<<"\n";
    
    for(int i=0;i<3;i++)    cout<<str[i];
    cout<<"\n";
    string str2 = str.substr(0,3);
    print(str2);

    for(int i=1;i<4;i++)    cout<<str[str.size()-i];
    cout<<"\n";
    reverse(str2.begin(),str2.end());
    print(str2);

    for(int i=1;i<=str.size();i++)  cout<<str[str.size()-i];
    for(int i=0;i<str.size();i++)  cout<<str[i];
    str2+=str;
    print(str2);
    

}