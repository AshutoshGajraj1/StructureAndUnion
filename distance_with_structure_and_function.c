#include <stdio.h>
#include <math.h>

//Decalaring the structure
struct point{
    int x;
    int y;
};

//Function prototype
float Distance(struct point p1, struct point p2);

int main(){

    //Creating the structure variable
    struct point p1, p2;

    //Taking inputs
    printf("Enter the coordinates of p1: ");
    scanf("%d%d", &p1.x, &p1.y);
    printf("Enter the coordinates of p2: ");
    scanf("%d%d", &p2.x, &p2.y);

    //Calling the function
    float distance = Distance(p1,p2); 

    //Displaying output
    printf("The distance between the points (%d,%d) and (%d,%d) is %.2f units.", p1.x, p1.y, p2.x, p2.y, distance);
    return 0;
}

//Defining the function
float Distance(struct point p1, struct point p2){

    //Calculating the distance
    float d = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));

    return d;
}