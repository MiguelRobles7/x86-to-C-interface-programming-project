#include <stdio.h>

int c_user_input() {
    int n;
    float sdot = 0;
    printf("Enter the length of the vectors: ");
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        float a = 0.0;
        float b = 0.0;
        printf("Value for A%d: ", i + 1);
        scanf_s("%f", &a);

        printf("Value for B%d: ", i + 1);
        scanf_s("%f", &b);

        sdot += a * b;
    }

    printf("Sdot: %f", sdot);
    return 0;
}
