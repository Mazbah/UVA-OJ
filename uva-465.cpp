#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[1000],s2[1000];
    long double x,y;
    char ch;
    while(cin>>s1>>ch>>s2)
    {
        x = atof(s1);
        y = atof(s2);
        cout<<s1<<" "<<ch<<" "<<s2<<endl;

        if(x>2147483647)
            cout<<"first number too big"<<endl;
        if(y>2147483647)
            cout<<"second number too big"<<endl;
        if(ch=='+' && (x+y)>2147483647)
            cout<<"result too big"<<endl;
        if(ch=='*' && (x*y)>2147483647)
            cout<<"result too big"<<endl;
    }
    return 0;
}
