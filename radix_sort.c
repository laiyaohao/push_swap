#include "push_swap.h"

void radix_sort(t_stack *stackA, t_stack *stackB, int size) {
	int max_bits = 0;
	int max_num = size - 1;

	// Find the number of bits needed to represent the largest number
	while ((max_num >> max_bits) != 0)
		max_bits++;

	for (int i = 0; i < max_bits; i++) {
		for (int j = 0; j < size; j++) {
			int num = stackA->items[stackA->top];

			// Check the i-th bit of the number
			if (((num >> i) & 1) == 0) {
				pb(stackB, stackA); // Push to stackB if the i-th bit is 0
			} else {
				ra(stackA);  // Rotate if the i-th bit is 1
			}
		}

		// Push all elements back from stackB to stackA
		while (!is_empty(stackB)) {
			pa(stackA, stackB);
		}
	}
}
