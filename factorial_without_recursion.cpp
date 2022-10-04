#include<stdio.h>
int main(){
 int i,a=1, number;

 printf("Enter a number: ");
 scanf("%d", &number);

 for(i=1;i<=number;i++)
 a = a * i;

 printf("%d! = %d\n", number, a);
 return 0;
} 
