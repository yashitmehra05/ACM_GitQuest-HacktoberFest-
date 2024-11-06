#include <stdio.h>

int main() {
    int n, i, pos, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n+1];
    
    printf("Enter elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &x);
    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    for(i = n; i > x; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = x;
    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
