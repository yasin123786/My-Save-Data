#include<iostream>
using namespace std;
int main()
{
	int quant;
	int choice;
	int Qrooms=0, Qpasta=0, Qnoodle=0, Qburger=0, Qshake=0, Qchicken=0;
	int Srooms=0, Spasta=0, Snoodle=0, Sburger=0, Sshake=0, Schicken=0;
	int Total_room=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0,Total_chicken=0;
	cout<<"\n\t Quantity of item we have";
	cout<<"\n Rooms avalible:";
	cin>>Qrooms;
	cout<<"\n Quantity of pasta :";
	cin>>Qpasta;
	cout<<"\n Quantity of burger :";
	cin>>Qburger;
	cout<<"\n Quantity of noodles :";
	cin>>Qnoodle;
	cout<<"\n Quantity of shake :";
	cin>>Qshake;
	cout<<"\n Quantity of chicken-roll :";
	cin>>Qchicken;
	
	cout<<"\n\t\t\t Please select from the menu options ";
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Pasta";
	cout<<"\n3) Burger";
	cout<<"\n4) Noodles";
	cout<<"\n5) Shake";
	cout<<"\n6) Chicken-roll";\
	cout<<"\n7) Information regarding sales and collection";
	cout<<"\n8) Exit";
	cout<<"\n\n Please Enter your choice! ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\n\n Enter the number of rooms you want: ";
			cin>>quant;
			if(Qrooms-Srooms >=quant)
			{
				Srooms=Srooms+quant;
				Total_room= Total_room+quant*1200);
				cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
			}
			else
				cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel ";
			    break;
			
		
		case 2:
			cout<<"\n\n Enter Pasta Quantity :";
			cin>>quant;
			if(Qpasta-Spasta >=quant)
			{
				Spasta=Spasta+quant;
				Total_pasta= Total_pasta+quant*250);
				cout<<"\n\n\t\t"<<quant<<" pasta is the order! ";
			}
			else
				cout<<"\n\tOnly"<<Qpasta-Spasta<<"pasta remaining in hotel ";
			    break;
				
		
		case 3:
			cout<<"\n\n Enter burger Quantity: ";
			cin>>quant;
			if(Qburger-Sburger >=quant)
			{
				Sburger=Sburger+quant;
				Total_burger= Total_burger+quant*120);
				cout<<"\n\n\t\t"<<quant<<" burger is the order! ";
			}
			else
				cout<<"\n\tOnly"<<Qrooms-Srooms<<"burger remaining in hotel ";
			    break; 
			    
		
		
		case 4:
			cout<<"\n\n Enter Noodle Quantity: ";
			cin>>quant;
			if(Qnoodle-Snoodle >=quant)
			{
				Snoodle=Snoodle+quant;
				Total_noodle= Total_noodle+quant*140);
				cout<<"\n\n\t\t"<<quant<<" noodle is the order! ";
			}
			else
				cout<<"\n\tOnly"<<Qnoodle-Snoodle<<"Noodle remaining in hotel ";
			    break;
			    
		
		case 5:
			cout<<"\n\n Enter Shakes Quantity: ";
			cin>>quant;
			if(Qshake-Sshake >=quant)
			{
				Sshake=Sshake+quant;
				Total_shake= Total_shake+quant*120);
				cout<<"\n\n\t\t"<<quant<<" shake is the order! ";
			}
			else
				cout<<"\n\tOnly"<<Qshake-Sshake<<"shake remaining in hotel ";
			    break;
			    
			    
		
		case 6:
			cout<<"\n\n Enter Chicken-roll Quantity: ";
			cin>>quant;
			if(Qchicken-Schicken >=quant)
			{
				Schicken=Schicken+quant;
				Total_chicken= Total_chicken+quant*150);
				cout<<"\n\n\t\t"<<quant<<" chicken-roll is the order! ";
			}
			else
				cout<<"\n\tOnly"<<Qchicken-Schicken<<"chicken remaining in hotel ";
			    break;
			    
		    
		case 7:
			cout<<"\n\t\tDetails of sales and collcetion ";
			cout<<"\n\n Number of rooms we had : "<<Qrooms;
	        cout<<"\n\n\ Number of we gave for rent "<<Sroom;
	        cout<<"\n\n\ Remaining rooms : "<<Qrooms-Srooms;
	        cout<<"\n\n\ Total rooms collection for the day : "<<Total_rooms;
	}
	system("pause");
}