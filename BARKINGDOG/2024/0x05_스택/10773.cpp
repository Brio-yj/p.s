#include <iostream>
#include <stack>

using namespace std;

stack<int> st;
int main(){
    int N;
    cin>>N;
    while(N--){
        int num;
        cin >> num;
        if(num!=0)st.push(num);
        else st.pop();
    }
    int cnt = st.size();
    int sum=0;
    while(cnt--){
        sum += st.top();
        st.pop();
    }
    cout<<sum;
}