#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
fstream file;
class customer
{
	public:
		char cname[50],address[50];
		char phno[50];
	    int age,id,bill;
		public:
			void getdata();
			void showdata();
			void updatebill(int);
						
};

void customer::getdata()
			{  
				system("cls"); 
				file.open("CustomerDetails.txt",ios::app);
			    cout<<"\t\t\t\t\t------ Members Information. ------\t\t\t"<<endl;
			    
				cout<<"\n\nEnter Member Name: ";
				fflush(stdin);
				gets(cname);
				file<<"Name: "<<cname<<endl;
				
				cout<<"\nEnter Address Of Member: ";
				fflush(stdin);
				gets(address);
				file<<"Address: "<<address<<endl;
				
				cout<<"\nEnter age: ";
				fflush(stdin);
				cin>>age;
				file<<"Age: "<<age<<endl;
				
				cout<<"\nEnter Phone Number: ";
				cin>>phno;
				file<<"Phone no.: "<<phno<<endl;
				
				cout<<"\nEnter Member Id: ";
				cin>>id;
				file<<"Unique ID: "<<id<<endl<<endl;
				
				file.close();
			
			}
void customer::showdata()
		   {
			    cout<<"Member Name:"<<cname<<endl;
				cout<<"Address:"<<address<<endl;
				cout<<"Age:"<<age<<endl;
				cout<<"Phone Number:"<<phno<<endl;
				cout<<"Member ID:"<<id<<endl;
				cout<<"Billing Amount:"<<bill;
	     	}
