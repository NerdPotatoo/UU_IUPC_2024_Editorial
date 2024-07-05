// Code by Nerd_potato

#include<bits/stdc++.h>
using namespace std;

vector<bool> isPrime(1000, 1);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // CODE HERE
    string s;
    cin>>s;
    int i = 0,ans = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    while(i<s.size()){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') ans++;
        i++;
    }
    cout<<ans;
    return 0;
}
