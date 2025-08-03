#include<stdio.h>

int main() 
{
	float preimeter , lenght , width ;

	printf("Enter the preimeter : ");
	scanf("%f" , &preimeter);
	
	lenght =((2*preimeter) / 7);
	width =(lenght*(3.0/4.0));
	
	printf(" lenght is : %.2f \n",lenght);

	printf(" width  is : %.2f ", width);

}
