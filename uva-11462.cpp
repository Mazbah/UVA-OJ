#include<iostream>
#include<algorithm>
using namespace std;
long int age[2000005];
int main()
{
    long int n,i;
    while(1){
        cin>>n;
        if(n==0)
            break;
        for(i=0;i<n;i++)
            cin>>age[i];

        sort(age,age+i);

        for(i=0;i<n;i++){
            cout<<age[i];
            if(i<n-1) cout<<" ";}
            cout<<endl;
    }
    return 0;
}
