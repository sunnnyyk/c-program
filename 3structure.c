#include <stdio.h>

struct Student {
    int id;
    char name[20];
    int age;
    float marks;
};

int main() {
    struct Student student1;

    
    printf("Enter student1 ID: ");
    scanf("%d", &student1.id);

    printf("Enter student1 name: ");
    scanf("%*c", student1.name); 
    printf("Enter student1 age: ");
    scanf("%d", &student1.age);
    printf("Enter student1 marks: ");
    scanf("%f", &student1.marks);
    printf("\nStudent1 Information:\n");
    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
