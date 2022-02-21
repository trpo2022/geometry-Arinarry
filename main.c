#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.1415926


int main(){
	int figure = 3;
	float x,a,b,c,r,per,s,polper;
	printf("Choose a figure: \n 1 - Circle \n 2 - Triangle \n ");
	scanf("%d", &figure);
	switch(figure){
	
	case 1:
		printf("Enter the starting point: \n");
		scanf("%f", &x);
		printf("Enter radius: \n");
		scanf("%f", &r);
		s = Pi * r * r;
		per = 2 * r * Pi;
		printf("Square circle = %.4f \n Perimeter circle = %.4f \n", s, per);
		break;
	case 2:
		printf("Enter the sides of the triangle: \n");
		scanf("%f %f %f",&a,&b,&c);
		if (c <= a + b){
		per = a + b + c;
		polper = per/2;
		s = (sqrt(polper * (polper - a) * (polper - b) * (polper - c)));
		printf("Square triangle = %.4f \n Perimeter triangle = %.4f \n", s, per);
		break;
	    }
		else{
		printf("Error!!");
	}
}
	return 0;

} 
