
#include<stdio.h>

int main()
{
    int totaldays, years, months, days;

    printf("Enter number of days: ");
    scanf("%d", &totaldays);

    
    years = totaldays / 365;

    
    months = (totaldays - years *365) / 30;

   
    days = (totaldays - years * 365 - months*30);

   
    printf("Years = %d", years);
    printf("\nMonths = %d", months);
    printf("\nDays = %d", days);

    return 0;
}