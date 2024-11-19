#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> pv;
int arr[100];

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    /*
        int e,f;
        for(int i=0;i<3;i++){
            cin>>e>>f;
            pv.push_back({e,f});
        }
        for(int i=0;i<3;i++){
            for(int j=pv[i].first;j<pv[i].second;j++){
                arr[j]++;
            }    
        }
    */
    int x,y;
    for(int i=0;i<3;i++){
        cin>>x>>y;
        for(int j=x;j<y;j++){
            arr[j]++;
        }
    }
    int sum=0;
    for(int i=0;i<100;i++){
        if(arr[i]==1)   {
            sum+=a;
        }
        if(arr[i]==2)   {
            sum+=(b*2);
        }
        if(arr[i]==3)   {
            sum+=(c*3);
        }
    }
    cout<<sum;
}
