#include <stdio.h>
void print_days(int month, int day, int year)
{
if ((year % 4 == 0) && (year % 400 == 0 || year %  100 != 0))
{
if (month >= 3 && day >= 60)
{
day++
}
printf("Day of the year: %d\n", day);
printf("REmaining days: %d\n", 366-day);
}
else
{
if (month ==2 && day == 60)
{
printf("invalid date: 02d/%02d/%02d\n", month,day-31,year);
}
else
{
printf("day of the year: %d\n", day);
printf("remaining days: %d\n", 365-day0);
}
}
}

