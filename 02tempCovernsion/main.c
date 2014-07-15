#include <stdio.h>

main()
{
	int fahr;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	for (fahr = 0; fahr <=300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}