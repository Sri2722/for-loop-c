#include <stdio.h>

inhttps://www.onlinegdb.com/online_c_compiler#editor_1t main()
{
   int n,i,sum=0;
 
   scanf("%d",&n);
   for(i=1;i<=n/2;i++){
       if(n%i==0){
           sum=sum+i;
       }
   }
       if(sum==n){
           printf("yes");
       }
      else{
       printf("no");
       }
   
       
       return 0;
}