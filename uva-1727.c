#include<stdio.h>
int main()
{
    char MTH[10],DAY[10];
    int n,i;
    while(scanf("%d",&n)==1){
        for(i=1;i<=n;i++){
            scanf(" %s%s",MTH,DAY);
            if((MTH[0]=='J'&&MTH[1]=='A'&&MTH[2]=='N')||(MTH[0]=='M' && MTH[1]=='A' &&MTH[2]=='R')||(MTH[0]=='M' && MTH[1]=='A' &&MTH[2]=='Y')||
               (MTH[0]=='J' &&  MTH[1]=='U'&&MTH[2]=='L')||(MTH[0]=='A'&&MTH[1]=='U'&&MTH[2]=='G')||(MTH[0]=='O' &&MTH[1]=='C'&&MTH[2]=='T') ||
               (MTH[0]=='D' &&  MTH[1]=='E' &&MTH[2]=='C')){
                if((DAY[0]== 'S' &&DAY[1]=='U'&&DAY[2]=='N')||(DAY[0]=='M'&&DAY[1]=='O'&&DAY[2]=='N')||(DAY[0]=='T'&&DAY[1]=='U'&&DAY[2]=='E'))
                    printf("8\n");
                else if((DAY[0]== 'W' && DAY[1]=='E'&&DAY[2]=='D')||(DAY[0] =='S'&&DAY[1]=='A' &&DAY[2]=='T'))
                    printf("9\n");
                else  if((DAY[0]=='F'&&DAY[1]=='R'&&DAY[2]=='I')||(DAY[0]=='T'&&DAY[1]=='H' && DAY[2]=='U'))
                    printf("10\n");
            }
            else if((MTH[0]=='A' &&MTH[1]=='P'&&MTH[2]=='R')||(MTH[0]=='J'&&MTH[1]=='U'&&MTH[2]=='N')
                    || (MTH[0]=='S'&&MTH[1]=='E' &&MTH[2]=='P')||(MTH[0]=='N'&&MTH[1]=='O' &&MTH[2]=='V')){
                if((DAY[0]== 'S'&&DAY[1]=='U'&&DAY[2]=='N')||(DAY[0]== 'M'&&DAY[1]=='O'&&DAY[2]=='N')||
                   (DAY[0]=='T'&&DAY[1]=='U' && DAY[2]=='E')|| (DAY[0]== 'W' &&DAY[1]=='E' && DAY[2]=='D'))
                    printf("8\n");
                else if((DAY[0]== 'S' &&DAY[1]=='A' && DAY[2]=='T') || (DAY[0]== 'T' &&DAY[1]=='H' &&DAY[2]=='U'))
                    printf("9\n");
                else if (DAY[0]=='F'&&DAY[1]=='R'&&DAY[2]=='I')
                    printf("10\n");
            }
            else if(MTH[0]=='F'&&MTH[1]=='E' &&MTH[2]=='B'){
                if((DAY[0]== 'S'&&DAY[1]=='U'&&DAY[2]=='N')||(DAY[0]== 'M'&&DAY[1]=='O'&&DAY[2]=='N')||(DAY[0]=='F'&&DAY[1]=='R'&&DAY[2]=='I')
                   || (DAY[0]=='T'&&DAY[1]=='U' && DAY[2]=='E')|| (DAY[0]== 'W' &&DAY[1]=='E' && DAY[2]=='D')||
                   (DAY[0]== 'S' &&DAY[1]=='A' && DAY[2]=='T') || (DAY[0]== 'T' &&DAY[1]=='H' &&DAY[2]=='U'))
                    printf("8\n");
            }
        }
    }
    return 0;
}
