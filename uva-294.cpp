#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long long l,h,n,i,j,k,d,mx,t;
    cin>>n;
    while(n--){
            cin>>l>>h;
            mx = 0;
            if(l==1&&h==0){
                cout<<"Between 1 and 1, 0 has a maximum of 2 divisors."<<endl;
            continue;
            }
                for(i=l;i<=h;i++){
                    d = 0;
                    int p = sqrt(i);
                    for(j=1;j<=p;j++){
                        if(i%j==0){
                            d++;
                        if(i/j != j)
                            d++;
                    }
                    if(mx<d){
                        mx = d;
                        t = i;
                    }
                }}
            printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,h,t,mx);
    }
    return 0;
}
