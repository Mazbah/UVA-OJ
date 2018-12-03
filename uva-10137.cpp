#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i;
    double pd,nd,c[10000],sum,average;
    while(cin>>t){
        if(t==0) break;
        average = 0;
        pd =0; nd =0;
        for(i=0;i<t;i++){
            scanf("%lf",&c[i]);
            average += c[i];
        }
        average = average/t;

        for(i=0;i<t;i++){
            double x= (long)((c[i]-average)*100.0)/100.0;
            if(x>0)
                pd+=x;
            else
                nd += x;
        }
        nd = -nd;
        if(nd>pd)
            printf("$%.2lf\n",nd);
        else
            printf("$%.2lf\n",pd);
    }
	return 0;
}
