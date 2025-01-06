#include<bits/stdc++.h>

using namespace std;
vector<int> nv;
int main(){
    int n,m;
    cin>>n>>m;
    /*
    시간 초과 빡빡한 문제에서는 이런식으로 나오기도 한다
    if(m>200000)
    {
        cout<<0;
        return;
    }
    */
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nv.push_back(num);
    }
    sort(nv.begin(),nv.end(),greater<>());
    int vsize = nv.size();
    int cnt =0;
    for(int i=0;i<vsize-1;i++){
        for(int j=i+1;j<vsize;j++){
            if(nv[i]+nv[j]==m) cnt++;
        }
    }
    cout<<cnt;
}


/*
    sort(nv.begin(), nv.end(), greater<>());  // C++14 이상에서는 타입 생략 가능
    greater(int)는 잘못된 문법입니다. 
    greater는 함수 객체(Functor)를 생성하는 템플릿 클래스이므로, 템플릿 인자로 타입을 지정하고 객체를 생성해야 합니다.
    
    몇개를 선택하는 문제는 콤비 or 퍼뮤 의심하자
    3개까지는 그냥 for문 사용하고
    4개 부터는 콤비네이션 or 퍼뮤테이션 사용하자
*/