

#include<stdio.h>

int main()

{

  int   n,i=1,a,zero=0,pos=0,neg=0 ;
  

 printf("enter how many  no.of times u want to enter numbers: \n");

 scanf(" %d ",&n );

 printf("enter the numbers : \n");

 while(i<=n)

 {  

   scanf("%d", &a);

 if(a==0)

 zero+=1;

 else if(a>0)

 pos+=1;

 else

 neg +=1;

 i++;  }

 printf(" number of zeroes = %d,positive= %d and negetive= %d ", zero,pos,neg);

return 0;

}
