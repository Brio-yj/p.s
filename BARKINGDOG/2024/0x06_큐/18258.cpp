#include <iostream>
#include <queue>
#include <string>
using namespace std;

queue<int> q;
int main(){
    int N;
    cin>>N;
    while(N--){
        string s;
        cin>>s;
        if(s=="push"){
            int n;
            cin>>n;
            q.push(n);
        }
        else if(s=="pop"){
            if(q.empty())cout << "-1 \n";
            else{
                cout<<q.front()<<"\n";
                q.pop();
            }
        }
        else if(s=="size"){
            int ssize = q.size();
            cout<<ssize<<"\n";
        }
        else if(s=="empty"){
            if(q.empty()) cout<<"1 \n";
            else cout<<"0 \n";
        }
        else if(s=="front"){
            if(q.empty()) cout<<"-1 \n";
            else cout<<q.front()<<"\n";
        }
        else if(s=="back"){
            if(q.empty()) cout<<"-1 \n";
            else cout<<q.back()<<"\n";
        }
    }
}
//cin.tie(0);