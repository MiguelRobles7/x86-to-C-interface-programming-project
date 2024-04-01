#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern float asm_run(float A, float B);
extern float c_run(float A, float B);

int main() {
	int n = 0; // Vector size

	double asm_time = 0;
	double c_time = 0;

	float asm_sdot = 0;
	float c_sdot = 0;

	int runs_needed = 30; // At least 30 runs

	printf("Input Vector Size (n): ");
	scanf_s("%d", &n);

	// Initialize array sizes
	float* A = (float*)malloc(n * sizeof(float));
	float* B = (float*)malloc(n * sizeof(float));
	
	srand(time(NULL));

	for (int i = 0; i < runs_needed; i++) {
		// Fill vectors A & B of size n with random values
		for (int j = 0; j < n; j++) {
			A[j] = (float)rand() / RAND_MAX;
			B[j] = (float)rand() / RAND_MAX;
		}

		// Measure Assembly Time
		clock_t begin = clock();
		for (int k = 0; k < n; k++) {
			asm_sdot += asm_run(A[k], B[k]);
		}
		clock_t end = clock();
		double run_time = (double)(end - begin)/CLOCKS_PER_SEC;

		printf("\nRun %d\n", i+1);
		printf("Assembly Sdot: %f\n", asm_sdot);
		printf("Assembly Time: %f\n", run_time);

		asm_time += run_time;

		// Measure C Time
		clock_t c_begin = clock();
		for (int k = 0; k < n; k++) {
			c_sdot += c_run(A[k], B[k]);
		}
		clock_t c_end = clock();
		run_time = (double)(c_end - c_begin)/CLOCKS_PER_SEC;

		// Display run results
		printf("C Sdot: %f\n", c_sdot);
		printf("C Time: %f\n", run_time);

		c_time += run_time;

		// Check if results are equal
		if (c_sdot == asm_sdot) printf("Equal\n");
		else printf("Not Equal\n");

		// Reset values
		asm_sdot = 0;
		c_sdot = 0;
	}

	// Get average time
	printf("\nAssembly Average Time: %f", asm_time / runs_needed);
	printf("\nC Average Time: %f", c_time/runs_needed);
	return 0;
}