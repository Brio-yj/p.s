#include <bits/stdc++.h>
using namespace std;

int func2(int arr1[], int n){
    int check[100];
    for (int i=0;i<n;i++){
        if(check[arr1[i]]==0)check[arr1[i]]=1;
        if(check[100-arr1[i]]==1) return 1;
    }
    return 0;
}

