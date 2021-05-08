 #include<stdio.h>
   
         void concat(char s3[],char s4[],int l1)
          
              {
             
                      int  j=0;

	      while(s4[j]!='\0')
	
                         {
	   
                            s3[l1]=s4[j];

	             l1++;
	
                             j++;
	
                          }
	
                      s3[l1]='\0';
	
	printf("Concatenated string:\n");

	printf("%s\n",s3);
    
               }

         void copy(char s4[])
       
              {
	
                     char s3[100];
	
	     int i=0;

	     while(s4[i]!='\0')

	           {
	      
  	              s3[i]=s4[i];

	              i++;
	  
                           }

	s3[i]='\0';

	printf("Copied string\n");
	
	printf("%s\n",s3);
     
               }

         void compare(char s3[],char s4[],int l1,int l2)
     
              {

	      int same=1,i;
	
                      if(l1==l2)

	    {
	  
                             for(i=0;s3[i]!='\0';i++)

	           {
	       
     	                  if(s3[i]==s4[i])

	                     same=1;

	                  else
 
	                  {

		    same=0;

		    break;

	                  }

	           }

	     }

 	   else
 
	     same=0;

	    if(same==1)
	
                         printf("Strings are same\n");

	    else

	         printf("Strings are not same\n");

                }
 
         void lower(char s3[100],int l1)
             {
	int i;
	for(i=0;s3[i]!='\0';i++)
	   {
	       if(s3[i]>='A'&&s3[i]<='Z')
	          {
		s3[i]=s3[i]+32;
	          }
	   }
	s3[i]='\0';
	printf("String in lower case\n");
	printf("%s\n",s3);
             }
         void upper(char s3[100],int l1)
             {
	int i;
	for(i=0;s3[i]!='\0';i++)
	   {
	       if(s3[i]>='a'&&s3[i]<='z')
	           {
		s3[i]=s3[i]-32;
	            }
	    }
	s3[i]='\0';
	printf("String in upper case\n");
	printf("%s\n",s3);
               }
          int length(char s3[])
 
             {

	int i=0;

	while(s3[i]!='\0')

	     {

	          i++;

	      }

	return(i);

               }
 
       void main()

             {

	char s1[100],s2[100];

	int l1,l2;

	printf("Enter 1st string\n");

	scanf("%s",s1);

	printf("Enter 2nd string\n");

	scanf("%s",s2);

	    l1=length(s1);
 
                    l2=length(s2);

	    copy(s1);
 
	    compare(s1,s2,l1,l2);
  
	    concat(s1,s2,l1);
                     printf("Length of 1st string=%d\n",l1);

	printf("Length of 2nd string=%d\n",l2);  
                     lower(s1,l1);
	     upper(s1,l1);
             }
          
        
