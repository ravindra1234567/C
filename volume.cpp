#include<stdio.h>
void main()
	{
		float radius,width,volume;
		printf("welcome \nthis is a program of volume of cone");
		printf("\nenter your radius:");
		scanf("%f",&radius);
		printf("\nenter your width:");
		scanf("%f",&width);
		volume=3.14*radius*radius*width/3;
		printf("\nvolume of cone:%f",volume);
		printf("\nthank you for using this program ");
	}
