/*                   BASIC SALARY                  	 	      DA and HRA          
                  if basic<=20000         	                   hra=8%         da=10%
                  if basic>20000 and <=35000                   hra=16%       da=20%
	  if basic>35000                                         hra=24%       da=30%           */
                     
     #include<stdio.h>
        void main()
           {
	float hra,da,gross_salary;
	  struct employee
 	     { 
                        char name[10];
	        float basic;
	      }a;
                printf("Enter employee name\n");
                scanf("%s",a. name);
	printf("Enter basic salary\n");
	scanf("%f",&a.basic);
	if(a.basic<=20000)
 	   {
	       hra=(a.basic*8)/100;
	       da=(a.basic*10)/100;
 	   }
	else if(a.basic>20000&&a.basic<=35000)
	  {
	      hra=(a.basic*16)/100;
	      da=(a.basic*20)/100;
 	  }
	else
	  {
	     hra=(a.basic*24)/100;
 	     da=(a.basic*30)/100;
	   }
	gross_salary=a.basic+hra+da;
                printf("HRA=%f\n",hra);
	printf("DA=%f\n",da);
	printf("Gross Salary of employee %s=%f",a.name,gross_salary);
           }
