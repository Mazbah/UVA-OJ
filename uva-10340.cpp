#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,x,y;
    while(cin>>a>>b)
    {
        x=0;
        y = 0;
        while(x<a.length() && y<b.length())
        {
            if(a[x]==b[y])
            {
                x++;
                y++;
            }
            else
                y++;
        }
        if(x==a.length())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
