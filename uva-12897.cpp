#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char str[1000005],s[1000005],c,d;
    int i,t,z,a,j,r,k;
    char x,y;
    cin>>t;
    while(t--){
        cin>>s;
        cin>>r;
        for(z=0;z<128;z++)
            str[z] = z;
        for(i=0;i<r;i++){
            cin>>c>>d;
            for(j='A';j<='Z';j++){
                if(str[j]==d)
                        str[j] = c;
                }
            }
             for(j=0;s[j];j++){
                    cout<<str[s[j]];
            }
            cout<<endl;
    }
    return 0;
}
