#include <stdio.h>

int main() {
    int size1, size2, i, j, k,m=0;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d sorted elements for the first array:\n", size1);
    for(i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter %d sorted elements for the second array:\n", size2);
    for(i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    int newarray[size1+size2];
    for(i=0;i<size1;i++){
        newarray[m]=arr1[i];
        m++;
    for(j=0;j<size2;j++){
        newarray[m]=arr2[j];
    }
    }
    printf("the merged array is : \n");
    for(i=0;i<(size1+size1);i++){
        printf("%d ",newarray[i]);
    }

    return 0;
}

