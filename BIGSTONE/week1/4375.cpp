#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main()
{
    int n;
    while(cin>>n)
    {
        ll target =1;
        int cnt =1;
        while(1)
        {
            //cout<<"cnt,target : "<<cnt<<target<<"\n";
            if(target%n==0) break;
            target = target*10 + 1;
            cnt++;
        }
        cout<<cnt<<"\n";    
    }
}

//모듈러 연산 분배 법칙 적용 가능하다