void customer::updatebill(int x)
{
	bill=0;
	bill+=x;
	file.open("CustomerDetails.txt",ios::app);
	file<<"\nBilling Amount: Rs "<<bill<<endl;
	file<<"============================="<<endl;
	file.close();
}
void ExerciseList1(){
						cout << "THESE EXERCISE YOU WILL DO:\n";
						cout << "EXERCISE 1:LYING LEG CURL\n";
						cout << "EXERCISE 2:BACK SQUAT\n";
						cout << "EXERCISE 3:LEG PRESS\n";
						cout << "EXERCISE 4:WALKING DUMBBELL LUNGE\n";
						cout << "EXERCISE 5:STIFF-LEGGED DEADLIFT\n";
						cout << "EXERCISE 6:STIFF-LEGGED DEADLIFT\n";             
						cout<<"\nProcessing your amount  :: Press 'ENTER' to continue.";
}
void ExerciseList2(){
								cout << "THESE EXERCISE YOU WILL DO:\n";
								cout << "EXERCISE 1:LYING LEG CURL\n";
								cout << "EXERCISE 2:BACK SQUAT\n";
								cout << "EXERCISE 3:LEG PRESS\n";
								cout << "EXERCISE 4:WALKING DUMBBELL LUNGE\n";
								cout << "EXERCISE 5:STIFF-LEGGED DEADLIFT\n";
								cout << "EXERCISE 6:STIFF-LEGGED DEADLIFT\n";
								cout << "EXERCISE 7 KNEELING CABLE CRUNCH;  You'll need: Adjustable Cable Machine, Rope Attachment\n";
								cout << "EXERCISE 8:REVERSE CRUNCH; You'll need: No Equipment\n\n";
								cout<<"\nProcessing your amount  :: Press 'ENTER' to continue.";
		
}
void ExerciseList3(){
								cout << "THESE EXERCISE YOU WILL DO:\n";
								cout << "EXERCISE 1:LYING LEG CURL\n";
								cout << "EXERCISE 2:BACK SQUAT\n";
								cout << "EXERCISE 3:LEG PRESS\n";
								cout << "EXERCISE 4:WALKING DUMBBELL LUNGE\n";
								cout << "EXERCISE 5:STIFF-LEGGED DEADLIFT\n";
								cout << "EXERCISE 6:STIFF-LEGGED DEADLIFT\n";
								cout << "EXERCISE 7 KNEELING CABLE CRUNCH;  You'll need: Adjustable Cable Machine, Rope Attachment\n";
								cout << "EXERCISE 8:REVERSE CRUNCH; You'll need: No Equipment\n";
								cout << "EXERCISE 9:STEADY-STATE CARDIO\n";
								cout << "EXERCISE 10:DUMBBELL BENCH PRESS;You'll need: Bench, Dumbbells\n\n";
								cout<<"\nProcessing your amount  :: Press 'ENTER' to continue. ";
		
}
void ExerciseList4(){
								cout << "THESE EXERCISE YOU WILL DO:\n";
								cout << "EXERCISE 1:LYING LEG CURL\n";
								cout << "EXERCISE 2:BACK SQUAT\n";
								cout << "EXERCISE 3:LEG PRESS\n";
								cout << "EXERCISE 4:WALKING DUMBBELL LUNGE\n";
								cout << "EXERCISE 5:STIFF-LEGGED DEADLIFT\n";
								cout << "EXERCISE 6:STIFF-LEGGED DEADLIFT\n";
								cout << "EXERCISE 7 KNEELING CABLE CRUNCH;  You'll need: Adjustable Cable Machine, Rope Attachment\n";
								cout << "EXERCISE 8:REVERSE CRUNCH; You'll need: No Equipment\n";
								cout << "EXERCISE 9:STEADY-STATE CARDIO\n";
								cout << "EXERCISE 10:DUMBBELL BENCH PRESS;You'll need: Bench, Dumbbells\n";
								cout << "EXERCISE 11:INCLINE BARBELL BENCH PRESS;You'll need: Barbell, Bench\n";
								cout << "EXERCISE 12:INCLINE PUSHUP;You'll need: Box\n";
								cout << "EXERCISE 13:STEPUP:You'll need: Box\n\n";
								cout<<"\nProcessing your amount  :: Press 'ENTER' to continue. ";
		
}
void ExerciseList5(){
								cout << "THESE EXERCISE YOU WILL DO:\n";
								cout << "EXERCISE 1:LYING LEG CURL\n";
								cout << "EXERCISE 2:BACK SQUAT\n";
								cout << "EXERCISE 3:LEG PRESS\n";
								cout << "EXERCISE 4:WALKING DUMBBELL LUNGE\n";
								cout << "EXERCISE 5:STIFF-LEGGED DEADLIFT\n";
								cout << "EXERCISE 6:STIFF-LEGGED DEADLIFT\n";
								cout << "EXERCISE 7 KNEELING CABLE CRUNCH;  You'll need: Adjustable Cable Machine, Rope Attachment\n";
								cout << "EXERCISE 8:REVERSE CRUNCH; You'll need: No Equipment\n";
								cout << "EXERCISE 9:STEADY-STATE CARDIO\n";
								cout << "EXERCISE 10:DUMBBELL BENCH PRESS;You'll need: Bench, Dumbbells\n";
								cout << "EXERCISE 11:INCLINE BARBELL BENCH PRESS;You'll need: Barbell, Bench\n";
								cout << "EXERCISE 12:INCLINE PUSHUP;You'll need: Box\n";
								cout << "EXERCISE 13:STEPUP:You'll need: Box\n";
								cout << "EXERCISE 14:DUMBBELL FLYE;You'll need: Bench, Dumbbells\n";
								cout << "EXERCISE 15:CABLE CROSSOVER;You'll need: Adjustable Cable Machine, D-Handle Attachment\n\n";
								cout<<"\nProcessing your amount :: Press 'ENTER' to continue.";
}

//functions for storing data in file

