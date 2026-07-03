#include <stdio.h>
#include <string.h>
int main()
{printf("~~~~~*****~~~~~*****~~~~~*****~~~~~~~~~~*****~~~~~*****~~~~~*****~~~~~\n");
printf("\t\t\tWELCOME TO CADD MULTI-SPECIALITY HOSPITAL");
printf("\n~~~~~*****~~~~~*****~~~~~*****~~~~~~~~~~*****~~~~~*****~~~~~*****~~~~~");
printf("\nPlease enter your role:\n1-Patient\n2-Employee\n3-Administrator\n(1/2/3)=");
int Pr; //Person's role
scanf("%d",&Pr);
switch(Pr)
{case 1:
{char Pname[50],Pgen,Padd[200],Pno[10];int Page;
 printf("Enter name:");
 scanf("%s",&Pname);
 printf("Enter age:");
 scanf("%d",&Page);
 printf("Enter gender(F/M):");
 scanf(" %c",&Pgen);
 printf("Enter city:");
 scanf("%s",&Padd);
 printf("Enter phone number:");
 scanf("%s",&Pno);
 printf("Please select the symptom that best describes your current condition");
 printf("\n1. Fever/Cough\n2. Headache\n3. Stomach Pain\n4. Body Pain\n5. Chest Pain/Breathing Difficulty\n6. Eye Problem\n7. Tooth Pain\n8. Injury/Wound\n9. General Checkup\n=:");
 int symp;
 scanf("%d",&symp);
 char Pward[20];
 if(symp == 1)
        strcpy(Pward, "General Medicine");
else if(symp == 2)
        strcpy(Pward, "Neurology");
else if(symp == 3)
        strcpy(Pward, "Gastroenterology");
else if(symp == 4)
        strcpy(Pward, "Orthopedics");
else if(symp == 5)
        strcpy(Pward, "Cardiology/Pulmonology");
else if(symp == 6)
        strcpy(Pward, "Ophthalmology");
else if(symp == 7)
        strcpy(Pward, "Dentistry");
else if(symp == 8)
        strcpy(Pward, "Emergency and Trauma Care");
else if(symp == 9)
        strcpy(Pward, "General Medicine");
else
        strcpy(Pward, "Invalid Choice!");
printf("Designated Department: %s\n", Pward);
printf("\n=============================================================================\n");
printf("\t\tPATIENT REGISTRATION SUMMARY");
printf("\n=============================================================================\n");
printf("\n\n");
printf("NAME:%s\nAGE:%d\nGENDER:%c\nCITY:%s\nMOBILE:%s",Pname,Page,Pgen,Padd,Pno);
printf("\nDesignated Department:%s",Pward);

printf("\n=============================================================================\n");

printf("\nYour registration will be saved\nYou may consult the doctor at your respective department");
break;}
case 2:
{int wrk,desig;
printf("1. Join Hospital\n2. Request Services\n3. Apply for Leave\n=:");
scanf("%d",&wrk);
{if(wrk == 1)
{int empid,empage;
float empsal;
char empname[20],empphone[10],empdesig[10],empdep[25];
printf("\nEnter Employee ID: ");
scanf("%d", &empid);
printf("Enter Employee Name: ");
scanf("%s", &empname);
printf("Enter Age: ");
scanf("%d", &empage);
printf("Enter Phone Number: ");
scanf("%s",&empphone);
printf("Enter Designation:[Doctor/Nurse/Receptionist/Lab Technician/Pharmacist/Cleaner] ");
scanf("%s", &empdesig);
printf("Enter Department:[General Medicine/Neurology/Gastroenterology/Orthopedics/Cardiology/Pulmonology/Ophthalmology/Dentistry/Emergency and Trauma Care]");
scanf("%s", &empdep);
printf("Enter Salary: ");
scanf("%f", &empsal);
printf("\nEmployee Registered Successfully!");

printf("\n=============================================================================\n");
printf("\n      EMPLOYEE REGISTRATION SUMMARY");
printf("\n=============================================================================\n");

printf("\nEmployee ID      : %d", empid);
printf("\nEmployee Name    : %s", empname);
printf("\nAge              : %d", empage);
printf("\nPhone Number     : %s", empphone);
printf("\nDesignation      : %s", empdesig);
printf("\nDepartment       : %s", empdep);
printf("\nSalary           : %.2f", empsal);
printf("\n=============================================================================\n");

FILE *fp;

fp = fopen("C:\\Users\\SOWMYA SHRIE S\\Desktop\\employee.txt", "a");

fprintf(fp, "\nEmployee ID : %d", empid);
fprintf(fp, "\nName        : %s", empname);
fprintf(fp, "\nAge         : %d", empage);
fprintf(fp, "\nPhone       : %s", empphone);
fprintf(fp, "\nDesignation : %s", empdesig);
fprintf(fp, "\nDepartment  : %s", empdep);
fprintf(fp, "\nSalary      : %.2f", empsal);
fprintf(fp, "\n=============================================================================\n");

fclose(fp);
}
else if(wrk == 2)
{int service;
printf("\n=============================================================================\n");
printf("\n        REQUEST SERVICES");
printf("\n=============================================================================\n");
printf("\n1. Shift Change Request");
printf("\n2. Appointment with Administrator");
printf("\n\nEnter your choice: ");
scanf("%d", &service);
char rid[10];
printf("enter your ID:");
scanf("%s",&rid);
if(service == 1)
{printf("\n=============================================================================\n");
printf("\n        SHIFT CHANGE REQUEST");
printf("\n=============================================================================\n");
printf("Your shift change request has been successfully forwarded to your supervisor.\n\nPlease visit your supervisor for furtherdiscussion.\n You will be notified shortlyregarding the status of your request.\n");
printf("\n=============================================================================\n");}
else if(service == 2)
{printf("\n=============================================================================\n");
printf("\n        APPOINTMENT REQUEST");
printf("\n=============================================================================\n");
printf("\nYour appointment request has been\nsuccessfully submitted to the manager.\n\nPlease wait for confirmation.\nYou will be contacted shortly regarding\nthe meeting schedule.");
printf("\n=============================================================================\n");}
else
{printf("\nInvalid Choice!");}
}
else if(wrk == 3)
{int ldays,lid;
char lreason[100];
printf("Enter your employee ID: ");
scanf("%d", &lid);
printf("Enter Number of Leave Days: ");
scanf("%d", &ldays);
printf("Enter Reason for Leave: ");
scanf("%s", &lreason);
printf("\n=============================================================================\n");
printf("\n          LEAVE APPLICATION");
printf("\n=============================================================================\n");
printf("\nEmployee ID     : %d", lid);
printf("\nLeave Days      : %d", ldays);
printf("\nReason          : %s", lreason);
printf("\n=============================================================================\n");
printf("\n\nYour leave application has been submitted.");
printf("\nYou will be notified once it has been reviewed.");
}
}
 break;}
case 3:
{printf("\n=============================================================================\n");
printf("\n          COUNT OF EMPLOYEES");
printf("\n=============================================================================\n");
printf("\nDoctors         : 10");
printf("\nNurses          : 50");
printf("\nReceptionists   : 6");
printf("\nLab Technicians : 15");
printf("\nPharmacists     : 10");
printf("\nCleaners        : 20");
printf("\nDrivers        : 10");
printf("\nSecurities    :20");
printf("\n=============================================================================\n");
printf("\n\nTotal Employees : 131");
printf("\n=============================================================================\n");
break;}}}


















