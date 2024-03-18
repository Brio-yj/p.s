#include <iostream>
#include <string>
#include <deque>

using namespace std;

deque<int> dq;
int main(){
    cin.tie(0);
    int N;
    cin >> N;
    while(N--){
        string s;
        cin >> s;
        if(s=="push_front"){
            int n;
            cin >> n;
            dq.push_front(n);
        }
        if(s=="push_back"){
            int n;
            cin >> n;
            dq.push_back(n);
        }
        if(s=="pop_front"){
            if(dq.empty()) cout<<"-1 \n";
            else {
                cout<<dq.front()<<"\n";
                dq.pop_front();
            }
        }
        if(s=="pop_back"){
            if(dq.empty()) cout<<"-1 \n";
            else {
                cout<<dq.back()<<"\n";
                dq.pop_back();
            }
        }
        if(s=="size"){cout<<dq.size()<<"\n";}
        if(s=="empty"){cout<<(dq.empty() ? "1" : "0") << "\n";}
        if(s=="front"){
            if(dq.empty()) cout<<"-1 \n";
            else cout<<dq.front()<<"\n";
        }
        if(s=="back"){
            if(dq.empty()) cout<<"-1 \n";
            else cout<<dq.back()<<"\n";
        }
    }

}