#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[1005],s2[1005];
    map<char,int> m;
    int i;
    while(gets(s1))
    {
        gets(s2);
        int l1=strlen(s1),
        l2=strlen(s2);
        sort(s1,s1+l1);
        sort(s2,s2+l2);

        m.clear();

        for(i=0;i<l1;i++)
            m[s1[i]]++;
            for(i=0;i<l2;i++)
                if(m[s2[i]]){
                    cout<<s2[i];
                    m[s2[i]]--;
            }
        cout<<endl;
    }

    return 0;
}
