#include "stdio.h"
float calculatePrice(char); // function declaration

int main()
{
	float tCP[3],gT,kP,tOP[3],cP,customerPayment[3]; //array customerPayment, tCP dan tOP mempunyai 3 ruang
	int kQ[3],i,j; //array kQ mempunyai 3 ruang
	char cT, answer;
	
	printf("\t             SATAY RESTAURANT\n");
	printf("______________________________________________________________________________________________________________\n");
	printf("\tCombo Type		Item		                        Price(RM)\n");
	printf("______________________________________________________________________________________________________________\n");
	printf("\tA           \t25 Chicken Satay + 25 Beef Satay      	\t40.00\n");
	printf("\tB           \t30 Chicken Satay + 20 Mutton Satay      \t52.00\n");
	printf("\tC           \t10 Mutton Satay + 40 Beef Satay         \t46.00\n");
	printf("\tAdd-on      \tKetupat          			       \t0.60\n");
	printf("______________________________________________________________________________________________________________\n");
	
	for(i=0;i<3;i++)
	{
		printf("\n\nCUSTOMER %d",i+1);
		printf("\n\nEnter combo type (A/B/C) or X to end: ");
		fflush(stdin);
		scanf("%c",&cT);
	
		while ((cT!='x')&&(cT!='X'))
		{
			if ((cT=='A')||(cT=='a')||(cT=='B')||(cT=='b')||(cT=='C')||(cT=='c'))
			{
				cP = calculatePrice(cT); // function call, cP terima value cPrice
				printf("Order price for combo %c: RM%.2f",cT,cP);
				tCP[i] = tCP[i]+cP;
			}
			else
			{
				printf("invalid entry");
				printf("\n\nEnter combo type (A/B/C) or X to end: ");
				fflush(stdin);
				scanf("%c",&cT);
				continue;
			}
			printf("\n\nEnter combo type (A/B/C) or X to end: ");
			fflush(stdin);
			scanf("%c",&cT);	
		}
		printf("\n\nAdd-on ketupat (Y/N): ");
		fflush(stdin);
		scanf("%c",&answer);
		
		if ((answer=='y')||(answer=='Y'))
		{
			printf("Enter Ketupat Quantity: ");
			scanf("%d",&kQ[i]);
			kP = 0.6 * kQ[i];
			tOP[i] = tOP[i] + kP;
			printf("Order price for ketupat: RM%.2f ",kP);
			printf("\n\nTotal order price: RM%.2f",tOP[i]);
		}
		else
		{
			tOP[i]=tCP[i];
			printf("Total order price: RM%.2f", tOP[i]);
		}
		customerPayment[i] = tOP[i];
		}
	
	
	printf("\n\n\tORDER PRICE SUMMARY");
	printf("\n=======================================");
	printf("\nCustomerNo.  Total Order Price(RM)");
	printf("\n=======================================");
	
	for(j=0;j<3;j++)
		{
			printf("\n%d               %.2f",j+1,customerPayment[j]);
			gT=gT+customerPayment[j];
		}
	
	printf("\n=======================================");
	printf("\n      Grand Total      RM %.2f",gT);
	printf("\n=======================================");
	return 0;
}

float calculatePrice (char comboType)  //function definition
{
	int qCT;                                       //tukar variable dia    
	float cPrice, cTPrice;
	
	if ((comboType=='a')||(comboType=='A'))
		(cTPrice=40.00);
	else if ((comboType=='b')||(comboType=='B'))
		(cTPrice=52.00);
	else
		(cTPrice=46.00);
		
	printf ("Enter quantity: ");
	scanf("%d",&qCT);
	cPrice = cTPrice * qCT;
	return cPrice;					//dia akan pulangkan cPrice
}			 	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
