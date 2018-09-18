// circle.c: Prints the areas of circles
// Uses circulararea.c for the math

#include <stdio.h>

double circularArea(double r);

int main() {
	double radius = 1.0;
	double area = 0.0;

	printf( " Areas of Circles\n\n");
	printf( "	Radius	Area\n"
		" --------------------");

	area = circularArea(radius);
	printf ( "%10.1f	%10.2f\n", radius, area);

	radius = 5.0;
	area = circularAread(radius);
	printf ( "%10.1f %10.2f\n", radius, area);

	return 0;
}

//The function circularArea() calculates the area of a circle
//Parameter: The radius of the circle
//Return value: The area of the circle

double circularArea(double r) //Definition of circularArea() begins
{
	const double pi = 3.14159; //Pi is a constant
	return pi * r;
