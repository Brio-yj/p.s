#include <bits/stdc++.h>
using namespace std;

vector<int> nv;
vector<int> sumv;
int mini = -10000000;
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nv.push_back(nv[i-1]+num);
    }
    for(int i=0;i<=nv.size()-k;i++){
        int sum=0;
        for(int j=0;j<k;j++){
            sum+=nv[j+i];
        }
        sumv.push_back(sum);
    }
    sort(sumv.begin(),sumv.end());
    cout<<sumv[sumv.size()-1];
}