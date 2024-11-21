#include <bits/stdc++.h>
#define minimum -10000001
using namespace std;
int n,k,num,arr[100001];
int mini = minimum;
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>num; 
        arr[i]=arr[i-1]+num;
    }
    for(int i=k;i<=n;i++){
        mini = max(mini,arr[i]-arr[i-k]);   
        /*
            이런 디테일한점들은 빼기 계산 즉, 역으로 생각해야 쉽다
            k개까지 계산 한 값들을 비교해야 하니까 
            예를 들어 k가 5일때 처음 시작은 5까지의 구간합
            즉 sum[5]-0 => sum[5]-sum[0]
            1칸씩 올리면
            sum[6]-sum[1]
            앞에는 그대로, 뒤에는 뭔가 뺀다고 생각
            처음시작이 높은 상태로 시작
            i가 k부터 시작한다고 생각하면 제일 처음 구해야하는 구간합 찾기 가능
            이때 뒤의 i에 k를 빼줘야 0이 되니까
            i-k를 해줘야 한다
        */
    }
    cout<<mini;
}