#include <stdio.h>
#define N 1000

// Variant 16

int main() {
    int a[N];
    int n;
    int i, j;
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    int countNegative = 0;

    int minAbsPosition = 0;
    for (i = 0; i < n; ++i) {
        if (a[i] < 0) {
            countNegative++;
        }
        if (a[i] < a[minAbsPosition]) {
            minAbsPosition = i;
        }
    }

    printf("%d negatives\n %d minAbsPosition\n", countNegative, minAbsPosition);

    int sumAbs = 0;
    for (i = minAbsPosition + 1; i < n; ++i) {
        sumAbs += a[i];
    }

    printf("%d sum\n", sumAbs);

    for (i = 0; i < n; ++i) {
        if (a[i] < 0) {
            a[i] *= a[i];
        }

        printf("%d ", a[i]);
    }

    printf("\n");

    int temp;
    for (i = 0; i < n; ++i) {
        for (j = 1; j < n - i; ++j) {
            if (a[j] < a[j-1]) {
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}