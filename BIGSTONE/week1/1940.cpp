#include<bits/stdc++.h>

using namespace std;
vector<int> nv;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nv.push_back(num);
    }
    sort(nv.begin(),nv.end(),greater<>());
    for(int i=0;i<nv.size();i++){
        int sum =nv[i];
        for(int j=i+1;j<nv.size();j++){

        }
    }

}

123457

/*
    sort(nv.begin(), nv.end(), greater<>());  // C++14 이상에서는 타입 생략 가능
    greater(int)는 잘못된 문법입니다. 
    greater는 함수 객체(Functor)를 생성하는 템플릿 클래스이므로, 템플릿 인자로 타입을 지정하고 객체를 생성해야 합니다.
    
*/