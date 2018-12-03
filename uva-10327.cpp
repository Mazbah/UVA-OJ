#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,s[1010],temp;
    while(cin>>n){
        for(i=0;i<n;i++)
            scanf("%d",&s[i]);
        x = 0;
        for(i=1;i<n;i++){
            for(j=n-1;j>=i;j--){
                if(s[j-1]>s[j]){
                    temp = s[j-1];
                    s[j-1] = s[j];
                    s[j] = temp;
                    x++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",x);
    }
    return 0;
}
