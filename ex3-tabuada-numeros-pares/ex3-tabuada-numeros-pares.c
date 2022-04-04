#include <stdio.h>

int main() {
	printf("Tabuada: \n");

	for (int index = 2; index <= 10; index += 2) {
		for (int current_number = 0; current_number <= 10; current_number++) {
			printf("%ix%i = %i\n", index, current_number, index * current_number);

			if (current_number == 10) printf("\n");
		}

	}

	return 0;
}