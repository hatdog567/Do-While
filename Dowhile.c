#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int main (int argc,char*argv) {


    //declaring the variables
    int std_no;
    float mid_grd, fin_grd, fin_ave, grade;
    char std_name [100], response, std_passed, std_failed, std_proccessed;

    // do while loop
    do
    {
    p ("\n\t\t\t <POLYTECHIC UNIVERSITY OF THE PHILIPPINES>");
    p ("\n\t\t 379 Pureza, Santa Mesa, Maynila, 1008 Kalakhang Maynila\n\n");    

    //input
    p ("\nStudent No.          : ");
    s ("%d", &std_no );
    p ("Student Name         : ");
    s ("%s", &std_name);
    p ("Midterm Grade        : ");
    s ("%f", &mid_grd);
    p ("Final Grade          : ");
    s ("%f", &fin_grd);

    //process
    grade = mid_grd + fin_grd;
    fin_ave = grade / 2;

    //output
    p ("Average Grade        : %f",fin_ave);

    //Remark test
    if (fin_ave >= 1.00 && fin_ave <= 3.00) {
        p ("\nRemark               : PASSED!");
    }
    else {
        p ("\nRemark               : FAILED!");
    }
    p ("\n----------------------------------------");
    //Question 
    p ("\nPROCESS ANOTHER (Y/N)?      : ");
    s ("%s", &response);


    //displays the following
    } while ((response == 'Y')|| (response == 'y'));
    p ("\nTOTAL NO. OF STUDENTS PASSED      : ");
    s ("%s", &std_passed);
    p ("TOTAL NO. OF STUDENTS FAILED      : ");
    s ("%s", &std_failed);
    p ("TOTAL NO. OF STUDENTS PROCESSED   : ");
    s ("%s", &std_proccessed);
    p ("\nPREPARED BY: WENCY A. GERALDO\n");

    system("PAUSE");
    return 0; 
}