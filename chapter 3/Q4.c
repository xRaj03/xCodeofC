/*If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
The year is a leap year (it has 366 days).
The year is not a leap year (it has 365 days).*/


#include <stdio.h>
int main()
{
      int year;
      printf("Enter a year: ");
      scanf("%d",&year);
      if(year%4 == 0)
      {
          if( year%100 == 0) /* Checking for a century year */
          {
              if ( year%400 == 0)
                 printf("%d is a leap year.", year);
              else
                 printf("%d is not a leap year.", year);
          }
          else
             printf("%d is a leap year.", year );
      }
      else
         printf("%d is not a leap year.", year);
      return 0;
}