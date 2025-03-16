//phone pay payment sucessfully
//upi pin=790824
#include<stdio.h>
	int main()
	
		{
			printf("-------------------PHONE PAY--------------------------");
			int n,m=790824,b=71050,g,h;
			printf("\nEnter your upi pin:-");
			scanf("%d",&n);
			if(n==m)
			{
				printf("payment sucessfully");
				
			}
			else{
				printf("WRONG UPI PIN TRY AGAIN AFTER 24 HOURS");
			}
			//CHECK THE BANK BALANCE
			//BANK BALANCE=71050
			printf("\nENTER YOUR UPI PIN FOR CHECK YOUR BANK BALANCE:-");
			scanf("%d",&n);
			if(n==m)
			{
				printf(" BANK BALANCE IS :->%d",b);
			}
			else printf("WRONG UPI PIN TRY AGAIN AFTER 24 HOURS");
			printf(" \n press 1 transfer money to mobile no");
			printf(" \n press 2 to bank/upi id");
			printf(" \n press 3 to self accout ");
			printf(" \n press 4 check your phone pay wallet");
			scanf("%d",&g);
			switch(g)
			{
				case 1: printf(" SEND MONEY TO=_XXXXXXXXXXXX_");
						break;
				case 2: printf(" ENTER YOUR BANK UPI ID:-XXXXXXXXXXXXXXXXX");
						break;
				case 3: printf(" SELF ACCOUNT TRANSFER");
						break;
				case 4: printf(" PROCEDD TO TOP UP");
						break;
				default: printf("INVAILD CHOICE ");
						break;
				
			}
						printf(" \n press 1 for check your payment status");
			printf(" \n press 2 for check your validity status");
			printf(" \n press 3 for check your mobile recharge ");
			printf(" \n press 4 for check your adhar card");
			scanf("%d",&g);
			switch(g)
			{
				case 1: printf(" RECIVED FROM ARJAN\n SENT TO ARJAN");
						break;
				case 2: printf(" VALIDITY 18 MARCH 2025");
						break;
				case 3: printf(" RECHARGE IS EXPIRED");
						break;
				case 4: printf(" ADHAR NO-8568-XXXX-XXXX");
						break;
				default: printf("INVAILD CHOICE ");
						break;
				
			}
						printf(" \n press 1 for check your profile");
			printf(" \n press 2 for check your upi id");
			printf(" \n press 3 for check your payment management ");
			printf(" \n press 4 for set up password");
			scanf("%d",&g);
			switch(g)
			{
				case 1: printf(" NAME:->\nPHONE NO.->--------------------");
						break;
				case 2: printf(" UPI ID IS:->898XXXXXXXXXXXXXX@XBZ");
						break;
				case 3: printf(" AUTO PAY\n INTERNATIONAL\n UPI SETTINGS\n");
						break;
				case 4: printf(" OTP FOR RESET YOUR PASSWORD");
						break;
				default: printf("INVAILD CHOICE ");
						break;
			
			
		}
					printf(" \n press 1 for PERMISSION");
			printf(" \n press 2 for SCRREN LOCK");
			printf(" \n press 3 for ABOUT PHONEPAY ");
			printf(" \n press 4 for EXIT");
			scanf("%d",&g);
			switch(g)
			{
				case 1: printf(" SECURE UPI PAYMENTS \n BILL PAYMENT REMINDERS \n GET FINANCIAL PRODUCT SUGGESTION");
						break;
				case 2: printf(" BIOMETRIC & SCREEN LOCK");
						break;
				case 3: printf(" Our goal is to make digital payments so easy, safe and universally accepted that people never feel the need to carry cash or cards again. We believe India is at the cusp of a new mobile revolution, which will change the way we manage our money on the go. We see ourselves facilitating this change, through technology and dogged customer centricity.PhonePe is a brand owned by Phonepe Private Limited Formerly known as FX Mart Pvt Ltd.CIN – xxxxxxxxxxxxxxxx). It is licensed by the Reserve Bank of India for issuance and operation of a Semi Closed Prepaid Payment system.");
						break;
				case 4: printf(" THANK YOU ");
						break;
				default: printf("INVAILD CHOICE ");
						break;
		}
			
			return 0 ;
			
		}