#include <bits/stdc++.h>
using namespace std;

vector<string>split(string &input, string del){
    auto start=0;
    auto end=input.find(del);

    vector<string> result;
    while(end!= string::npos){
        result.push_back(input.substr(start,end-start));
        start = end + del.size();
        end = input.find(del,start);
    }
    result.push_back(input.substr(start));
    return result;
    
}
int main(){
    string str ="apple,banana,orange";
    vector<string> fv = split(str,",");
    for(auto ch:fv) cout<<ch<<"\n";
}