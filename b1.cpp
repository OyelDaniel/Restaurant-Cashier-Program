#include "stdio.h"
int main()
{
	printf("\t             SATAY RESTAURANT\n");
	printf("______________________________________________________________________________________________________________\n");
	printf("\tCombo Type		Item		                        Price(RM)\n");
	printf("______________________________________________________________________________________________________________\n");
	printf("\tA           \t25 Chicken Satay + 25 Beef Satay      	\t40.00\n");
	printf("\tB           \t30 Chicken Satay + 20 Mutton Satay      \t52.00\n");
	printf("\tC           \t10 Mutton Satay + 40 Beef Satay         \t46.00\n");
	printf("\tAdd-on      \tKetupat          			       \t0.60\n");
	printf("______________________________________________________________________________________________________________\n");
	
	float cTP, cP, oP;
	int qCT, kQ;
	char cT, answer;
	
	printf("Enter combo type (A/B/C): ");
	fflush(stdin);
	scanf("%c",&cT);
	
	
	if ((cT=='a')||(cT=='A'))
		(cTP=40.00);
	else if ((cT=='b')||(cT=='B'))
		(cTP=52.00);
	else if ((cT=='c')||(cT=='C'))
		(cTP=46.00);
	
	if ((cT=='a')||(cT=='A')||(cT=='b')||(cT=='B')||(cT=='c')||(cT=='C'))
	{
	printf ("Enter quantity: ");
	scanf("%d",&qCT);
	cP = cTP * qCT;
	printf("Add-on ketupat (Y/N): ");
	fflush(stdin);
	scanf("%c",&answer);
	
	if ((answer=='y')||(answer=='Y'))
	{
		printf("Enter Ketupat Quantity: ");
		 scanf("%d",&kQ);
		 oP = cP + 0.6 * kQ;
		 printf("Order Price: RM%.2f",oP);
	}
	
	else
		printf("Order Price: RM%.2f", cP);
	}
	else
		printf ("NOT VALID");
	return 0;
}			 	
