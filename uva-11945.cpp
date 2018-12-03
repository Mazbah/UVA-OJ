#include<bits/stdc++.h>
using namespace std;
void printcomma(int n){
    if(n<1000){
       cout<<n;
       return;
    }
    printcomma(n/1000);
    printf(",%03d",n%1000);
}
int main()
{
    int n,i,j;
    double sum,a,r;
    cin>>n;
    setlocale(LC_ALL,"en_US.UTF-8");
    for(i=1;i<=n;i++){
        sum = 0;
        for(j=1;j<=12;j++){
            cin>>a;
            sum+=a;
        }
       // r = sum/12;

        printf("%d $%'.2lf\n",i,sum/12.0);
    }
    return 0;
}
