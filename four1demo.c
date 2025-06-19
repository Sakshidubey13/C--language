#include<stdio.h>
#include<conio.h>
    void main()
{
	// logical operator (&&,||, !)
	// use to && (AND)
	int x = 10, y = 13;
	printf("%d\n",x<y && x==y && x<=y);
	printf("%d\n",x<y && x>y);
	printf("%d\n",x<y && x!=y);
	printf("%d\n",x>y && x!=y);
	printf("%d\n",x>=y && x<=y);
	printf("%d\n",x=y && x<=y);
	printf("%d\n",x<=y && x<=y);
	printf("%d\n",x==y && x<=y && x>=y);
	printf("%d\n",x!=y && x<=y && x!=y);
	printf("%d\n",x!=y && x<=y || x!=y);
	
	//use to || (or)
	printf("%d\n",x==y || x!=y );
	printf("%d\n",x<y || x>y);
	printf("%d\n",x<y || x!=y);
	printf("%d\n",x>y || x!=y);
	printf("%d\n",x>=y || x<=y);
	printf("%d\n",x=y || x<=y);
	printf("%d\n",x<=y || x<=y);
	printf("%d\n",x==y || x<=y || x>=y);
	printf("%d\n",x!=y || x<=y && x>=y);
	printf("%d\n",x!=y && x<=y || x!=y);
	
	
	
	
}