void EL1file(){
						file << "THESE EXERCISE YOU WILL DO:\n";
						file << "EXERCISE 1:LYING LEG CURL\n";
						file << "EXERCISE 2:BACK SQUAT\n";
						file << "EXERCISE 3:LEG PRESS\n";
						file << "EXERCISE 4:WALKING DUMBBELL LUNGE\n";
						file << "EXERCISE 5:STIFF-LEGGED DEADLIFT\n";
						file << "EXERCISE 6:STIFF-LEGGED DEADLIFT\n";             
}
void EL2file(){
								file << "THESE EXERCISE YOU WILL DO:\n";
								file << "EXERCISE 1:LYING LEG CURL\n";
								file << "EXERCISE 2:BACK SQUAT\n";
								file << "EXERCISE 3:LEG PRESS\n";
								file << "EXERCISE 4:WALKING DUMBBELL LUNGE\n";
								file << "EXERCISE 5:STIFF-LEGGED DEADLIFT\n";
								file << "EXERCISE 6:STIFF-LEGGED DEADLIFT\n";
								file << "EXERCISE 7 KNEELING CABLE CRUNCH;  You'll need: Adjustable Cable Machine, Rope Attachment\n";
								file << "EXERCISE 8:REVERSE CRUNCH; You'll need: No Equipment\n\n";
							
		
}
void EL3file(){
								file << "THESE EXERCISE YOU WILL DO:\n";
								file << "EXERCISE 1:LYING LEG CURL\n";
								file << "EXERCISE 2:BACK SQUAT\n";
								file << "EXERCISE 3:LEG PRESS\n";
								file << "EXERCISE 4:WALKING DUMBBELL LUNGE\n";
								file << "EXERCISE 5:STIFF-LEGGED DEADLIFT\n";
								file << "EXERCISE 6:STIFF-LEGGED DEADLIFT\n";
								file << "EXERCISE 7 KNEELING CABLE CRUNCH;  You'll need: Adjustable Cable Machine, Rope Attachment\n";
								file << "EXERCISE 8:REVERSE CRUNCH; You'll need: No Equipment\n";
								file << "EXERCISE 9:STEADY-STATE CARDIO\n";
								file << "EXERCISE 10:DUMBBELL BENCH PRESS;You'll need: Bench, Dumbbells\n\n";
							
		
}
void EL4file(){
								file << "THESE EXERCISE YOU WILL DO:\n";
								file << "EXERCISE 1:LYING LEG CURL\n";
								file << "EXERCISE 2:BACK SQUAT\n";
								file << "EXERCISE 3:LEG PRESS\n";
								file << "EXERCISE 4:WALKING DUMBBELL LUNGE\n";
								file << "EXERCISE 5:STIFF-LEGGED DEADLIFT\n";
								file << "EXERCISE 6:STIFF-LEGGED DEADLIFT\n";
								file << "EXERCISE 7 KNEELING CABLE CRUNCH;  You'll need: Adjustable Cable Machine, Rope Attachment\n";
								file << "EXERCISE 8:REVERSE CRUNCH; You'll need: No Equipment\n";
								file << "EXERCISE 9:STEADY-STATE CARDIO\n";
								file << "EXERCISE 10:DUMBBELL BENCH PRESS;You'll need: Bench, Dumbbells\n";
								file << "EXERCISE 11:INCLINE BARBELL BENCH PRESS;You'll need: Barbell, Bench\n";
								file << "EXERCISE 12:INCLINE PUSHUP;You'll need: Box\n";
								file << "EXERCISE 13:STEPUP:You'll need: Box\n\n";
						
		
}
void EL5file(){
								file << "THESE EXERCISE YOU WILL DO:\n";
								file << "EXERCISE 1:LYING LEG CURL\n";
								file << "EXERCISE 2:BACK SQUAT\n";
								file << "EXERCISE 3:LEG PRESS\n";
								file << "EXERCISE 4:WALKING DUMBBELL LUNGE\n";
								file << "EXERCISE 5:STIFF-LEGGED DEADLIFT\n";
								file << "EXERCISE 6:STIFF-LEGGED DEADLIFT\n";
								file << "EXERCISE 7 KNEELING CABLE CRUNCH;  You'll need: Adjustable Cable Machine, Rope Attachment\n";
								file << "EXERCISE 8:REVERSE CRUNCH; You'll need: No Equipment\n";
								file << "EXERCISE 9:STEADY-STATE CARDIO\n";
								file << "EXERCISE 10:DUMBBELL BENCH PRESS;You'll need: Bench, Dumbbells\n";
								file << "EXERCISE 11:INCLINE BARBELL BENCH PRESS;You'll need: Barbell, Bench\n";
								file << "EXERCISE 12:INCLINE PUSHUP;You'll need: Box\n";
								file << "EXERCISE 13:STEPUP:You'll need: Box\n";
								file << "EXERCISE 14:DUMBBELL FLYE;You'll need: Bench, Dumbbells\n";
								file << "EXERCISE 15:CABLE CROSSOVER;You'll need: Adjustable Cable Machine, D-Handle Attachment\n\n";
						
}


