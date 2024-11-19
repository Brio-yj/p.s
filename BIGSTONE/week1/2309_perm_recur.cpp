#include <bits/stdc++.h>
using namespace std;

int n=9,r=7;
int arr[9];

void perm(int depth){
    if(depth==r){
        //리턴 -> 확인하고 exit
        int sum=0;
        for(int i=0;i<7;i++)    sum+=arr[i];
        if(sum==100) {
            for(int i=0;i<7;i++)   cout<<arr[i]<<"\n";
            exit(0);
        }
    }
    for(int i=depth;i<9;i++){
        swap(arr[i],arr[depth]);
        perm(depth+1);
        swap(arr[i],arr[depth]);
    }
}

int main(){
    for(int i=0;i<9;i++) cin >> arr[i];
    sort(arr,arr+9);
    perm(0);

}
