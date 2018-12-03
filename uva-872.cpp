#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    int cnt;

    while(cin>>n){

        if(n==1){
            cout<<"Stan wins."<<endl;
            continue;
        }

         cnt= 0;

         while(n>1){
            cnt++;

            if(cnt%2 == 1)
                n = (n+8)/9;
            else
                n = (n+1)/2;
         }

         if(cnt%2 == 1)
            cout<<"Stan wins."<<endl;
         else
            cout<<"Ollie wins."<<endl;
    }
    return 0;
}
