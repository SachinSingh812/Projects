#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
fstream file;
class customer
{
	public:
		char cname[20],carname[10],address[50];
		char phno[12];
	    int vno,bill;
		public:
			void getdata();
			void showdata();
			void updatebill(int);
					
};

void customer::getdata()
			{  
				system("cls"); 
			    cout<<"\t\t\t\t\t------ Welcome Customer and Vehicle Info. ------\t\t\t"<<endl;
				fflush(stdin);
				cout<<"Enter Customer Name:"<<endl;
				fflush(stdin);
				gets(cname);
				cout<<"Enter Address Of Customer:"<<endl;
				fflush(stdin);
				gets(address);
				cout<<"Enter Car Name:"<<endl;
				fflush(stdin);
				gets(carname);
				cout<<"Enter Phone Number:"<<endl;
				cin>>phno;
				cout<<"Enter Vehicle Number:"<<endl;
				cin>>vno;
			}
void customer::showdata()
		   {
			    cout<<"Costumer Name:"<<cname<<endl;
				cout<<"Address:"<<address<<endl;
				cout<<"Car name:"<<carname<<endl;
				cout<<"Phone Number:"<<phno<<endl;
				cout<<"Vehicle Number:"<<vno<<endl;
				cout<<"Billing Amount:"<<bill;
	     	}
