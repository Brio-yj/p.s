#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main() {
    string s;
    while (getline(cin, s)) {
        stack<char> st;
        int cnt = 0;
        if(s==".") break;
        cout<<"s= "<<s<<endl;
        for (auto a : s) {
            if (a == ')') {
                if (st.empty()) {
                    cout << "no \n";
                    break;
                } else {
                    if (st.top() == '(') {
                        st.pop();
                    } else {
                        cout << "no \n";
                        break;
                    }
                }
            }
            else if (a == ']') {
                if (st.empty()) {
                    cout << "no \n";
                    break;
                } else {
                    if (st.top() == '[') {
                        st.pop();
                    } else {
                        cout << "no \n";
                        break;
                    }
                }
            }
            else if (a=='('){st.push(a);
            cnt++;}
            else if (a=='['){st.push(a);
            cnt++;}
        }
        if(st.empty()&&cnt!=0) cout<<"yes \n";
    }
}