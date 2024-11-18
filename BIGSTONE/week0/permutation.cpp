#include <bits/stdc++.h>
using namespace std;

// int arr[4]={1,2,3,4};
// int main(){  
//     do {
//         for(int i:arr){cout<<i;}
//         cout<<endl;
//     }
//     while(next_permutation(arr,arr+4));
// }
/*
permutation 함수는 제일 처음에는 출력안해주니까 따로 한번 출력해줘야 한다
*/

int arr[4]={1,2,3,4};
int main(){
    sort(arr,arr+4);
    do{
        for(auto i :arr)cout<<i;
        cout<<endl;
    }while(next_permutation(arr,arr+4));
}