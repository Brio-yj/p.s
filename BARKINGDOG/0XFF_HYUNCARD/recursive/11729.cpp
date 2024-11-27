#include <bits/stdc++.h>

using namespace std;

int n,cnt,check;

void hanoi (int now, int target, int total){
    if(total==1) {
        cout<<now<<" "<<target<< "\n";
        return;    
    }
    hanoi(now,6-target-now,total-1);
    cout<<now<<" "<<target<<"\n";
    hanoi(6-target-now,target,total-1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    hanoi(1,3,n);
}

//1일때 움직이고, k일때 움직이면 k+1도 움직인다
/*
    1 -> 1 3
    2 -> 1 2, 2 3, 2 3
    3 -> 1 3, 2 2, 1 2, 3 3, 1 1, 2 3, 1 3
    현위치, 목표

    1일때 1 3
    결국 k일때는 1 2, 1 3, 2 3
    k+1일때는 1 2, 1 3, 2 3

*/