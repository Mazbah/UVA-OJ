#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b1,b2,b3,g1,g2,g3,c1,c2,c3,a[6],i,min;
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
    {
        a[0] = b2+b3+c1+c3+g1+g2;
        a[1] = b2+b3+c1+c2+g1+g3;
        a[2] = b1+b3+c2+c3+g1+g2;
        a[3] = b2+b1+c2+c3+g1+g3;
        a[4] = b1+b3+c1+c2+g3+g2;
        a[5] = b2+b1+c1+c3+g3+g2;
         min = a[0];
        for(i=0;i<6;i++){
            if(min>a[i])
                min = a[i];
        }
        for(i=0;i<6;i++)
        {
            if(a[i]==min){
                if(i==0) cout<<"BCG ";
                if(i==1) cout<<"BGC ";
                if(i==2) cout<<"CBG ";
                if(i==3) cout<<"CGB ";
                if(i==4) cout<<"GBC ";
                if(i==5) cout<<"GCB ";
                cout<<a[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
