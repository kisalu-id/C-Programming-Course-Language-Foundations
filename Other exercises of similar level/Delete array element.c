#include <stdio.h>

int main() {
    int arr[51], del, num;
    printf("How much elements you want in your array?\n");
    scanf("%d", &num);

    printf("Enter these %d elements:\n", num);

    for (int i=0; i<num; i++) {
        scanf("%d", &arr[i]); }

    printf("What element of this array you want to delete? The array element count starts at 0\n");
    scanf("%d", &del);
    
    if (del >= num || del < 0) {
        printf("Incorrect number\n");
    } else {
        for (int i = del; i < (num-1); i++) {
            arr[i] = arr[i + 1]; }

        printf("Udpated array:\n");

        for (int i=0; i < (num-1); i++) {
            printf("%d\n", arr[i]); }
    }

    return 0;
}
