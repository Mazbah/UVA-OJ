#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[10];
    int i=1;
    while(cin>>s1){
        if(s1[0] == '*')
            break;
        printf("Case %d: ",i++);
        if(s1[0] == 'H')
            cout<<"Hajj-e-Akbar\n";
        else if(s1[0] == 'U')
            cout<<"Hajj-e-Asghar\n";
    }
    return 0;
}
