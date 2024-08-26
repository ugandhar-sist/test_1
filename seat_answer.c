#include <stdio.h>

int main() {
    int n, i, min_index, operations = 0;
    int a[10];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    while (n > 0) {
        // Find the index of the minimum element
        min_index = 0;
        for (i = 1; i < n; i++) {
            if (a[i] < a[min_index]) {
                min_index = i;
            }
        }

        // If the minimum is at the beginning, remove it
        if (min_index == 0) {
            n--;
        } else {
            // Otherwise, move the first element to the end
            int temp = a[0];
            for (i = 0; i < n - 1; i++) {
                a[i] = a[i + 1];
            }
            a[n - 1] = temp;
        }

        operations++;
    }

    printf("%d\n", operations);

    return 0;
}
