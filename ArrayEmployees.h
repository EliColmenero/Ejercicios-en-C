#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}Employee;


int initEmployees(Employee* list ,int LEN);
int addEmployees(Employee* list, int id, char name[], char lastName[], float salary, int sector, int len);
int findEmployeeById(Employee* list, int id, int len);
int removeEmployee(Employee* list, int id, int len);


#endif // ARRAYEMPLOYEES_H_INCLUDED
