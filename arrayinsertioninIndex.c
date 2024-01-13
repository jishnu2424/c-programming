#include<stdio.h>

int insertion(int array[], int n, int key, int capacity, int index) {
    if (n >= capacity || index < 0 || index > n)
        return n;

    for (int i = n - 1; i >= index; i--) {
        array[i + 1] = array[i];
    }

    array[index] = key;

    return n + 1;
}

int main() {
    int array[20] = {1, 2, 3, 6, 5, 4};
    int capacity = sizeof(array) / sizeof(array[0]);
    int n = 6;
    int i, key = 9, index = 4;

    printf("Before insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);

    n = insertion(array, n, key, capacity, index);

    printf("\nAfter insertion at index %d: ", index);
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);

    return 0;
}
