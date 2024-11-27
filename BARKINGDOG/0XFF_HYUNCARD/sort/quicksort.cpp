#include<bits/stdc++.h>

using namespace std;

int n = 10;
int arr[1000001] = {15, 25, 22, 357, 16, 23, -53, 12, 46, 3};

void quick_sort(int st,int en){
    if(st+1>=en) return;
    int pivot = arr[st];
    int l =st+1;
    int r =en-1;

    while(1){
        while(l<=r && arr[l]<=pivot) l++;
        while(l<=r && arr[r]>pivot) r--;
        if(l>r) break;
        swap(arr[l],arr[r]);
    }
    swap(arr[st],arr[r]);
    quick_sort(st,r);
    quick_sort(r+1,en);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    quick_sort(0,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}