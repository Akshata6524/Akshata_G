#include <stdio.h>
void reverseArray(int *arr, int n) {
 int *start = arr, *end = arr + n - 1, temp;
 while (start < end) {
 temp = *start;
 *start = *end;
 *end = temp;
 start++;
 end--;
 }
}
int main() {
 int n;
 printf("Enter the number of elements: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter the elements: ");
 for (int i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 }
 reverseArray(arr, n);
 printf("Reverse Arrary:"):
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
