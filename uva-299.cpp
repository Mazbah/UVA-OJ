/// Bubble sort
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,x,k,temp;
    int data[1000];
    while(cin>>t){
        for(k=0;k<t;k++){
            x=0;
            cin>>n;
            for(i=0;i<n;i++)
                scanf("%d",&data[i]);
            for(i=0;i<n-1;i++){
                for(j=0;j<n-i-1;j++){
                    if(data[j]>data[j+1]){
                        x++;
                        temp = data[j];
                        data[j] = data[j+1];
                        data[j+1] = temp;
                    }
                }
            }
            printf("Optimal train swapping takes %d swaps.\n",x);
        }
    }
    return 0;
}
