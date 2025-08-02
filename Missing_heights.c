#include <stdio.h>

int main()
{
	float height1 , height2 , height3 , average , total , missing1 , missing2 , total_1 , missing_total ;

	
	printf("Enter the height of people one : ");
	scanf("%f" , &height1 );
	printf("Enter the height of people two : ");
	scanf("%f" , &height2 );
	printf("Enter the height of people three : ");
	scanf("%f" , &height3 );

	printf("Enter the average height : ");
        scanf("%f" , &average);

	total_1 = (height1+height2+height3);
	average = (total_1/3);
	total = (average*5);

	missing_total = (total - total_1);

	missing1 = (missing_total/2);
	missing2 = missing1 ;

	
	printf("missing1 Height : ");
	printf("%.2f\n", missing1);

	printf("missing2 Height : ");
	printf("%.2f\n" , missing2);
}
