#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

extern void asm_run();
extern void c_run();

int main() {
	printf("ASSEMBLY PROGRAM RUN\n");
	asm_run();
	printf("C PROGRAM RUN\n");
	c_run();

	return 0;
}