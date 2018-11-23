#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,x,y,a,s;
    while(cin>>m>>n){
        cout<<m<<" "<<n;
        if(m>n){
            x=n;y = m;
        }
        else{
            x = m;y=n;
        }
        s = 0;
        for(i=x;i<+y;i++){
            a=1;
            j = i;
            while(j!=1){
                if(j%2 == 0){j = j/2;}
                else{j = (3*j)+1;}
                a++;
            }
            if(a>=s){
                s = a;
            }
        }
        cout<<" "<<s<<endl;
    }
    return 0;
}






