// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

/*
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main(void)
{
	int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
	int i;
	
	// 1 octet
	unsigned char *char_ptr = (char *) v;
	for (i = 0; i < 20; i++) {
		printf("%p -> 0x%x\n", char_ptr + i, *(char_ptr + i));
	}

	// 2 octeti
	unsigned short *short_ptr = (short *) v;
	for (i = 0; i < 10; i++) {
		printf("%p -> 0x%x\n", short_ptr + i, *(short_ptr + i));
	}
	
	// 4 octeti
	unsigned *int_ptr = v;
	for (i = 0; i < 5; i++) {
		printf("%p -> 0x%x\n", int_ptr + i, *(int_ptr + i));
	}

	return 0;
}
