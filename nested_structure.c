#include <stdio.h>
#include <string.h>

// declaring the structure
struct Person{
    char name[20];
    int roll;
    float gpa;
};

int main(){

    // creating the variable and initializing values to p1 variable
    struct Person p1 = {"Ashutosh", 6, 4.0};


    struct Person p2;
    printf("Enter the student's info:\n");
    printf("Name: ");
    fgets(p2.name, sizeof(p2.name), stdin);


    // removing the newling character at the end of name
    size_t len = strlen(p2.name);
    if(len > 0 && p2.name[len-1] == '\n'){
        p2.name[len-1] = '\0';
    }


    printf("Roll: ");
    scanf("%d", &p2.roll);
    printf("GPA: ");
    scanf("%f", &p2.gpa);


    // Displaying the output
    printf("*******************************\n");
    printf("Name\tRoll\tGPA\n");
    printf("*******************************\n");
    printf("%s\t%d\t%.2f\n", p1.name, p1.roll, p1.gpa);
    printf("%s\t%d\t%.2f\n", p2.name, p2.roll, p2.gpa);

    return 0;
}