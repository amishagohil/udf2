#include<stdio.h>

cal()
{
	int n,a,b;
	do
	{
	   	printf("enter your choice =");
		scanf("%d",&n);
		if(n==6)
		{
			printf("exit");
		}
		else if(n>6)
		{
			printf("plz enter correct value");
		}
		else if(n>0 && n<=6)
		{
			switch(n)
		    {
		     	case 1 :
			    	printf("enter value of A =");
	             	scanf("%d",&a);
	            	printf("enter value of B =");
	            	scanf("%d",&b);
			    	printf("addition of a+b =%d",a+b);
			    	break;
		    	case 2 :
			     	printf("enter value of A =");
		            scanf("%d",&a);
	                printf("enter value of B =");
	             	scanf("%d",&b);
			    	printf("subtraction of a-b =%d",a-b);
			    	break;
		     	case 3 :
			    	printf("enter value of A =");
	                scanf("%d",&a);
	                printf("enter value of B =");
	                scanf("%d",&b);
			        printf("addition of a*b =%d",a*b);
			        break;
				case 4 :
			        printf("enter value of A =");
		            scanf("%d",&a); 
	            	printf("enter value of B =");
	                scanf("%d",&b);
			    	printf("division of a/b =%d",a/b);
			    	break;
		        case 5 :
		         	printf("enter value of A =");
	             	scanf("%d",&a);
	             	printf("enter value of B =");
		            scanf("%d",&b); 
			    	printf("modulas of a%b =%d",a%b);
			     	break;	
		    	case 6 :
			    	printf("exit");
			    	break;		
	    	}
	   }
	}while(n!=6);
}
main()
{
	printf("press 1 to addition\n");
	printf("press 2 to subtraction\n");
	printf("press 3 to multiplication\n");
	printf("press 4 to division\n");
	printf("press 5 to modulas\n");
	printf("press 0 to exit\n");
	cal();
}
