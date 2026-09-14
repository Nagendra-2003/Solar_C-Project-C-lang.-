#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int choice;
void main()
{

	clrscr();
	while(1)
	{
	printf("\n click on 1 to see the details of solar pannels");
	printf("\n click on 2 to see more product");
	printf("\n click on 3 to  Company-details");
	printf("\n click on 4 to know Order Mode for products");
	printf("\n click on 5 to exit");
	printf("\n sorry we can not disclose the customer details");
	printf("\n_____________**************______________");
	printf("\n enter choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:

		printf("\n enter 1 for Tata Solar");
		printf("\n enter 2 for Adani Solar");
		printf("\n enter 3 for Waaree Solar");
		printf("\n enter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			clrscr();
			printf("\n 3kw solar pannel price=1,80,000");
			printf("\n 5kw solar pannel price=3,50,000");
			printf("\n '72000' subcidy get back from each price");
			getch();
			clrscr();
			break;
			case 2:
			clrscr();
			printf("\n 3kw solar pannel price=1,70,000");
			printf("\n 5kw solar pannel price=3,40,000");
			printf("\n '72000' subcidy get back from each price");
			getch();
			clrscr();
			break;
			case 3:
			clrscr();
			printf("\n 3kw solar pannel price=1,90,000");
			printf("\n 5kw solar pannel price=3,60,000");
			printf("\n '72000' subcidy get back from each price");
			getch();
			clrscr();
			break;
			default:
			clrscr();
			printf("\n Please enter valid choice");
		}

		clrscr();
		break;
		case 2:
		printf("\n Following solar energy product are in our company");
		printf("\n Water heater");
		printf("\n Solar Tourch");
		printf("\n Solar lights(road lights and home lamp)");
		printf("\n-------------------------------------");
		printf("\n Please visit our company to get more details");
		getch();
		clrscr();
		break;
		case 3:
		printf("\n Full Name-Thar Renewable Enery ");
		printf("\n Establish in-2010,customer trust for 15 years");
		printf("\n Address-Thar Renewable Energy ,Bikaner-Highway,Sikar \n contact no-123456789");
		getch();
		clrscr();
		break;
		case 4:
		printf("\n Order Mode:-Online/Offline(both) \n For Online:-mob-2323454567 / thar_energy@gmail.com \n Offline:-Visit Company (9:00AM to 10:00PM)");
		getch();
		clrscr();
		break;
		case 5:
		exit(1);
		default:
		clrscr();
		printf("\n enter valid choice");
	}
		printf("press any key to go back to the main menu");
	}
	getch();
	}
