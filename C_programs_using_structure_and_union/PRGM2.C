#include<stdio.h>
 
 
int main(void)
{       
    
    int day, mon, year;
 
    char *months[] = {
                        "January", "February", "March", "April",
                        "May", "June", "July", "August", 
                        "September", "October", "November", "December",
                      };
    
	printf("Enter date(dd/mm/yy): ");
	scanf("%d/%d/%d", &day,&mon,&year);
    
	printf("%d ",day);
    
    
    printf("%s, %d", months[mon - 1], year);
    
    return 0;
}