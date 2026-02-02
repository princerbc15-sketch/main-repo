/*#include<stdio.h>
int main() {
    float radius;
    printf("Enter radius : ");
    scanf("%f",&radius);
    float pi=3.1415;
    float area= pi * radius *radius;
    printf("The area of circle is: %f",area);
    return 0;
} */
/*#include<stdio.h>
int main(){
    float principal,rate,time,si;
    printf("Enter Principal : ");
    scanf("%f",&principal);
    printf("Enter Rate : ");
    scanf("%f",&rate);
    printf("Enter Time : ");
    scanf("%f",&time);15
    si = (principal*rate*time)/100;
    printf("Your simple interest is : %f",si);
    return 0;
} */
/*#include<stdio.h>
int main(){
    int p,q;
    printf("Enter values of p and q");
    scanf("%d%d",&p,&q);
    printf("p = %d q = %d",p,q);
    return 0;
}*/

// take two integers input, a and b:a>b, and find the remainder when a is divided by b.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter 1st number: ");
    scanf("%d",&a);
    printf("enter 2nd number: ");
    scanf("%d",&b);
    int q = a/b;
    int r = a-(b*q); // civisor * quotient + remainder = dividend
    printf("The remainder when %d is divided by %d is : %d ",a,b,r);
    return 0;

}