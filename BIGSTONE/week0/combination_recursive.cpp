#include <bits/stdc++.h>

using namespace std;

int n=5, k=3;
vector<int> nv;

void print(){
    for(auto num:nv) cout<<num<<"\t";
    cout<<"\n";
}
void combi(int start){
    if(nv.size()==k){
        print();
        return;
    }
    for(int i=start;i<=n;i++){
        nv.push_back(i);
        combi(i+1);
        nv.pop_back();
    }
} 
int main(){
    combi(1);
}
