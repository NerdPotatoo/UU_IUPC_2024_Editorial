#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // CODE HERE
    string s,tmp = "";
    getline(cin,s);
    vector<string> v;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i]!=' '){
            tmp += s[i];
        }
        if(s[i] == ' ' || i == s.size()-1){
            v.push_back(tmp);
            tmp = "";
        }
        
    }
    reverse(v.begin(),v.end());
    for(auto x:v){
        cout<< x<< " ";
    }
    return 0;
}


// YASIR ADNAN