void regular_menu()
{
	customer c;
	c.getdata();
	int onem=0,threem=0,sixm=0,ninem=0,oney=0,total=0;
	label:
	system("cls");
	cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t1. Membershp for 1 month\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t2. Membershp for 3 month\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t3. Membershp for 6 month\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t4. Membershp for 9 month\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t5. Membershp for 1 Year\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t6. Bill generate\n";
	cout<<"\n\t\t\t\t\t\t\t\t\tEnter choice:-\t";
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				system("cls");
			cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t1. Full Time(4 HRS a Day).\n";
			cout<<"\n\t\t\t\t\t\t\t\t\t2. Half Time(2 HRS a Day).\n";
			cout<<"\n\t\t\t\t\t\t\t\t\t3. Back.\n";
			cout<<"\n\t\t\t\t\t\t\t\t\tEnter choice:-\t";
			int n;
			cin>>n;
			switch(n)
			{
				case 1:
					{
						cout<<"\nMembership for 1 Month  will cost Rs 5000.\n\n";
						ExerciseList1();
						file.open("CustomerDetails.txt",ios::app);
						EL1file();
						file.close();
						getch();
						onem=5000;	
						goto label;
					}
				case 2:
					{
						cout<<"\nMembership for 1 Month Rs 2500.\n\n";
						ExerciseList1();
						file.open("CustomerDetails.txt",ios::app);
						EL1file();
						file.close();
						getch();
						onem=2500;	
						goto label;
					}
				case 3:
					{
						goto label;
					}
				default:
					cout<<"Invalid choice.";
			}
			break;	
			}
		case 2:
			{
			system("cls");
			cout<<"\n\t\t\t\t\t\t\t\t\tMembership for 3 Months: \n";
			cout<<"\n\t\t\t\t\t\t\t\t\t1. Full Time(4 HRS a Day)\n";
			cout<<"\n\t\t\t\t\t\t\t\t\t2. Half Time(2 HRS a Day)\n";
			cout<<"\n\t\t\t\t\t\t\t\t\t3. Back\n";
			cout<<"\n\t\t\t\t\t\t\t\t\tEnter choice:-\t";
			int n;
			cin>>n;
			switch(n)
			{
				case 1:
					{
						cout<<"\nMembership for 3 Months will cost Rs 7000.\n\n";
						ExerciseList2();
						file.open("CustomerDetails.txt",ios::app);
						EL2file();
						file.close();
						getch();
						threem=7000;	
						goto label;
					}
				case 2:
					{
						cout<<"\nMembership for 3 Months  will cost Rs 3500.\n\n";
						ExerciseList2();
						file.open("CustomerDetails.txt",ios::app);
						EL2file();
						file.close();
						getch();
						threem=3500;	
						goto label;
					}
				case 3:
					{
						goto label;
					}
				default:
					cout<<"Invalid choice.";
			
			}
			}
		case 3:
			{
			system("cls");
			cout<<"\n\t\t\t\t\t\t\t\t\tMembership for 6 Months:\n";
			cout<<"\n\t\t\t\t\t\t\t\t1. Full Time(4 HRS a Day).\n";
			cout<<"\n\t\t\t\t\t\t\t\t2. Hlf Time(2 HRS a Day).\n";
			cout<<"\n\t\t\t\t\t\t\t\t3. Back.\n";
			cout<<"\n\t\t\t\t\t\t\t\t\tEnter choice:-\t";
			int n;
			cin>>n;
			switch(n)
			{
				case 1:
					{
						cout<<"\nMembership for 6 Months  will cost Rs 9000.\n\n";
						ExerciseList3();
						file.open("CustomerDetails.txt",ios::app);
						EL3file();
						file.close();
						getch();
						sixm=9000;	
						goto label;
					}
				case 2:
					{
						cout<<"\nMembership for 6 Months will cost Rs 4500.\n\n";
						ExerciseList3();
						file.open("CustomerDetails.txt",ios::app);
						EL3file();
						file.close();
						getch();
						sixm=4500;	
						goto label;
					}
				case 3:
					{
						goto label;
					}
				default:
					cout<<"Invalid choice.";
			}
			}
		case 4:
			{
			system("cls");
			cout<<"\n\t\t\t\t\t\t\t\tMembership for 9 Months:\n";
			cout<<"\n\t\t\t\t\t\t\t\t1. Full Time(4 HRS a Day).\n";
			cout<<"\n\t\t\t\t\t\t\t\t2. Half Time(2 HRS a Day).\n";
			cout<<"\n\t\t\t\t\t\t\t\t3. Back.\n";
			cout<<"\n\t\t\t\t\t\t\t\t\tEnter choice:-\t";
			int n;
			cin>>n;
			switch(n)
			{
				case 1:
					{
						cout<<"\nMembership for 9 Months cost Rs 11000.\n\n";
						ExerciseList4();
						file.open("CustomerDetails.txt",ios::app);
						EL4file();
						file.close();
						getch();
						ninem=11000;	
						goto label;
					}
				case 2:
					{
						cout<<"\nMembership for 9 Months cost Rs 5500.\n\n";
						ExerciseList4();
						file.open("CustomerDetails.txt",ios::app);
						EL4file();
						file.close();
						getch();
						ninem=5500;	
						goto label;
					}
				case 3:
					{
						goto label;
					}
				default:
					cout<<"Invalid choice";
				
	
			}
			}
		case 5:
			{
			system("cls");
			cout<<"\n\t\t\t\t\t\t\t\t\tMembership for 1 Year:\n";
			cout<<"\n\t\t\t\t\t\t\t\t1. Full Time(4 HRS a Day).\n";
			cout<<"\n\t\t\t\t\t\t\t\t2. Half Time(2 HRS a Day).\n";
			cout<<"\n\t\t\t\t\t\t\t\t3. Back\n";
			cout<<"\n\t\t\t\t\t\t\t\t\tEnter choice:-\t";
			int n;
			cin>>n;
			switch(n)
			{
				case 1:
					{
						cout<<"\nMembership for 1 year will cost Rs 12000.\n\n";
						ExerciseList5();
						file.open("CustomerDetails.txt",ios::app);
						EL5file();
						file.close();
						getch();
						oney=12000;	
						goto label;
					}
				case 2:
					{
						cout<<"\nMembership for 1 year will cost Rs 6000.\n\n";
						ExerciseList5();
						file.open("CustomerDetails.txt",ios::app);
						EL5file();
						file.close();
						getch();
						oney=6000;	
						goto label;
					}
				case 3:
					{
						goto label;
					}
				default:
					cout<<"Invalid choice.";
			}
			}
		case 6:
				{
						system("cls");
				cout<<"\n\t\t\t\t\t\t\t\t\t\t\tBill generate";
				total=onem+threem+sixm+ninem+oney;
					cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t\tYour Bill";
					cout<<"\n\t\t\t\t\t\t\t\t\t1. Membership for 1 Month:- Rs "<<onem<<endl;
					cout<<"\n\t\t\t\t\t\t\t\t\t2. Membership for 3 Months:- Rs "<<threem<<endl;
					cout<<"\n\t\t\t\t\t\t\t\t\t3. Membership for 6 Months:- Rs "<<sixm<<endl;
					cout<<"\n\t\t\t\t\t\t\t\t\t4. Membership for 9 Months:- Rs "<<ninem<<endl;
					cout<<"\n\t\t\t\t\t\t\t\t\t5. Membership for 1 Year is:- Rs "<<oney<<endl;
					cout<<"\n\t\t\t\t\t\t\t\t\tTotal cost:- Rs "<<total;
				
					
				break;
				}
			default:
			cout<<"\nInvalid choice";
	}
	c.updatebill(total);
	file.open("customer.txt",ios::out|ios::app);
	file.write((char*)&c,sizeof(c));
	file.close();
}
void menu()
{

	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t WELCOME TO SUGAM HEALTH CLUB\n\n";
	cout<<"\t\t\t\t\t\t\t1. Get Membership.\n\n";
	cout<<"\t\t\t\t\t\t\t2. Help_Line.\n\n";
	cout<<"\t\t\t\t\t\t\t3. Member Data.\n\n";
	cout<<"\t\t\t\t\t\t\t4. Search Member Record.\n\n";
	cout<<"\t\t\t\t\t\t\t5. Delete Member Record.\n\n";
	cout<<"\t\t\t\t\t\t\t6. Update Member Record.\n\n";
	cout<<"\n\t\t\t\t\t\t\tEnter choice:-\t";
	int n;
	cin>>n;
	switch(n)
	{
		case 1:
			{
				system("cls");
				cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t1. New Membership.\n\n";
				cout<<"\t\t\t\t\t\t\t\t\t2. Renew Membership.\n\n";
				cout<<"\t\t\t\t\t\t\t\t\tEnter choice:-\t";
				int ch;
				cin>>ch;
				switch(ch)
				{
					case 1:
						{
							regular_menu();
							break;
						}
					case 2:
						{
							int timeofMembership;
							cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter How much old Membership is?:-\t";
							cin>>timeofMembership;
							if(timeofMembership<2)
							{
								cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tIneleigible for Renewal:";
							}
							else
							regular_menu();
							break;
						}
					default:
						cout<<"\n\t\t\t\tInvalid choice.";
				}
				break;
			}
		case 2:
			{
				system("cls");
				int yearsofm;
				cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tWhat time ago Membership expired (in Years)?:-\t";
				cin>>yearsofm;
				if(yearsofm>3)
				{
					cout<<"\n\t\t\t\t\t\t\t\tCannot Renew! Contact Customer Care.\n\t\t\t\t\t\t\t\tTelephone.no - +(91) 123456789";
				}
				else
				{
					regular_menu();
				}
				break;
			}
		case 3:
			{
				system("cls");
				file.open("customer.txt",ios::in);
				customer c[20];
				int i=0;
				while(file.read((char*)&c[i],sizeof(c[i])))
				{
					cout<<endl;
					c[i].showdata();
					i++;
					cout<<endl;
				}
				file.close();
				break;
				
			}
			case 4:
				{
				system("cls");
					ifstream file;
					int i=0;
					customer c[20];
					file.open("customer.txt",ios::in);
					if(!file)
					{
					cout<<"\nFile not found";
					}
					else
					{
					int sc;
					cout<<"\nEnter Id of Member to be searched:"<<endl;
					cin>>sc;
					while(file.read((char*)&c[i],sizeof(c[i])))
						{
						if(c[i].id==sc)
							{
								c[i].showdata();
							}
							i++;
						}
					file.close();
					}
					break;
				}
				case 5:
					{
						system("cls");
						ifstream file;
						int i=0;
						customer c[20];
						file.open("customer.txt",ios::in);
						if(!file)
						{
							cout<<"\nFile not found";
						}
						else
						{
							int sc;
							cout<<"\nEnter ID of Member to be deleted:"<<endl;
							cin>>sc;
							ofstream del;
							del.open("deleted.txt",ios::out|ios::binary);
							while(file.read((char*)&c[i],sizeof(c[i])))
							{
								if(c[i].id!=sc)
								{
									del.write((char*)&c[i],sizeof(c[i]));
								}
							i++;
						}
					file.close();
					del.close();
					remove("customer.txt");
					rename("deleted.txt","customer.txt");
					}
					break;

				}
				case 6:
					{
						system("cls");
						ifstream file;
						int i=0;
						customer c[20];
						customer u;
						file.open("customer.txt",ios::in);
						if(!file)
						{
							cout<<"\nFile not found";
						}
						else
						{
							int sc;
							cout<<"\nEnter ID of Member to be updated:"<<endl;
							cin>>sc;
							ofstream up;
							up.open("up.txt",ios::out|ios::binary);
							while(file.read((char*)&c[i],sizeof(c[i])))
							{
								if(c[i].id!=sc)
								{
									up.write((char*)&c[i],sizeof(c[i]));
								}
								else
								{
									u.getdata();
									up.write((char*)&u,sizeof(u));
								}
							    i++;
							}
							file.close();
							up.close();
							remove("customer.txt");
							rename("up.txt","customer.txt");
						}
					
					break;
					}
				default:
				cout<<"Invalid choice";
			
	}

}

int main()
{
	
	menu();
}

