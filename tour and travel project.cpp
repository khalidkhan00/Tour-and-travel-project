#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
const int MAX=100;
class source_user{
	private:
		char name[30];
		char sex;
		long int phone_number;
		string source,destination,service;
	public:
		void get_data();
		void display_data();
		void get_choice();
		void display_choice();
		void get_vechile();
		void display_vechile();
};//end of class definition
class room_food
    {
	private:
		int no_days,no_room,avail;
		string room_type,food_qual,source,destination,service,choice1;
		char choiceo,room,cho, t_food;
	public:
		void get_avail();
		void display_avail();
		void get_days();
		void display_days();
		void get_food();
		void display_food();
	};//end of second definition
class pay_bill :private source_user,private room_food
    {
	private:
			float total_amount,tra_charge,room_charge,food_charge,discount,amount,final_amount;
	        string pay_choice,check;
	        long int pin_code;
	public:
		void get_amount();
		void display_amount();
    };//end of third class
void source_user::get_data()
{
	cout<<"enter your name"<<endl;
	cin>>name;
	cout<<"enter phone number"<<endl;
	cin>>phone_number;
	cout<<"enter your gender"<<endl;
	cin>>sex;
}
 void source_user::display_data()
 {
 	cout<<"NAME"<<name<<endl;
 	cout<<"PHONE NUMBER"<<endl;
 	cout<<"GENDER"<<sex<<endl;
 }

