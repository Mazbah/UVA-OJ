#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    while(cin>>ch){
        if(ch>='0' && ch<='9')
            printf("%d\n",ch+1-48);
        else if(ch>='A' && ch<='Z')
            printf("%d\n",ch+1-55);
        else if(ch>='a' && ch<='z')
            printf("%d\n",ch+1-61);
        else
            printf("such number is impossible!\n");

    }
   // printf("%d",'0'+1);
    return 0;
}
