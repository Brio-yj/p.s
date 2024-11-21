#include<bits/stdc++.h>
using namespace std;

vector<string> strv;
string str;
int main(){

    getline(cin,str);
    for(auto s:str){
        if(s-0>=65 && s-0<=90){
            if(s+13>90) s = 'A'+((s+13)%90-1);
            else s+=13;
        }         
        if(s-0>=97 && s-0<=122){
            if(s+13>122) s = 'a'+((s+13)%122-1);
            else s+=13;
        }         
        cout<<s;
    }
}
/*
    알파벳 26개
    A=65
    a=97~123
*/