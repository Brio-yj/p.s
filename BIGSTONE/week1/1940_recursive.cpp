#include <bits/stdc++.h>

using namespace std;

vector<int> nv;
vector<int> resv;
int cnt;
int n,m;
void combi(int start, vector<int>& resv)
{
    if(resv.size()==2)
    {
        int a = resv[0];
        int b = resv[1];
        if(a+b==m) cnt++;
        return;
    }
    for(int i=start+1;i<nv.size();i++)
    {
        resv.push_back(nv[i]);
        combi(i,resv);
        resv.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>num;
        nv.push_back(num);
    }
    combi(-1,resv);
    cout<<cnt;
}
