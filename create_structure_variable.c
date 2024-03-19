#include <stdio.h>
#include <string.h>

// Defining/declaring the structure
struct Person
{
    char name[20];
    int age;
    double salary;
};


int main(){
    
    // Creating structure variable
    struct Person p1, p2;

    // Assigning value to name of p1 and p2
    strcpy(p1.name, "Ashutosh Gajraj");
    strcpy(p2.name, "Chris Evans");

    // Assigning values to other p1 variables
    p1.age = 19;
    p1.salary = 9999999999.99;
    p2.age = 46;
    p2.salary = 999999999.99;

    //print struct variables
    printf("Name: %s\n", p1.name);
    printf("Age : %d\n", p1.age);
    printf("Salary: %.2lf\n", p1.salary);

    printf("Name: %s\n", p2.name);
    printf("Age : %d\n", p2.age);
    printf("Salary: %.2lf\n", p2.salary);
    return 0;
}