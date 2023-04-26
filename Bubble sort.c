#include <stdio.h>

void Bubble(int a[], int n) {
    int passes = n - 1;
    int comparisons, i, j, temp;
    for (i = 0; i < passes; i++) {
        comparisons = n - 1 - i;
        for (j = 0; j < comparisons; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[5] = {20, 41, 54, 119, 123};
    int n = 5;
    Bubble(a, n);
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
