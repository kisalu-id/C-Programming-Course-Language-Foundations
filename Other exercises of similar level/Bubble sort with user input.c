#include <stdio.h>
int main () {
    int i, j, n, temp;
    printf("Please enter, how many numbers you want to sort:\n");
    scanf("%d", &n);
    int array[n];
    printf("Please enter these numbers, press Enter after each one:\n");
    for (i=0; i<n; i++) {
        scanf("%d", &array[i]);
    }
    for (i=0; i<n-1; i++) {
        for (j=0; j<n-i-1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1]; 
                array [j+1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (i=0; i<n; i++) {
    printf("%d ", array[i]);
    }
    return 0;
}
