#include <iostream> 
#include <string> 
#include <fstream> 
#include <cstdlib> //exit failure
#include <conio.h> //getch
#include <unistd.h> //sleep
using namespace std;
struct account
{
	char name[50],givendate[50],expirydate[50],pno[50],email[50],message[50];
	string address,city,designation,carname,carmake,carnumber,cnic;
	double phone,ndays,cmodel;
}record;
void line()
{
	for(int i=1; i<=45; i++)
	{
		cout<<"*";
	}
	cout<<endl;
}
void login_employee()
{
																	//login data(id and password)
	string passwords= "cars";
	char ch;
	string passwordes="senior";
	string ids="haris";
	string id;
	string ides="rizwan";
	string password;
	cout<<"\n\n\t\t\t\tEnter ID:   ";
	cin>>id;
	cout<<"\t\t\t\tEnter Password: ";
	ch = _getch();
   while(ch != 13){//character 13 is enter
      password.push_back(ch);
      cout << '*';
      ch = _getch();
   }
	
	
	
	
	if (id==ids && password==passwords)
	{
		return;
	}
	else if (id==ides && password==passwordes)
	{
		return;
	}
	else
	{
		cout<<"\n\t\t\t\tIncorrect Password.";
		exit(EXIT_FAILURE);
	}
}
void search()   //search for cars
{
    
	return;
}
void listofcars()
{
																	//list of all cars
	ofstream myFile;
	myFile.open("customerinfo.txt",ios::app);
	int carprice[6];
	carprice[0]=5000;
	carprice[1]=8000;
	carprice[2]=10000;
	carprice[3]=25000;
	carprice[4]=20000;
	carprice[5]=40000;
	carprice[6]=0;
	carprice[7]=0;
	do
    {
    /*cout<< "\n\n\t\t\t\tChoose the car below:"<<endl;*/
    cout<<"\n\t\t\t\tList of Cars:";
			ifstream infile("carrecord.txt");
			string line;   
			int i=0; 
     		infile >> line;	
     		while (!infile.eof( ))     
     		{
				cout<<" \n\t\t\t";
				cout<<"\n\t\t\t\t\t"<<i+1<<". "<<line<<" "; //car make 
				infile >> line; 
				cout<<""<<line<<endl;  //car name
				infile >> line;
				cout<<"\t\t\t\t\t"<<line<<"\n"; //number plate
				infile >> line;
				cout<<"\t\t\t\t\t"<<"Price: "<<carprice[i]<<"\n"; 
				i++;
       		}
			infile.close();
	cout<< "\t\t\t\tEnter 7 to go back to Main Menu"<<endl<<endl;
    cout<< "\n\t\t\t\tOption(1-7): ";  
		cin >>record.cmodel;
		if(record.cmodel == 7)						//return to main
		{
			system("cls");
			return;
		}
		/*
    cout<< "Given date(dd/mm/yyyy): ";  cin.ignore(); cin.getline(record.givendate,50);
    cout<< "Expiry Date(dd/mm/yyyy): ";  cin.ignore(); cin.getline(record.expirydate,50);*/
    cout << "\n\t\t\t\tPlease provide following information: "<<endl;
    cout<< "\t\t\t\tPlease Enter Customer Name: ";  
		cin.ignore(); 
		cin.getline(record.name,50);
		myFile<<"Name: "<<record.name<<"\n";//record customer name in file
	cout<< "\t\t\t\tPlease Enter Customer Valid CNIC: "; 
		cin>>record.cnic;
		myFile<<"CNIC: "<<record.cnic<<"\n";//record customer nic in file
	cout<< "\t\t\t\tPlease Enter Customer Phone No.: ";   
		cin.ignore(); 
		cin.getline(record.pno,50);
		myFile<<"Phone: "<<record.pno<<"\n";//record phone no. in file
    
if(record.cmodel !=1 && record.cmodel !=2 &&  record.cmodel !=3 && record.cmodel !=4 && record.cmodel !=5 && record.cmodel !=6)
      cout<<"\n\n\t\t\t\tInvaild Car Model. Please try again!"<<endl;
        }
while(record.cmodel !=1 && record.cmodel !=2 && record.cmodel !=3 && record.cmodel !=4 && record.cmodel !=5 && record.cmodel !=6);
    float totalprice,tax=555;
    cout<<"\t\t\t\tDate of Renting(dd/mm/yyy): ";
    cin>>record.givendate;
    myFile<<"GivenDate: "<<record.givendate<<"\n";
	cout<<"\t\t\t\tNumber of day(s): ";
    cin >>record.ndays;
    myFile<<"Days: "<<record.ndays<<"\n";
    cout<<endl;
    system("cls");

    if(record.cmodel == 1)
    {
		totalprice=record.ndays*5000+tax;
		myFile<<"Car: "<<record.cmodel<<endl<<"Price: "<<totalprice<<"\n\n";//record car and its price in file
	}
    if(record.cmodel== 2)
    {
		totalprice=record.ndays*8000+tax;
		myFile<<"Car: "<<record.cmodel<<endl<<"Price: "<<totalprice<<"\n\n";//record car and its price in file
	}
	if(record.cmodel == 3)
	{
    	totalprice=record.ndays*10000+tax;
		myFile<<"Car: "<<record.cmodel<<endl<<"Price: "<<totalprice<<"\n\n";//record car and its price in file
	}
    if(record.cmodel == 4)
    {
		totalprice=record.ndays*25000+tax;
		myFile<<"Car: "<<record.cmodel<<endl<<"Price: "<<totalprice<<"\n\n";//record car and its price in file
	}
	if(record.cmodel == 5)
    {
		totalprice=record.ndays*20000+tax;
		myFile<<"Car: "<<record.cmodel<<endl<<"Price: "<<totalprice<<"\n\n";//record car and its price in file
	}
	if(record.cmodel == 6)
    {
		totalprice=record.ndays*40000+tax;
		myFile<<"Car: "<<record.cmodel<<endl<<"Price: "<<totalprice<<"\n\n"; //record car and its price in file
	}
	myFile.close();
	line();line();
    cout<<"\n\n\t\t\tBILL\n";
    cout<<"\t\tCustomer name: "<<record.name;
	cout<<"\n\t\tCnic: "<<record.cnic;
	cout<<"\n\t\tGiven date: "<<record.givendate;
	cout<<"\n\t\tDay(s): "<<record.ndays;
	cout<<"\n\t\tTax:\t"<<300;
	cout<<"\n\t\tTotal Charges: "<<totalprice;
	cout<<"\t\t\nAll dues have to cleared at the time of renting.\n\n";
	line();line();
	system("PAUSE");
	system("cls");
	return;
}
void account()													//account function
{
																	//account data
		login_employee(); 										//login function call
		system("cls");
		cout<<"\n\n\t\t\t\t1. Add Car Record\n\t\t\t\t2. Delete Car Record\n\t\t\t\t3. View Customer Record\n\t\t\t\t4. Delete Customer Record\n\t\t\t\t5. View Messages\n\t\t\t\t6. Back to Main Menu\n Option: ";
		int employee_choice;
		cin>>employee_choice;
		if(employee_choice==1)
		{
																	//add car record
			int cont=1;
			ofstream inFile;
			inFile.open("carrecord.txt",ios::app);					//open file and update record
			cout<<"How many records do you want to enter: ";
			cin>>cont;
			system("cls");
			for(int i=0;i<cont;i++)
			{
			cout<<"\t\t\t\tRecord Number "<<i+1<<endl;
			cout<<"\t\t\t\tEnter Car Make: ";
			cin>>record.carmake;
			inFile<<record.carmake<<" ";
			cout<<"\t\t\t\tEnter Car Name: ";
			cin>>record.carname;
			inFile<<record.carname<<" ";
			cout<<"\t\t\t\tEnter Car Number: ";
			cin>>record.carnumber;
			inFile<<record.carnumber<<"\n\n";
			system("cls");
			}
			inFile.close();
			
		}
		else if(employee_choice==2)
		{
																	//delete car record
			cout<<"\t\t\t\tAre You Sure?\n\t\t\t\tOption:(1=Yes and 2=No) ";
			int choices;
			cin>>choices;
			if (choices==1)
		{
			ofstream outFile;
			cout<<"Deleting Files...";
			sleep(1);
			outFile.open("carrecord.txt",ios::trunc);
			outFile.close();
			system("cls");
			cout<<"Done Deleting.";
			system("pause");
			system("cls");
		}
		else if(choices==2)
		{
				system("cls");
		}
		}
		else if(employee_choice==3)
		{
			cout<<"hello";
			system("cls");
			cout<<"Customer Records: \n\n";
			ifstream INFile("customerinfo.txt");
			string line;
			while(!INFile.eof())
			{
				getline(INFile, line);
				cout<<line<<"\n";
			}
			INFile.close();
			system("pause");
			system("cls");			
		}
		else if(employee_choice==4)
		{
																	//delete customer record
			cout<<"\t\t\t\tAre You Sure?\n\t\t\t\tOption:(1=Yes and 2=No) ";
			int choices;
			cin>>choices;
			if (choices==1)
		{
			ofstream outFile;
			cout<<"Deleting Files...";
			sleep(1);
			outFile.open("customerinfo.txt",ios::trunc);
			outFile.close();
			system("cls");
			cout<<"Done Deleting.";
			system("pause");
			system("cls");
		}
		else if(choices==2)
		{
				system("cls");
		}
			return;
		}
		else if(employee_choice==5)									//output contact info	
		{
			cout<<"\n\t\t\t\tMessages:\n";
			fstream infile("contactinfo.txt");
			string line;
			int i=1;
     		while (!infile.eof( ))     
     		{
				infile >> line;	
				cout<<"\n\t\t\t"<<i<<". \n\t\t\t\t"<<line;
				infile>>line;
				cout<<"\t"<<line;
				infile >> line;	
				cout<<"\n\t\t\t\t"<<line;
				infile>>line;
				cout<<"\t"<<line;
				infile>>line;
				i++;
       		}
			infile.close();
			system("pause");
			system("cls");
		}
		else if(employee_choice==6)														//return to main
		{
			system("cls");
		}
	}