void source_user::get_choice()
{
	cout<<"enter your source point and destination"<<endl;
	string source,destination;
	cout<<"your source_point pls"<<endl;
	cin>>source;
	cout<<"your destination_point pls"<<endl;
	cin>>destination;
	if(source=="mumbai" && destination=="kanpur")
	
	    {
		cout<<"we have service in this route"<<endl;
	    }
	    
    else if(source=="jaipur" && destination=="bhopal")
	    {
		cout<<"WE HAVE SERVICE IN THIS ROUTE"<<endl;
	    }
    else
	    {
		cout<<"we do not have in this route"<<endl;
	    }
		
	
	
}
void source_user::display_choice()
{
	cout<<"SOURCE"<<source<<endl;
	cout<<"DESTINATION"<<destination<<endl;
}
void source_user::get_vechile()
{
	cout<<"choose mode of tranfer "<<endl;
	string service,source,destination;
	cout<<"ENTER YOUR SERVICE NAME"<<endl;
	cin>>service;
	if(service=="bus")
	{
		cout<<"ENTER YOUR SOURCE AND DESTINATON AGAIN TO CHECK YOUR BALANCE"<<endl;
		cout<<"CONFIRM YOUR SOURCE POINT"<<endl;
		cin>>source;
		cout<<"ENTER YOUR DESTINATION POINT "<<endl;
		cin>>destination;
		if(source=="mumbai" && destination=="kanpur")
		{
			cout<<"charge=450"<<endl;
		}
		else
		{
			cout<<"SOME MISSPELL YOU HAVE DONE"<<endl;
		}
	}
	else if(service=="train")
	{
		cout<<"ENTER YOUR SOURCE AND DESTINATION AGAIN TO CHECK YOUR BALANCE"<<endl;
		cout<<"CONFIRM YOUR SOURCE POINT"<<endl;
		cin>>source;
		cout<<"CONFIRM YOUR DESTINATION POINT"<<endl;
		cin>>destination;
		if(source=="mumbai" && destination=="kanpur")
		{
			cout<<"300"<<endl;
		}
		else
		{
			cout<<"SOME MISSPELL YOU HAVE DONE"<<endl;
		}
	}
	else if(service=="aeroplane")
	{
		cout<<"ENTER YOUR SOURCE AND DESTINATION AGAIN TO CHECK YOUR BALANCE"<<endl;
		cout<<"CONFIRM YOUR SOURCE POINT"<<endl;
		cin>>source;
		cout<<"CONFIRM YOUR DESTINATION POINT"<<endl;
		cin>>destination;
		if(source=="mumbai" && destination=="kanpur")
		{
			cout<<"3000"<<endl;
		}
		else
		{
			cout<<"SOME MISSPELL YOU HAVE DONE"<<endl;
		}
	}
	else if(service=="bus")
	{
		cout<<"ENTER YOUR SOURCE AND DESTINATION AGAIN TO CHECK YOUR BALANCE"<<endl;
		cout<<"CONFIRM YOUR SOURCE POINT"<<endl;
		cin>>source;
		cout<<"CONFIRM YOUR DESTINATION POINT"<<endl;
		cin>>destination;
		if(source=="jaipur" && destination=="bhopal")
		{
			cout<<"CHARGE=500"<<endl;
		}
		else
		{
			cout<<"SOME MISSPELL YOU HAVE DONE"<<endl;
		}
	}
	else if(service=="train")
	{
		cout<<"ENTER YOUR SOURCE AND DESTINATION AGAIN TO CHECK YOUR BALANCE"<<endl;
		cout<<"CONFIRM YOUR SOURCE POINT"<<endl;
		cin>>source;
		cout<<"CONFIRM YOUR DESTINATION POINT"<<endl;
		cin>>destination;
		if(source=="jaipur" && destination=="bhopal")
		{
			cout<<"250"<<endl;
		}
		else
		{
			cout<<"SOME  MISSPELL YOU HAVE DONE"<<endl;
		}
	}	
	else if(service=="aeroplane")
	{
		cout<<"ENTER YOUR SOURCE AND DESTINATION AGAIN TO CHECK YOUR BALANCE"<<endl;
		cout<<"CONFIRM YOUR SOURCE POINT"<<endl;
		cin>>source;
		cout<<"CONFIRM YOUR DESTINATION POINT"<<endl;
		cin>>destination;
		if(source=="jaipur" && destination=="bhopal")
		{
			cout<<"2500"<<endl;
		}
		else
		{
			cout<<"SOME MISSPELL YOU HAVE DONE"<<endl;
		}
	}
	else
	{
		cout<<"WE DO NOT HAVE MUCH MORE SERIVICE"<<endl;
	}
	
	
}
void source_user::display_vechile()
{
	cout<<"SERVICE->"<<service<<endl;
}
void room_food::get_avail()
{
	string destination,choice1;
	char choiceo;
	int avail;
	cout<<"ONE MORE TIME PLACE ENTER YOUR DESTINATION POINT TO CHECK THE AVAIL"<<endl;
	cin>>destination;
	if(destination=="kanpur")
	{
		cout<<"YOU HAVE CONFIRMED THAT YOUR DESTINATION POINT IS KANPUR"<<endl;
		cout<< "CHOOSE ONLY ONE OUT OF HOTEL AND RESTURANT"<<endl;
		cin>>choice1;
		if(choice1=="hotel")
		{
		    cout<<"WOW YOU HAVE CHOOSE HOTEL .KINDLY CHECK THE AVAIL..ENTER opt"<<endl;
		    cin>>avail;
		    cout<<"ENTER CHOICE OF ROOM BY ENTER choice"<<endl;
		    cin>>choiceo;
		    while(avail!=0)
		    {
		    	
		    	if(avail==1 && choiceo=='A')
		    	{
		    		cout<<"CONGRAT ROOM IS AVAIL"<<endl;
		    		break;
				}
				else if(avail==1 && choiceo=='B')
				{
					cout<<"CONGRA ROOM IS AVAIL"<<endl;
					break;
				}
		    	else if(avail==2 && choiceo=='A')
		    	{
		    		cout<<"CONGRAT ROOM IS AVAIL"<<endl;
		    		break;
				}
				else if(avail==2 && choiceo=='B')
		    	{
		    		cout<<"CONGRAT ROOM IS AVAIL"<<endl;
		    		break;
				}
		    	
			}//end of while ...for hotel resturant
		    
	    }//choice hotel
	    if(choice1=="resturant")
		{
		    cout<<"WOW YOU HAVE CHOOSE RESTURANT .KINDLY CHECK THE AVAIL..ENTER opt"<<endl;
		    cin>>avail;
		    while(avail!=0)
		    {
		    	if(avail==1 && choiceo=='A')
		    	{
		    		cout<<"CONGRAT ROOM IS AVAIL"<<endl;
		    		break;
				}
				else if(avail==1 && choiceo=='B')
				{
					cout<<"CONGRAT ROOM IS AVAIL"<<endl;
					break;
				}
		       else	if(avail==2 && choiceo=='A')
		    	{
		    		cout<<"CONGRAT ROOM IS AVAIL"<<endl;
		    		break;
				}
				else if(avail==2 && choiceo=='B')
		    	{
		    		cout<<"CONGRAT ROOM IS AVAIL"<<endl;
		    		break;
				}
		    	
			}//end of while ...for hotel resturant
		    
	    }//choice hotel
		
		
	}//while condition to check the condition
	if(destination=="bhopal")
	{
		cout<<"YOU HAVE CONFIRMED THAT YOUR DESTINATION POINT IS KANPUR"<<endl;
		cout<< "CHOOSE ONLY ONE OUT OF HOTEL AND RESTURANT"<<endl;
		if(choice1=="hotel")
		{
		    cout<<"WOW YOU HAVE CHOOSE HOTEL .KINDLY CHECK THE AVAIL..ENTER opt"<<endl;
		    cin>>avail;
		    while(avail!=0)
		    {
		    	if(avail==1 && choiceo=='A')
		    	{
		    		cout<<"CONGRAT ROOM IS AVAIL"<<endl;
		    		break;
				}
				else if(avail==1 && choiceo=='B')
				{
					cout<<"CONGRA ROOM IS AVAIL"<<endl;
					break;
				}
		    	else if(avail==2 && choiceo=='A')
		    	{
		    		cout<<"CONGRAT ROOM IS AVAIL"<<endl;
		    		break;
				}
				else if(avail==2 && choiceo=='B')
		    	{
		    		cout<<"CONGRAT ROOM IS AVAIL"<<endl;
		    		break;
				}
		    	
			}//end of while ...for hotel resturant
		    
	    }//choice hotel
	    if(choice1=="resturant")
		{
		    cout<<"WOW YOU HAVE CHOOSE RESTURANT .KINDLY CHECK THE AVAIL..ENTER opt"<<endl;
		    cin>>avail;
		    while(avail!=0)
		    {
		    	if(avail==1 && choiceo=='A')
		    	{
		    		cout<<"CONGRAT ROOM IS AVAIL"<<endl;
		    		
				}
				else if(avail==1 && choiceo=='B')
				{
					cout<<"CONGRA ROOM IS AVAIL"<<endl;
					
				}
		    	else if(avail==2 && choiceo=='A')
		    	{
		    		cout<<"CONGRAT ROOM IS AVAIL"<<endl;
		    		
				}
				else if(avail==2 && choiceo=='B')
		    	{
		    		cout<<"CONGRAT ROOM IS AVAIL"<<endl;
		    		
				}
		    	
			}//end of while ...for hotel resturant
		    
	    }//choice hotel
		
		
	}//while condition to check the condition
}
void room_food ::display_avail()
{
	cout<<"CHOICE1"<<choice1<<endl;
	cout<<"CHOICE2"<<choiceo<<endl;
}
void room_food::get_days()
{
	int no_days;
	char room;
	cout<<"ENTER NO OF DAYS YOU WANT TO STAY"<<endl;
	cin>>no_days;
	cout<<"ENTER NO OF ROOM YOU WANT TO BOOKED"<<endl;
	cin>>no_room;
	cout<<"ENTER TYPE OF ROOM"<<endl;
	cin>>room;
	
		switch(room)
		{
			case 'a' :
			    cout<<"2BHK + AC ROOM"<<endl;
			    cout<<"CHARGE=1900/PER NIGHT"<<endl;
			    break;
			case 'b':
				cout<<"2BHK +NON AC ROOM"<<endl;
				cout<<"CHARGE=1300/PER NIGHT"<<endl;
				break;
			case 'c':
				cout<<"1BHK + AC ROOM"<<endl;
				cout<<"charge=1100/per night"<<endl;
				break;
			case 'd':
				cout<<"1BHK + NON AC ROOM"<<endl;
				cout<<"CHARGE=1000/PER NIGHT"<<endl;
				break;
			case 'e':
				cout<<"3BHK + AC ROOM"<<endl;
				cout<<"CHARGE=800/PER NIGHT"<<endl;
				break;
		}//end of switch k
	
	
}
void room_food::display_days()
{
	cout<<"NUMBER OF DAYS->"<<no_days<<endl;
	cout<<"NUMBER OF ROOM->"<<no_room<<endl;
	cout<<"ROOM TYPE"<<room<<endl;
}
void room_food::get_food()
{
  cout<<"CHOOSE YOUR CHOICE OF FOOD BY ENTER small cho"<<endl;
  char cho;
  string t_food;
  cout<<"ENTER THE TIMING OF YOUR FOOD"<<endl;
  cin>>cho;
  	switch(cho)//enter capital word
  	{
  	  case 'b':
        cout<<"IT SHOW THE MENU FOR BREAKFAST"<<endl;
		cout<<"CHOOSE THE TYPE FOR FOOD"<<endl;
		cin>>t_food;
		if(t_food=="super")
		{
			cout<<"CHARGE=200/PER PERSON"<<endl;
			break;
		}
		else if(t_food=="aswesome")
		{
			cout<<"CHARGE=190/PER PERSON"<<endl;
			break;
		}
		else if(t_food=="good")
		{
			cout<<"CHARGE=180"<<endl;
			break;
		}
		else
		{
			cout<<"SORRY NO MORE SERVICE IS AVAILIABLE"<<endl;
			break;
		}
	  
	   case 'n':
	   	cout<<"IT SHOW THE MENU FOR LUNCH"<<endl;
		cout<<"CHOOSE THE TYPE FOR FOOD"<<endl;
		cin>>t_food;
		if(t_food=="super")
		{
			cout<<"CHARGE=300/PER PERSON"<<endl;
			break;
		}
		else if(t_food=="aswesome")
		{
			cout<<"CHARGE=240/PER PERSON"<<endl;
			break;
		}
		else if(t_food=="good")
		{
			cout<<"CHARGE=200"<<endl;
			break;
		}
		else
		{
			cout<<"SORRY NO MORE SERVICE IS AVAILIABLE"<<endl;
			break;
		}
		case 'd':
			cout<<"IT SHOW THE MENU FOR BREAKFAST"<<endl;
		    cout<<"CHOOSE THE TYPE FOR FOOD"<<endl;
		    cin>>t_food;
		    if(t_food=="super")
		    {
			    cout<<"CHARGE=200/PER PERSON"<<endl;
			    break;
		    }
		    else if(t_food=="aswesome")
		    {
			    cout<<"CHARGE=190/PER PERSON"<<endl;
			    break;
		    }
		    else if(t_food=="good")
		    {
			    cout<<"CHARGE=180"<<endl;
			    break;
		    }
		    else
		    {
			    cout<<"SORRY NO MORE SERVICE IS AVAILIABLE"<<endl;
			    break;
		    }
	   	
		
	}//end of switch for food
  
}
void room_food::display_food()
{
	cout<<"CHOICE FOR QUALITY OF FOOD"<<t_food<<endl;

}
void pay_bill::get_amount()
{
	float total_amount,tra_charge,room_charge,food_charge,discount,amount;
	string pay_choice;
	long int pin_code;
	source_user::get_data();
	source_user::get_choice();
	source_user::get_vechile();
	room_food::get_avail();
	room_food::get_days();
	room_food::get_food();
	cout<<" NOW JUST WAIT FOR YOUR BILL"<<endl;
	cout<<"TRAVEL CHARGING"<<endl;
	cin>>tra_charge;
	cout<<"ROOM CHARGE"<<endl;
	cin>>room_charge;
	cout<<"FOOD CHARGE"<<endl;
	cin>>food_charge;
	cout<<"NOW SELECT MODE OF PAYEMENT"<<endl;
	amount=tra_charge+room_charge+food_charge;
	cout<<"DISCOUNT->"<<endl;
	cin>>discount;
	total_amount=discount*amount;
	final_amount=amount-total_amount;
	cout<<"YOUR BILL AFTER DISCOUNT"<<endl;
	cout<<"FINAL AMOUNT"<<final_amount<<endl;
	cout<<"NOW CHOOSE MODE OF PAYMENT"<<endl;
	cin>>pay_choice;
	if(pay_choice=="online")
	{
		cout<<"YOU HAVE LOTS OF OPTION"<<endl;//check=
		string check;
		long int pin_code;
		cin>>check;
		if(check=="paytm")
		{
			cout<<"ENTER YOUR PINCODE YOU HAVE"<<endl;
			cin>>pin_code;
			if(pin_code==1231)
			{
				cout<<"PAID SUCCESSFULLY"<<endl;
				
			}
			else
			{
				cout<<"UNSUCCESSFULL PLEASE TRY AGAIN AND KINDLY CHECK YOUR PIN CODE"<<endl;
			}
		}
	  else if(check=="googlepay")
		{
			cout<<"ENTER YOUR PIN CODE YOU HAVE"<<endl;
			if(pin_code==2313)
			{
				cout<<"PAID SUCCESSFULLY"<<endl;
				
			}
			else
			{
				cout<<"UNSUCCESSFULL PLEASE TRY AGAIN AND KINDLY CHECK THE OTP CODE"<<endl;
			}
		}
	   else if(check=="phonepay")
		{
			cout<<"ENTER YOUR PIN CODE YOU HAVE"<<endl;
			if(pin_code==2313)
			{
				cout<<"PAID SUCCESSFULLY"<<endl;
				
			}
			else
			{
				cout<<"UNSUCCESSFULL PLEASE TRY AGAIN AND KINDLY CHECK THE OTP CODE"<<endl;
			}
		}
	   else if(check=="amzaonpay")
		{
			cout<<"ENTER YOUR PIN CODE YOU HAVE"<<endl;
			if(pin_code==3423)
			{
				cout<<"PAID SUCCESSFULLY"<<endl;
				
			}
			else
			{
				cout<<"UNSUCCESSFULL PLEASE TRY AGAIN AND KINDLY CHECK THE OTP CODE"<<endl;
			}
		}
	   else if(check=="debitcard")
		{
			cout<<"ENTER YOUR PIN CODE YOU HAVE"<<endl;
			if(pin_code==2313)
			{
				cout<<"PAID SUCCESSFULLY"<<endl;
				
			}
			else
			{
				cout<<"UNSUCCESSFULL PLEASE TRY AGAIN AND KINDLY CHECK THE OTP CODE"<<endl;
			}
		}
		
	}
	else
	{
		cout<<"MASTER PLAN...CASH YOU KNOW"<<endl;
	}
}
void pay_bill::display_amount()
{
	source_user::display_data();
	source_user::display_choice();
	source_user::display_vechile();
	room_food::display_avail();
	room_food::display_days();
	room_food::display_food();
	cout<<"TRAVEL CHARGE"<<tra_charge<<endl;
	cout<<"ROOM CHARGE"<<room_charge<<endl;
	cout<<"FOOD CHARGE"<<food_charge<<endl;
	cout<<"DISCOUNT"<<discount<<endl;
	cout<<"TOTAL AMOUNT"<<total_amount<<endl;
	cout<<"FINAL AMOUNT->"<<final_amount<<endl;
	cout<<"PAY CHOICE"<<pay_choice<<endl;
	cout<<"CHECK THE CHOICE OF SATATMENT"<<check<<endl;
}
int main()
{
	pay_bill obj1[MAX];
	int n;
	cout<<"ENTER n NUMBER OF CUSTOMER \n";
	cin>>n;
	cout<<"ENTER THE FOLLOWING INFORMATION"<<endl;
	for(int i=0;i<=n-1;++i)
	{
		cout<<"RECORD"<<i+1<<endl;
		obj1[i].get_amount();
		cout<<endl;
	}
cout<<endl;
cout<<" DATA FOR n NUMBER OF PERSON \n";
cout<<"---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
cout<<"NAME AGE PHONE_NUMBER SOURCE_POINT DESTINATION_POINT SERVICE SOURCE  DESTINATION CHOICE1 AVAIL CHOICE2 NO_DAYS NO_ROOM ROOM_TYPE CHOICE_FOOD QUALITY_FOOD TRAVEL_CHARGE FOOD_CHARGE ROOM CHARGE AMOUNT DISCOUNT TOTAL_AMOUNT  PAY_CHOICE  CHECK_CHOICE PINCODE \n"<<endl;
cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
	for(int i=0;i<=n-1;++i)
   {
     obj1[i].display_amount();
	 cout<<endl;
   }
   cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
   return 0;
}
 
