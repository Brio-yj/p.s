#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int a[3]={1,2,3};
void printArr(int arr[]){
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    do {
        printArr(a);
        cout<<"\n";
    }while(prev_permutation(a,a+2));
}