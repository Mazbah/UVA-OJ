#include<bits/stdc++.h>
using namespace std;

long long result(long long s1,long long s2,long long d1,long long d2){

    if(s1 == d1 )
            return llabs(s2-d2);
    if(s1>d1 )
        return result(d1,d2,s1,s2);

    if(s2>d2)
        return result(s1,s2,d1,s2+(s2-d2));

    if(d1-s1 <= d2-s2)
        return (d1-s1)+(d2-s2);


        s1 += (d2 - s2);

        long long x = (d2-s2)*2;

        if(s1%2 != d1%2)
            x += (s1+d2)%2 ? 3:1,s1++;

        x += (d1 - s1)*2;

        return x;
}
int main()
{
    long long s1,s2,d1,d2;
    while(cin>>s1>>s2>>d1>>d2){
        if(s1==0 && s2 == 0 &&d1==0 &&d2==0){
            break;
        }

        cout<<result(s1,s2,d1,d2)<<endl;
    }
    return 0;
}
