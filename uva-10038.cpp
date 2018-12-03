#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,T,a[3001],b[3001],x;
    while(cin>>T){
        x = 1;
        for(i=0;i<T;i++){
            cin>>a[i];
        }
        for(i=0;i<T-1;i++)
            b[i] = abs(a[i+1]-a[i]);

        sort(b,b+i);
        for(i=1;i<T;i++){
            if(b[i]==b[i-1]){
                x =0;
                break;
            }
        }
    if(x==0)
        cout<<"Not jolly"<<endl;
    else
        cout<<"Jolly"<<endl;}
    return 0;
}
