#include <stdio.h>
int main()

{
    int year;
printf("enter year : ");
scanf("%d",&year);

if (year%4==0)
{ 
    
    if (year%100==0)
    { 
        

        if (year%400==0)
        
            printf("Its a leap year",year);

            else
            
                printf("not a leap year"); 
            
    }
    
            else
            
                printf("Its a leap year");
}



            else

                printf("not a leap year");

    return 0;

}