void contact()																			//contact us
{
	ofstream file;
	file.open("contactinfo.txt",ios::app);
	cout<<"\n\n\t\t\t\tPlease Enter Details Below: "<<endl;
	cin.getline(record.name,50);
	cout<<"\n\n\t\t\t\tName: ";
	cin.getline(record.name,50);
	file<<"Name:    "<<record.name<<"\n";
	cout<<"\t\t\t\tEmail: ";
	cin.getline(record.email,50);
	file<<"Email:   "<<record.email<<" ."<<endl;
	file.close();
	cout<<"\n\n\t\t\t\tThank You for reaching out, We will contact you shortly."<<endl;
	system("pause");
	system("cls");
	return;
}

int main()
{
																									//Main Menu
	cout<<"\n\n                           Welcome to RSH Car Rentals"<<endl;
	cout<<"                           **************************"<<endl;
	cout<<"                                 Main Menu \n"<<endl;
	cout<<"\t\t\t\t1. Rent A Car\n\t\t\t\t2. Account\n\t\t\t\t3. Contact Us\nOption: ";
	int menu_choice;
	cin>>menu_choice;
	system("cls");
	if(menu_choice==1)
	{
		listofcars();
		return main();
	}
	else if (menu_choice==2)
	{
		account();
				
		return main();
	}
	else if(menu_choice==3)
	{
		contact();
		return main();
	}
	
	
	return 0;
}

