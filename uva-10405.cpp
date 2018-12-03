#include<bits/stdc++.h>
using namespace std;
int s[1001][1001];
int main()
{
    int i,j;
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        int l1 = s1.size();
        int l2 = s2.size();
        for(i=1;i<=l1;i++){
            for(j=1;j<=l2;j++){
                if(s1[i-1]==s2[j-1])
                    s[i][j] = s[i-1][j-1]+1;
                else
                    s[i][j] = max(s[i][j-1],s[i-1][j]);
            }
        }
        cout<<s[l1][l2]<<endl;
    }
    return 0;
}
