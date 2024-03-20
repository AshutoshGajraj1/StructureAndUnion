#include <stdio.h>
 
struct complex{
    int i;
    int j;
};

int main(){

    struct complex c1, c2;

    printf("Enter the real and imaginary value of c1: ");
    scanf("%d%d", &c1.i, &c1.j);

    printf("Enter the real and imaginary value of c2: ");
    scanf("%d%d", &c2.i, &c2.j);


    //Displaying the complex numbers
    printf("\nFirst complex number: %di + %dj\n", c1.i, c1.j);
    printf("Second complex number: %di + %dj\n", c2.i, c2.j);

    // Adding the complex numbers
    printf("The sum is: %di + %dj", c1.i+c2.i, c1.j + c2.j);

    return 0;
}