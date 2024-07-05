// Code by Nerd_potato

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i= 0; i<n; i++)
    {
        cin>>v[i];
    }
    // prefix sum
    vector<int> pref(n);
    pref[0] = v[0];
    for(int i = 1; i<n; i++)
    {
        pref[i] = v[i]+pref[i-1];
    }
    // searching longest subarray
    int ans = 0;
    for(int i = n-1; i>=0; i--)
    {
        if(pref[i]==k){
            ans = i+1;
            break;
        }
    }
    // corner case
    if(ans==0)
    {
        int i = 0, j = 0;
        while(j<n)
        {
            if(pref[j]-pref[i] == k)
            {
                ans = max(ans, j-i);
            }
            else if(pref[j]-pref[i] > k){
                i++;
            }
            j++;
        }
    }

    cout<<ans<<endl;
    return 0;
}