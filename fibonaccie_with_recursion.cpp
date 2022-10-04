#include <stdio.h>
int main()
{
int n1 = 0, n2 = 1, sum = 0, n;
printf("Enter the end term for the series: ");
scanf("%d", &n);
printf("Fibonacci Series: %d, %d, ", n1, n2);
sum = n1+n2;
while(sum <= n)
{
printf("%d, ",sum);
n1 = n2;
n2 = sum;
sum = n1+n2;
}
return 0;
}


