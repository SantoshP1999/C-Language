#include <stdio.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
    char name[NAME_LENGTH];
    int age;
    float salary;
    char sex;
    char marital_status[MARITAL_STATUS];
};

int main(void)
{
    // variable declarations
    struct Employee EmployeeRecord[5]; // An Array of 5 struct - Each being type 'struct Employee'

    char employee_rajesh[] = "Rajesh";
    char employee_sameer[] = "Sameer";
    char employee_kalyani[] = "Kalyani";
    char employee_sonali[] = "Sonali";
    char employee_ashwini[] = "Ashwini";

    int i;

    // code
    // HARD CODED INITIALIZATION OF ARRAy OF 'struct Employee'

    // EMPLOYEE 1
    strcpy(EmployeeRecord[0].name, employee_rajesh);
    EmployeeRecord[0].age = 30;
    EmployeeRecord[0].sex = 'M';
    EmployeeRecord[0].salary = 50000.0f;
    strcpy(EmployeeRecord[0].marital_status, "Unmarried");

    // EMPLOYEE 2
    strcpy(EmployeeRecord[1].name, employee_sameer);
    EmployeeRecord[1].age = 35;
    EmployeeRecord[1].sex = 'M';
    EmployeeRecord[1].salary = 60000.0f;
    strcpy(EmployeeRecord[1].marital_status, "Married");

    // EMPLOYEE 3
    strcpy(EmployeeRecord[2].name, employee_kalyani);
    EmployeeRecord[2].age = 20;
    EmployeeRecord[2].sex = 'F';
    EmployeeRecord[2].salary = 25000.0f;
    strcpy(EmployeeRecord[0].marital_status, "Unmarried");

    // EMPLOYEE 4
    strcpy(EmployeeRecord[3].name, employee_sonali);
    EmployeeRecord[3].age = 30;
    EmployeeRecord[3].sex = 'F';
    EmployeeRecord[3].salary = 50000.0f;
    strcpy(EmployeeRecord[3].marital_status, "Married");

    // EMPLOYEE 5
    strcpy(EmployeeRecord[4].name, employee_ashwini);
    EmployeeRecord[4].age = 24;
    EmployeeRecord[4].sex = 'F';
    EmployeeRecord[4].salary = 22000.0f;
    strcpy(EmployeeRecord[4].marital_status, "Married");

    // DISPLAY

    printf("\n\n");
    printf("************    DISPLAYING EMPLOYEE RECORDS **************\n\n");
    for (i = 0; i < 5; i++)
    {
        printf("*********   EMPLOYEE NUMBER %d *******\n\n", (i + 1));
        printf("NAME             :%s\n", EmployeeRecord[i].name);
        printf("AGE              :%d years\n", EmployeeRecord[i].age);
        if (EmployeeRecord[i].sex == 'M' || EmployeeRecord[i].sex == 'm')
        {
            printf("Sex             : Male\n");
        }
        else
        {
            printf("Sex              : Female\n");
        }

        printf("Salary           : RS.%f\n", EmployeeRecord[i].salary);
        printf("Marital Status   : %s\n", EmployeeRecord[i].marital_status);

        printf("\n\n");
    }

    return (0);
}