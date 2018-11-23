#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100000];
    long int i,x,y;
    x=0;
    while(gets(str))
    {
        y = strlen(str);
        for(i=0;i<y;i++)
        {
            if(str[i]=='"'){
                x++;
                if(x%2==1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
