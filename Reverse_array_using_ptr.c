#include <stdio.h>
int main() {
 int n,i;
 int *start,*end,temp;
 printf("Enter the number of elements: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter the elements: ");
 for ( i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 }
 start=arr;
 end=arr+(n-1);
 while (start < end) {
 temp = *start;
 *start = *end;
 *end = temp;
 start++;
 end--;
 }

printf("Reverse Arrary:");
 for ( i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
}
