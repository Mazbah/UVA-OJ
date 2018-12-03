#include<bits/stdc++.h>
using namespace std;

bool check(string a,string b)
{
    if(a.size()>b.size()) return false;

    for(int i=0;i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main()
{
    int n,t;
    string s[10000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool ok = true;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        sort(s,s+n);
        for(int i=0;i<n;i++){
            if(check(s[i],s[i+1])){
                ok = false;
                break;
            }
        }
        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
