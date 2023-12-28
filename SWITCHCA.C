#include<stdio.h>
#include<conio.h>

void main(){
int c,e,g,h;
clrscr();
printf("====Ek ka double telecom====\n\n\n");
pritnf("1 for eng\n");
pritnf("2 for hin\n");
pritnf("3 for guj\n");
pritnf("chuse your len");
scanf("%d",&c);

   switch(c){
      case 1:
	    printf("1 for internet recharge \n");
	    printf("2 for top-up recharge \n");
	    printf("3 for special recharge \n");
	    printf("Enter your choise \n");
	    scanf("%d",&e)
	    switch(e){
		 case 1:
		       printf("you have int recharge \n");
		      break;
		 case 2:
		       printf("you have top-up recharge \n");
		      break;
		 case 3:
		       printf("you have spe recharge \n");
		      break;
		 default:
		       printf("not velid");
		      break;
	     }
	     break;
	  case 2:
	    printf("1 internet recharge kelie \n");
	    printf("2 for top-up recharge kelie \n");
	    printf("3 for special recharge krlie \n");
	    printf("pasand kare");
	    scanf("%d",&h)
	    switch(h){
		 case 1:
		       printf("int recharge safal \n");
		      break;
		 case 2:
		       printf("top-up recharge safal \n");
		      break;
		 case 3:
		       printf("spe recharge safal \n");
		      break;
		 default:
		       printf("a manya");
		      break;
	     }
	     break;
	  case 3:
	    printf("internet recharge mate 1 \n");
	    printf("top-up recharge mate 2 \n");
	    printf("special recharge mate 3 \n");
	    printf("pasand karo");
	    scanf("%d",&e)
	    switch(e){
		 case 1:
		       printf("int recharge safal thayu \n");
		      break;
		 case 2:
		       printf("top-up recharge safal thayu \n");
		      break;
		 case 3:
		       printf("spe recharge safal thayu \n");
		      break;
		 default:
		       printf("manya nathi");
		      break;
	     }
	     break;
	  default:
	    printf("not velid");
   }

   getch();

}