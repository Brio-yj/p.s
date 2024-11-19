#include <bits/stdc++.h>
using namespace std;

string str,temp;
int main(){
    cin>>str;
    
    /*
        짝,홀 구분
        (~홀/2-1)-(홀/2+1~)
        (~짝/2-1)-(짝/2~)
    */
    /*
    int check=1;
    if(str.size()%2==1){
        int sz =str.size();
        for(int i=0;i<=(sz/2-1);i++){
            if(str[i]!=str[sz-i-1]) check=0; 
        }
    }
    if(str.size()%2==0){
        int sz =str.size();
        for(int i=0;i<=(sz/2-1);i++){
            if(str[i]!=str[sz-i-1]) check=0; 
        }
    }
    if(check==0) cout<<0;
    if(check==1) cout<<1;
    */
    //리버스 사용
    temp = str;
    reverse(temp.begin(),temp.end());
    if(temp==str) cout<<1;
    else cout<<0;
}