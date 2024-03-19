#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int roll;
    float gpa;
};


int main(){

    struct student s;


    // Taking inputs
    printf("Enter student's name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll: ");
    scanf("%d", &s.roll);

    printf("Enter gpa: ");
    scanf("%f", &s.gpa);


    // Displaying the output


    printf("*****************************\n");
    printf("Name\tRoll\tGPA\n");
    printf("*****************************\n");
    printf("%s\t%d\t%.2f", s.name, s.roll, s.gpa);

    return 0;
}