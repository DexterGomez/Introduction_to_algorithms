/* Write a program to find the square 
* of the distance between two points.
*/

#include <stdio.h>

int main(){
	int x1,x2,y1,y2;
	
	printf("Insert the coordenates of the first point...\n");
	printf("X1 = ");
	scanf("%d",&x1);
	printf("Y1 = ");
	scanf("%d",&y1);
	
	printf("\nInsert the coordenates of the second point...\n");
	printf("X2 = ");
	scanf("%d",&x2);
	printf("Y2 = ");
	scanf("%d",&y2);
	
	int distance_square = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
	
	printf("\nThe squeare distance between two points is: %d\n",distance_square);
	
	return 0;
}
