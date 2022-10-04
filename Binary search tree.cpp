#include <stdio.h>
int main()
{
int a, low, high, mid, n, key, array[1000];
printf("Enter number of elements :");
scanf("%d",&n);
printf("Enter %d integers\n", n);
for(a= 0; a < n; a++)
scanf("%d",&array[a]);
printf("Enter value to find");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list", key);
return 0;
}
