#include <bits/stdc++.h>

using namespace std;

string arr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
string str;
size_t pos;
int cnt;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> str;
    while (pos < str.size())
    {   
        bool found = false;
        
        for (int i = 0; i < 8; i++)
        {
            size_t nowpos = str.find(arr[i], pos);
            if(nowpos == pos)
            {
                found = true;
                cnt++;
                pos += arr[i].size();
                break;
            }
        }
        
        if(found==false)
        {
            pos++;
            cnt++;
        }
    }
    cout<<cnt;
}