#include <stdio.h>
#include <math.h>

// Declaring the structure
struct point{
    int x;
    int y;

};


int main(){
    int n, i;
    float distance[i];
    printf("Enter the number of points: ");
    scanf("%d", &n);

    // Creating the structure variable
    struct point p[n];


    // Inputing the values
    for (int i = 0; i<n; i++){
        printf("Enter the coordinates of point p[%d]: ", i+1);
        scanf("%d%d", &p[i].x, &p[i].y);
    }


    //Calculating the distance 
    for (i = 0; i<n-1; i++){
        distance[i] = sqrt( (pow(p[i].x - p[i+1].x,2)+pow(p[i].y - p[i+1].y,2)) );

    }


    //Displaying the outputs
    for (i = 0; i< (n-1); i++){
        printf("Distance between the points (%d,%d) and (%d,%d) is %.2f\n",p[i].x, p[i].y,p[i+1].x, p[i+1].y, distance[i]);

    } 

    return 0;
}