#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(){


for (double x = 1; x<=3; x+=1.3)
{
	for (double y = 2; y <= 4; y+= 1.3)
	{
 


		for (double z = 0.5; z <= 1.5; z += 0.8)
		{
		
	printf("x=%f y=%f z=%f U = %f \n", x, y, z, (-(sqrt(pow(y,2) +   (pow(x,2) * 4) / 3))) + (5 * (pow(cos(x*y), 4)) / (x*z)));
		}
	}
}
		
		return 0;
}
