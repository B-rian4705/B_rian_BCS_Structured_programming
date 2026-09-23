/* Upto 7 days = ksh20
8 -14 days = ksh50
15days or more = ksh100*/

#include <stdio.h>

int main() {
    char name[15];
    char bookid[10];
    int duedays;
    float Charges;

	
	printf(" Name \t");
	scanf("%s",&name);
	
	printf("Enter bookID \t");
	scanf("%s",&bookid);
	
	printf("Enter Due date \t");
	scanf("%d",&duedays);
	
	if (duedays<=7) {
		Charges= duedays * 20;
		printf("Charges %.2f ksh\n",Charges);
	}
	else if (duedays<=14) {
		Charges= duedays * 50;
		printf("Charges %.2f ksh \n",Charges);
	}
	else if (duedays>=15) {
		Charges= duedays * 100;
		printf("Charges %.2f ksh \n",Charges);
	}
	
	
	
	return 0;
}