void customer::updatebill(int x)
{
	bill=0;
	bill+=x;
}
void regular_menu()
{
	customer c;
	c.getdata();
	int paint=0,dent=0,wash=0,chkup=0,replace=0,total=0;
	label:
	system("cls");
	cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t1.Painting";
	cout<<"\n\t\t\t\t\t\t\t\t\t2.Denting";
	cout<<"\n\t\t\t\t\t\t\t\t\t3.Washing";
	cout<<"\n\t\t\t\t\t\t\t\t\t4.Genral checkup";
	cout<<"\n\t\t\t\t\t\t\t\t\t5.Part replacement";
	cout<<"\n\t\t\t\t\t\t\t\t\t6.Bill generate";
	cout<<"\n\t\t\t\t\t\t\t\t\tEnter choice:-\t";
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				system("cls");
			cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t1.Full painting";
			cout<<"\n\t\t\t\t\t\t\t\t\t2.Partial painting";
			cout<<"\n\t\t\t\t\t\t\t\t\t3.Back";
			cout<<"\n\t\t\t\t\t\t\t\t\tEnter choice:-\t";
			int n;
			cin>>n;
			switch(n)
			{
				case 1:
					{
						cout<<"\nFull painting will cost Rs 5000";
						cout<<"\nProcessing your amount ";
						getch();
						paint=5000;	
						goto label;
					}
				case 2:
					{
						cout<<"\nPartial painting will cost Rs 1000";
						cout<<"\nProcessing your amount ";
						getch();
						paint=1000;	
						goto label;
					}
				case 3:
					{
						goto label;
					}
				default:
					cout<<"Wrong choice";
			}
			break;	
			}
		case 2:
			{
			system("cls");
			cout<<"\n\t\t\t\t\t\t\t\t\tDenting";
			cout<<"\n\t\t\t\t\t\t\t\t\t1.Full Denting";
			cout<<"\n\t\t\t\t\t\t\t\t\t2.Partial Denting";
			cout<<"\n\t\t\t\t\t\t\t\t\t3.Back";
			cout<<"\n\t\t\t\t\t\t\t\t\tEnter choice:-\t";
			int n;
			cin>>n;
			switch(n)
			{
				case 1:
					{
						cout<<"\nFull Denting will cost Rs 5000";
						cout<<"\nProcessing your amount ";
						getch();
						dent=5000;	
						goto label;
					}
				case 2:
					{
						cout<<"\nPartial denting will cost Rs 1000";
						cout<<"\nProcessing your amount ";
						getch();
						dent=1000;	
						goto label;
					}
				case 3:
					{
						goto label;
					}
				default:
					cout<<"Wrong choice";
			
			}
			}
		case 3:
			{
			system("cls");
			cout<<"\n\t\t\t\t\t\t\t\t\tWashing";
			cout<<"\n\t\t\t\t\t\t\t\t1.Full Washing";
			cout<<"\n\t\t\t\t\t\t\t\t2.Partial Washing";
			cout<<"\n\t\t\t\t\t\t\t\t3.Back";
			cout<<"\n\t\t\t\t\t\t\t\t\tEnter choice:-\t";
			int n;
			cin>>n;
			switch(n)
			{
				case 1:
					{
						cout<<"\nFull washing will cost Rs 2000";
						cout<<"\nProcessing your amount ";
						getch();
						wash=2000;	
						goto label;
					}
				case 2:
					{
						cout<<"\nPartial washing will cost Rs 1000";
						cout<<"\nProcessing your amount ";
						getch();
						wash=1000;	
						goto label;
					}
				case 3:
					{
						goto label;
					}
				default:
					cout<<"Wrong choice";
			}
			}
		case 4:
			{
			system("cls");
			cout<<"\n\t\t\t\t\t\t\t\tGenral checkup";
			cout<<"\n\t\t\t\t\t\t\t\t1.Full checkup";
			cout<<"\n\t\t\t\t\t\t\t\t2.Engine checkup";
			cout<<"\n\t\t\t\t\t\t\t\t3.Back";
			cout<<"\n\t\t\t\t\t\t\t\t\tEnter choice:-\t";
			int n;
			cin>>n;
			switch(n)
			{
				case 1:
					{
						cout<<"\nFull checkup will cost Rs 5000";
						cout<<"\nProcessing your amount ";
						getch();
						chkup=5000;	
						goto label;
					}
				case 2:
					{
						cout<<"\nEngine checkup will cost Rs 1000";
						cout<<"\nProcessing your amount ";
						getch();
						chkup=1000;	
						goto label;
					}
				case 3:
					{
						goto label;
					}
				default:
					cout<<"Wrong choice";
				
	
			}
			}
		case 5:
			{
			system("cls");
			cout<<"\n\t\t\t\t\t\t\t\t\tPart replacement";
			cout<<"\n\t\t\t\t\t\t\t\t1.Engine part";
			cout<<"\n\t\t\t\t\t\t\t\t2.other part";
			cout<<"\n\t\t\t\t\t\t\t\t3.Back";
			cout<<"\n\t\t\t\t\t\t\t\t\tEnter choice:-\t";
			int n;
			cin>>n;
			switch(n)
			{
				case 1:
					{
						cout<<"\nEngine part replacement will cost Rs 10000";
						cout<<"\nProcessing your amount ";
						getch();
						replace=5000;	
						goto label;
					}
				case 2:
					{
						cout<<"\nother part replacement will cost Rs 5000";
						cout<<"\nProcessing your amount ";
						getch();
						replace=5000;	
						goto label;
					}
				case 3:
					{
						goto label;
					}
				default:
					cout<<"Wrong choice";
			}
			}
		case 6:
				{
						system("cls");
				cout<<"\n\t\t\t\t\t\t\t\t\t\t\tBill generate";
				total=paint+dent+wash+chkup+replace;
					cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t\tYour Bill";
					cout<<"\n\t\t\t\t\t\t\t\t\t1.Painting:- Rs"<<paint;
					cout<<"\n\t\t\t\t\t\t\t\t\t2.Denting:- Rs"<<dent;
					cout<<"\n\t\t\t\t\t\t\t\t\t3.Washing:- Rs"<<wash;
					cout<<"\n\t\t\t\t\t\t\t\t\t4.Genral checkup:- Rs"<<chkup;
					cout<<"\n\t\t\t\t\t\t\t\t\t5.Part replacement:- Rs"<<replace;
					cout<<"\n\t\t\t\t\t\t\t\t\tTotal cost:- Rs"<<total;
					
				break;
				}
			default:
			cout<<"\nWrong choice";
	}
	c.updatebill(total);
	file.open("customer.txt",ios::out|ios::app);
	file.write((char*)&c,sizeof(c));
	file.close();	
}
void menu()
{
	
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t WELCOME TO S K  CARCARE\n\n";
	cout<<"\t\t\t\t\t\t\t1.Service\n";
	cout<<"\t\t\t\t\t\t\t2.Accidental\n";
	cout<<"\t\t\t\t\t\t\t3.Customer Data\n";
	cout<<"\t\t\t\t\t\t\t4.Search Record\n";
	cout<<"\t\t\t\t\t\t\t5.Delete Record\n";
	cout<<"\t\t\t\t\t\t\t6.Update Record";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\tEnter choice:-\t";
	int n;
	cin>>n;
	switch(n)
	{
		case 1:
			{
				system("cls");
				cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t1.New Vehicle\n";
				cout<<"\t\t\t\t\t\t\t\t\t2.Old Vehicle\n";
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
							int age;
							cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter How much old vehicle is:-\t";
							cin>>age;
							if(age>10)
							{
								cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tCannot be repaired";
							}
							else
							regular_menu();
							break;
						}
					default:
						cout<<"\n\t\t\t\tWrong choice";
				}
				break;
			}
		case 2:
			{
				system("cls");
				int dam;
				cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the damage percentage:-\t";
				cin>>dam;
				if(dam>75)
				{
					cout<<"\n\t\t\t\t\t\t\t\tCannot be repaired";
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
					cout<<"\nEnter car no.to be searched:"<<endl;
					cin>>sc;
					while(file.read((char*)&c[i],sizeof(c[i])))
						{
						if(c[i].vno==sc)
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
							cout<<"\nEnter car no.to be deleted:"<<endl;
							cin>>sc;
							ofstream del;
							del.open("deleted.txt",ios::out|ios::binary);
							while(file.read((char*)&c[i],sizeof(c[i])))
							{
								if(c[i].vno!=sc)
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
							cout<<"\nEnter car no.to be updated:"<<endl;
							cin>>sc;
							ofstream up;
							up.open("up.txt",ios::out|ios::binary);
							while(file.read((char*)&c[i],sizeof(c[i])))
							{
								if(c[i].vno!=sc)
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
				cout<<"Wrong choice";
			
	}

}

int main()
{
	menu();
}
