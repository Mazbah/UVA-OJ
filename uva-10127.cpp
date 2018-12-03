#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,a,i;
    while(cin>>x)
    {
        a = i = n =1;
        while(i)
        {
            if(a<x){
                a = (a*10)+1;
                n++;
            }
            i = a % x;
            a = i;
        }
        cout<<n<<endl;
    }
    return 0;
}
