#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Perform the dot product of two vectors
float dot_product(float *A, float *B, int n) {
    float result = 0.0f;
    for (int i = 0; i < n; i++) {
        result += A[i] * B[i];
    }
    return result;
}

int main() {
    int x;
    scanf("%d", &x);
    const int n = 1 << x;
    float *A = (float*)malloc(n * sizeof(float));
    float *B = (float*)malloc(n * sizeof(float));

    // Initialize vectors A and B with random values
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        A[i] = (float)rand() / RAND_MAX;
        B[i] = (float)rand() / RAND_MAX;
    }

    // Call the dot product function
    float sdot = dot_product(A, B, n);

    // Print the result
    printf("Dot product: %.6f\n", sdot);

    free(A);
    free(B);
    return 0;
}
