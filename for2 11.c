#include <stdio.h>
int main() {
    int n,ppd,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         scanf("%d",&ppd);
        sum=sum+ppd;
        if(ppd>100)
        count++;
        }
    printf("Total Patients:%d\n",sum);
    printf("Overcrowded Days:%d",count);
    return 0;
}
