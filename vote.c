#include<stdio.h>
#include<conio.h>

 int main()
 {
 	 int age;
 	 
 	 printf("Enter your age : ");
 	 scanf("%d",&age);// user input the age
 	 
 	 if(age>=18)//18>=,18 to 100, 100+
 	 {
 	 if(age>100)
	  {
	  	printf("You can not add age more than 100 !");
	  }	
	  else 
	  {
	  	//18 to 100 
	  	printf("You are eligible for vote !");
	  }
	}
 	 else //<=18, - , 0 ,1 to 18
 	 {
 	 	if(age<0)
 	 	{
		  if(age==0)// - , 0
		  {
		  	printf("0 age is not allow !");
		  }
		else 
		{
		      //-89, -18
			printf("negative age is not allow !");
		}
	    }
	}
        else
        if(age<18)
        { 
         	printf("You are eligible for vote !");
		}
		else
 	  {
 	 	//1 to 18 
 	 	printf("You are not eligible for vote !");
	  }
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 }