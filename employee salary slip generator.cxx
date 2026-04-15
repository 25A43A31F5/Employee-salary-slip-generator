#include <stdio.h>

int main() {
    char name[50];
    int empId;
    float basic, hra, da, pf, netSalary;

    // Input
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    // Calculations
    hra = basic * 0.20;   // 20% HRA
    da  = basic * 0.10;   // 10% DA
    pf  = basic * 0.08;   // 8% PF deduction

    netSalary = basic + hra + da - pf;

    // Output Salary Slip
    printf("\n\n------ SALARY SLIP ------\n");
    printf("Employee Name : %s\n", name);
    printf("Employee ID   : %d\n", empId);
    printf("-------------------------\n");
    printf("Basic Salary  : %.2f\n", basic);
    printf("HRA (20%%)     : %.2f\n", hra);
    printf("DA (10%%)      : %.2f\n", da);
    printf("PF (8%%)       : %.2f\n", pf);
    printf("-------------------------\n");
    printf("Net Salary    : %.2f\n", netSalary);
    printf("-------------------------\n");

    return 0;
}