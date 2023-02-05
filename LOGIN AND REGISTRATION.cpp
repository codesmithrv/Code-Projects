#include<iostream>
#include<fstream>	//for handling files related to input and output
#include<string.h>	//to use the string data type
using namespace std;

void login();
void registration();
void forgot();

int main()
{
	
	int c;
	cout<<"\t\t\t_____________________________________________________________________________________\n\n\n"<<endl;
	cout<<"\t\t\t                           Welcome to the Login page                             \n\n\n"<<endl;
	cout<<"\t\t\t_____________________                 MENU                 ________________________\n\n\n"<<endl;
	cout<<"                                                                                           \n\n"<<endl;
	cout<<"\t| Press 1 to LOGIN 			|"<<endl;
	cout<<"\t| Press 2 to REGISTER 			|"<<endl;
	cout<<"\t| Press 3 if you FORGOT your PASSWORD 	|"<<endl;
	cout<<"\t| Press 4 to EXIT 			|"<<endl;
	cout<<"\n\t\t\t Please enter your choice: ";
	cin>>c;
	cout<<endl;
	
	switch(c)
	{
		case 1:
			login();
			break;
			
		case 2:
			registration();
			break;
			
		case 3:
			forgot();
			break;	
			
		case 4: 
			cout<<"\t\t\t Thank you for using our service \n\n";
			break;
		default:
			system("cls");
			cout<<"\t\t\t Please select forom the given options \n"<<endl;
			main();		
			
	}
	
}

void login()
{
	int count;
	string userId, password, id, pass;
	system("cls");
	cout<<"\t\t\t Please enter the username and passwrod: "<<endl;
	cout<<"\t\t\t Username: ";
	cin>>userId;
	cout<<"\t\t\t Password: ";
	cin>>password;
	
	ifstream input("records.txt");
	
	while(input>>id>>pass)
	{
		if(id==userId && pass==password)
		{
			count=1;
			system("cls");
			
		}
	}
	input.close();
	
	if(count==1)
	{
		cout<<userId<<"\n Your login was successful. \tThsnks for logging in.\n"<<endl;
		main();
	}
	else{
		cout<<"\n Login error.\tPlease check your useranme or password again.\n"<<endl;
		main();
	}
}

void registration()
{
	string ruserId,rpassword,rid,rpass;
	system("cls");
	cout<<"\t\t\t Enter the username: ";
	cin>>ruserId;
	cout<<"\t\t\t Enter the password: ";
	cin>>rpassword;
	
	ofstream f1("records.txt",ios::app);
	f1<<ruserId<<' '<<rpassword<<endl;
	system("cls");
	cout<<"\n\t\t\t Registration successful. \n";
	main();
	
	
}
void forgot()
{
	int option;
	system("cls");
	cout<<"\t\t\t Your forgot your password? No worries. \n";
	cout<<"press 1 to search ID by username "<<endl;
	cout<<"Press 2 to go back to the main menu "<<endl;
	cout<<"\t\t\t Enter your choice: ";
	cin>>option;
	switch(option)
	{
		
		case 1:
		{
			int count=0;
			string suserId,sId,spass;
			cout<<"\t\t\ Enter the username that you last remember: ";
			cin>>suserId;
			
			ifstream f2("records.txt");
			while(f2>>sId>>spass)
			{
				if(sId==suserId)
				{
					count=1;
				}
			}
			f2.close();
			if(count==1)
			{
				cout<<"\n\n Your account is found. \n";
				cout<<"\n\n Your account password is: "<<spass<<endl;;
				main();
			}
			else{
				cout<<"\n\t Sorry, no accounts found. \n";
				main();
				
			}
			break;
		}
		
	}
}
