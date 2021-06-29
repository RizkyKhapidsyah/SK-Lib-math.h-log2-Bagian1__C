
#include <stdio.h>      /* printf */
#include <math.h>       /* log2 */
#include <conio.h>

int main() {
	double x, hasil;
	x = 7483.0;
	hasil = log2(x);
	printf("log2 (%f) = %f.\n", x, hasil);
	_getch();
	return 0;
}