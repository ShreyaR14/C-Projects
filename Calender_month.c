#include <stdio.h>

main()
{
    int numberday, firstday, i;

    printf("Enter number of days in month: ");
    scanf("%d", &numberday);
    
    if(numberday==28||numberday==29||numberday==30||numberday==31)
    {
    printf("Enter starting day of the week (0=Sun, 6=Sat): ");
    scanf("%d", &firstday); 
    
    if(firstday>6)
   		{	
		   printf("Invalid data");
		}
    else
    {
    printf("\n\n\n");
    printf(" Sun Mon Tue Wed  Thu  Fri Sat\n");

    for (i = 1; i <= firstday ; i++) 
		{
      		printf("    ");
    	} 

    for(i = 1; i <= numberday; i++) 
		{
        	printf("%4d", i);
	           	if (((i + firstday) % 7) == 0)
					{
               			printf("\n\n");
           			}
   		}
    }
}
	else
	{ printf("Invalid data"); }
}

