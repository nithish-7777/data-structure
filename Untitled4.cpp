#include <stdio.h>
 
struct Employee {
    char name[50];
    int id;
    float salary;
};
 
int main() {
    struct Employee employees[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter name of employee %d: ", i+1);
        scanf("%s", &employees[i].name);
        printf("Enter ID of employee %d: ", i+1);
        scanf("%d", &employees[i].id);
        printf("Enter salary of employee %d: ", i+1);
        scanf("%f", &employees[i].salary);
    }
 
    for (int i = 0; i < 3; i++) {
        printf("Employee %d: Name: %s, ID: %d, Salary: %.2f\n", i+1, employees[i].name, employees[i].id, employees[i].salary);
    }
 
    return 0;
}
