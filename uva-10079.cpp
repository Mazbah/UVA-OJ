#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,x,i;
    while(cin>>n)
    {
        if(n<0)
            break;
        x = (n*(n+1))/2;

        cout<<x+1<<endl;
    }
    return 0;
}

