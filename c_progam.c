#include <stdio.h>

int c_run() {
    int n;
    float sdot = 0;
    printf("Enter the length of the vectors: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        float a = 0.0;
        float b = 0.0;
        printf("Value for A%d: ", i+1);
        scanf("%f", &a);

        printf("Value for B%d: ", i + 1);
        scanf("%f", &b);

        sdot += a * b;
    }

    printf("Sdot: %f", sdot);
    return 0;
}
