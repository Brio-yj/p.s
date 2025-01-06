#include <bits/stdc++.h>
using namespace std;

vector<string> split(string str, string del){
    vector<string> sv;
    auto start =0;
    auto end = str.find_first_of(del);

    vector<string> sv;
    while(end != string::npos){
        sv.push_back(str.substr(start,end-start));
        start = end + del.size();
        end = str.find(del,start);
    }
    sv.push_back(str.substr(start));

    return sv;
}

int main(){
    string str ="apple,banana,orange,134";
    vector<string> fv = split(str,",");
    for(auto ch:fv) cout<<ch<<"\n";
}
