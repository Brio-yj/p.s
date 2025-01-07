    #include <bits/stdc++.h>

    using namespace std;

    int arr[1000002];
    int his[1000002];
    int n;

    int main(){
        cin>>n;

        arr[1]=0;
        his[1]=0;
        for(int i=2;i<=n;i++){
            arr[i]= arr[i-1];
            his[i]= i-1;
            if(i%2==0) {
                arr[i] = min(arr[i],arr[i/2]);
                if(arr[i/2]<=arr[i]) his[i] = i/2;  
            }
            if(i%3==0) {
                arr[i] = min(arr[i],arr[i/3]);
                if(arr[i/3]<=arr[i]) his[i] = i/3;  
            }
            arr[i]++;
        }
        cout<<arr[n]<<"\n";
        cout<<n<<" ";
        while(1){
            if(his[n]==0) break;
            cout<<his[n]<<" ";
            n=his[n];
        }
    }