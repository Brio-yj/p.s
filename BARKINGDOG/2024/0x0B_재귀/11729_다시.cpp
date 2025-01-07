#include <iostream>
using namespace std;

int a=1,b=3,cnt=0;
void solve(int a, int b,int n){
    cnt++;
    if(n==1) {
        cout<<a<<" "<<b<<"\n";
        return;
    }
    solve(a,6-a-b,n-1);
    cout<<a<<" "<<b<<"\n";
    solve(6-a-b,b,n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<(1<<n)-1<<"\n";
    solve(a, b, n);
}