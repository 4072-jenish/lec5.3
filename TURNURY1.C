#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c,d,e;
clrscr();
 printf("Enter any five Numbers  ");
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

 (a>b)?(a>c)?(a>d)?(a>e)?printf("A is big ")
			:printf("E is big ")
		  :(d>e)?printf("D is big ")
			:printf("E is big ")
	    :(c>d)?(c>e)?printf("B is big ")
			:printf("E is big ")
		  :(d>e)?printf("D is big ")
			:printf("E is big ")
      :(b>c)?(b>d)?(a>e)?printf("B is big ")
			:printf("E is big ")
		  :(d>e)?printf("D is big ")
			:printf("E is big ")
	    :(c>d)?(c>e)?printf("B is big ")
			:printf("E is big ")
		  :(d>e)?printf("D is big ")
			:printf("E is big ");

	 getch();

}
