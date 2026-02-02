/*#include<stdio.h>
int main()
{
   int x;
   x = 5;
   printf("%d",x);

   return 0;
}*/

/*printing  variables in c & updation of variables.*/

/*#include<stdio.h>
int main()
{
    int x;
    x = 7;
    printf("%d",x);
    x = x+5;
    printf("\n");
    printf("%d",x);
    return 0;
}

/* arithmetic operations on int data type
%d int ke liye hota hai float ke liye nahi hota hai */

/*#include<stdio.h>
int main()
{
    int x = 5;
    int y = 2;

    printf("%d\n", x-y);
    printf("%d\n",x+y);
    printf("%d\n",x*y);
    printf("%d\n",x/y);
    return 0;
   
} */

/*#include<stdio.h>
int main()
{
    float x = 5;
    float y = 2;
    float z = x / y;
    printf("%f",z);
    return 0;
}
#include<stdio.h>
int main()
{
    int a = 5, b=5;
    printf("a: %d, b = %d, a!=b : %d\n", a,b,a!=b);
    int c=(a==b);
    printf("a:%d, b:%d, a==b:%d\n",a,b,c);
    int x=1, y=0;
    printf("x:%d, y:%d, x&&y:%d\n", x,y,x&&y);

    printf("a:%d, b:%d, (a++>b)&&(++b<a):%d\n",a,b,(a++>b)&&(++b<a));
 
    return 0;
} */
/*
#include<stdio.h>
int main()
{
    int num1=42, num2=30;
    int max;
    max = (num1>num2)?num1:num2;
    max=num1>30?1:(num1<20?2:3);
    printf("max:%d\n", max);
    return 0;
} 
#include<stdio.h>
int main()
{
    int a=5;
    int b=a>>2;
    printf("a:%d, b:%d\n", a,b);
    return 0;
    
} 
#include<stdio.h>
int main(){
    int a=5, b=2;
    printf("a|b:%d",a|b);
    return 0;
}
int main(){
    int first_term, comm_diff, num_terms;
    scanf("%d",&first_term);
    scanf("%d",&comm_diff);
    scanf("%d",&num_terms);
    int sum;
    sum = (num_terms*(2*first_term+(num_terms-1)*comm_diff))/2;
    printf("%d",sum);
    return 0;
} */



   m