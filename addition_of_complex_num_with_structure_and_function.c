#include <stdio.h>

//Decalaring the structure
struct complex{
    int i;
    int j;
};

//Decalaring the function
struct complex sum(struct complex c1, struct complex c2);

int main(){

    //Creating the structure variables
    struct complex c1, c2;

    //Taking inputs
    printf("Enter the real and imaginary parts of c1: ");
    scanf("%d%d", &c1.i, &c1.j);
    printf("Enter the real and imaginary parts of c2: ");
    scanf("%d%d", &c2.i, &c2.j);

    //Calling the function
    struct complex result = sum(c1, c2);

    //Displaying the output
    printf("The complex numbers are:\n");
    printf("%di + %dj\n", c1.i, c1.j);
    printf("%di + %dj\n", c2.i, c2.j);
    printf("The sum is %di + %dj", result.i, result.j);
}

struct complex sum(struct complex c1, struct complex c2){

    struct complex c3;
    c3.i = c1.i + c2.i;
    c3.j = c1.j + c2.j;

    return(c3);
}