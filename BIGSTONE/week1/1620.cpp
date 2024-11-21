#include<bits/stdc++.h>

using namespace std;

map<int,string> imap;
map<string,int> smap;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        smap[str]=i+1;
        imap[i+1]=str;
    }
    for(int i=0;i<m;i++){
        string input;
        cin>>input;
        stringstream ss(input);
        int num;
        if(ss>>num){
            //변환 성공
            cout<<imap[num]<<"\n";
        }else{
            cout<<smap[input]<<"\n";
            //변환 실패
            /*
            auto idx = find(sv.begin(),sv.end(),input);
            cout<<idx-sv.begin()+1<<"\n";

                여기서 중요한건 find는 iterator를 리턴한다
                즉, 내가 원하는 인덱스 값이 아닌 메모리 주소를 리턴한다
                그리고 우리가 원하는 1기반 인덱스를 출력하기 위해 1을 더한다

                그런데 find는 사실상 반복문 1개 더 돌리는거라 너무 늦다
            */
        }

    }
    /*
        알파벳으로 오면 인덱스
        숫자로 오면 알파벳
    */
}