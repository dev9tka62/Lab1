#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
float x = 0.01655, y = -2.75, z=0.15, d1,d2, d25,d3, d4,res;
d1= 10*((pow(x,1/3))+(pow(x, (y+2))));
d2= pow (d1, (1/2));
d25 = x-y;
d3 = abs(d25);
d4 = (pow((asin(z)), 2) - d3);
res =  d2 * d4;
printf("%f\n", res);
	return 0;
}
