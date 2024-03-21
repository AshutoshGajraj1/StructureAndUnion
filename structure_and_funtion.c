#include <stdio.h>
#include <string.h>

//structure declaration
struct student{
    char name[25];
    int roll;
    float gpa;
};

//Function prototype
void Display(struct student s);

int main(){

    //Creating the structure variable
    struct student st;

    //Taking inputs 
    printf("Enter the student's info: \n");
    printf("Name: ");
    fgets(st.name, sizeof(st.name), stdin);

    //Removing the newline that fgets introduce at the end of string
    size_t len = strlen(st.name);
    if(len > 0 && st.name[len-1]  == '\n'){
        st.name[len-1] = '\0';
    }
 
    printf("Roll: ");
    scanf("%d", &st.roll);
    printf("gpa: ");
    scanf("%f", &st.gpa);


    //Funtion call
    Display(st);

    return 0;
}

void Display(struct student s){

    printf("************************************\n");
    printf("Name\tRoll\tgpa\n");
    printf("************************************\n");
    printf("%s\t%d\t%.2f", s.name, s.roll, s.gpa);
}