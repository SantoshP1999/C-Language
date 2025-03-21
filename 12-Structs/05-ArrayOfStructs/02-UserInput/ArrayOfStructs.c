#include <stdio.h>
#include <ctype.h>

#define NUM_EMPLOYEES 5

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
    char name[NAME_LENGTH];
    int age;
    float salary;
    char sex;
    char marital_status;
};

int main(void)
{

    // function prototype
    void MyGetString(char[], int);

    // Variable Declartion
    struct Employee EmployeeRecord[NUM_EMPLOYEES];
    int i;
    // code
    // USER INPUT INITIALIZATION OF ARRAY OF 'struct Employee'
    for (i = 0; i < NUM_EMPLOYEES; i++)
    {
        printf("\n\n");
        printf("*********   DATA ENTRY FOR EMPLOYEE %d ****************\n", (i + 1));
        printf("\n\n");
        printf("Enter Employee Name : ");
        MyGetString(EmployeeRecord[i].name, NAME_LENGTH);

        printf("\n\n\n");
        printf("Enter Employee's Age (in years) : ");
        scanf("%d", &EmployeeRecord[i].age);

        printf("\n\n");
        printf("Enter Employee's Sex (M/m For Male, F/f For Female) : ");
        EmployeeRecord[i].sex = getch();
        printf("%c", EmployeeRecord[i].sex);
        EmployeeRecord[i].sex = toupper(EmployeeRecord[i].sex);

        printf("\n\n");
        printf("Enter Employees's Salary (In Indian Rupees ) : ");
        scanf("%f", &EmployeeRecord[i].salary);

        printf("\n\n");
        printf("Is The Employee Married? (Y/y For Yes, N/n For No) : ");
        EmployeeRecord[i].marital_status = getch();
        printf("%c", EmployeeRecord[i].marital_status);
        EmployeeRecord[i].marital_status = toupper(EmployeeRecord[i].marital_status);
    }
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
            printf("Sex              : Male\n");
        }
        else if (EmployeeRecord[i].sex == 'F' || EmployeeRecord[i].sex == 'f')
        {
            printf("Sex              : Female\n");
        }
        else
        {
            printf("Sex              : Invalid Data Entered\n");
        }

        printf("Salary           : RS.%f\n", EmployeeRecord[i].salary);

        if (EmployeeRecord[i].marital_status == 'Y')
        {
            printf("Marital Status   : Married\n");
        }
        else if (EmployeeRecord[i].marital_status == 'N')
        {
            printf("Marital Status   : Unmarried\n");
        }
        else
        {
            printf("Marital Status   : Invalid Data Entered\n");
        }

        printf("\n\n");
    }

    return (0);
}

void MyGetString(char str[], int str_size)
{
    // variable declarations
    int i;
    char ch = '\0';

    // code
    i = 0;
    do
    {
        ch = getch();
        str[i] = ch;
        printf("%c", str[i]);
        i++;
    } while ((ch != '\r') && (i < str_size));

    if (i == str_size)
    {
        str[i - 1] = '\0';
    }
    else
    {
        str[i] = '\0';
    }
}