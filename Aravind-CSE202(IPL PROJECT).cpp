#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	while(1)
	{
	int b;
	cout<<"\n1.Results of IPL 2018\n2.IPL 2018 Schedule\n3.Team Detials\n4.Most Stumps In IPL\n5.Highest Sixes In IPL\n6.Most runouts In IPL\n7.Exit\n";
	cin>>b;
	if(b!=1&&b!=2&&b!=3&&b!=4&&b!=5&&b!=6&&b!=7)
	cout<<"\nYou have entered an Invalid Input Please Try Again\n ";
	switch(b)
	{
			case 1:
				{
			ifstream out;
			out.open("IPL.txt");
			char ch;
			ch=out.get();
			while(!out.eof())
			{
				cout<<ch;
				ch=out.get();
				
			}
			out.close();
			break;
				}
				case 2:
					{
							ifstream out1;
			out1.open("SCHEDULE.txt");
			char c;
			
				c=out1.get();
			while(!out1.eof())
			{
				cout<<c;
				c=out1.get();
			
			}
			out1.close();
			break;

					}
						case 3:
						{
							int v=0;
							while(v==0)
							{
								cout<<"\n";
							ifstream get;
			get.open("Teams.txt");
			char ch;
			ch=get.get();
			while(!get.eof())
			{
				cout<<ch;
				ch=get.get();
			
			
			}
			get.close();
			cout<<"\n8.Return Home Page\n";
						
						
								int a;
								cin>>a;
								
								if(a!=8&&a!=1&&a!=2&&a!=3&&a!=4&&a!=5&&a!=6&&a!=7)
								cout<<"\nEntered An Invalid Number\n*****Please Try Again******\n"<<endl;
								if(a==10)
								a=5;
								switch(a)
								{
									case 1:
										{	ifstream get;
			get.open("MI.txt");
			char ch;
			ch=get.get();
			while(!get.eof())
			{
				cout<<ch;
				ch=get.get();
			
			
			}
			get.close();	
			break;	}
			
			
			case 2:
				{
					ifstream get;
			get.open("KKR.txt");
			char ch;
			ch=get.get();
			while(!get.eof())
			{
				cout<<ch;
				ch=get.get();
			
			
			}
			get.close();
			break;
				}
				case 3:
					{
						ifstream get;
			get.open("RPS.txt");
			char ch;
			ch=get.get();
			while(!get.eof())
			{
				cout<<ch;
				ch=get.get();
			
			
			}
			get.close();
			break;
					}
					case 4:
						{
							ifstream get;
			get.open("DD.txt");
			char ch;
			ch=get.get();
			while(!get.eof())
			{
				cout<<ch;
				ch=get.get();
			
			
			}
			get.close();
			break;
						}
						case 5:
						{
							ifstream get;
			get.open("KXIP.txt");
			char ch;
			ch=get.get();
			while(!get.eof())
			{
				cout<<ch;
				ch=get.get();
			
			
			}
			get.close();
			break;
						}
						case 6:
						{
							ifstream get;
			get.open("RCB.txt");
			char ch;
			ch=get.get();
			while(!get.eof())
			{
				cout<<ch;
				ch=get.get();
			
			
			}
			get.close();
			break;
						}
						case 7:
						{
							ifstream get;
			get.open("RR.txt");
			char ch;
			ch=get.get();
			while(!get.eof())
			{
				cout<<ch;
				ch=get.get();
			
			
			}
			get.close();
			break;
						}
						case 8:
							{
							v++;
							}
						break;
					}
				}
					break;
				}
				case 4:
						{
			ifstream out;
			out.open("MOST STUMPING IN IPL.txt");
			char ch;
			ch=out.get();
			while(!out.eof())
			{
				cout<<ch;
				ch=out.get();
				
			}
			out.close();
			break;
				}
	case 5:
	{
			ifstream out;
			out.open("HIGHEST SIXES IN IPL.txt");
			char ch;
			ch=out.get();
			while(!out.eof())
			{
				cout<<ch;
				ch=out.get();
				
			}
			out.close();
			break;
				}
	case 6:
	{
			ifstream out;
			out.open("MOST RUN OUTS IN IPL.txt");
			char ch;
			ch=out.get();
			while(!out.eof())
			{
				cout<<ch;
				ch=out.get();
				
			}
			out.close();
			break;
				}
			
		case 7:
			{
				cout<<"-----------------------------------------------------------------"<<endl;
				cout<<"              THANKS FOR THE USE                                  "<<endl;
				cout<<"-------------------------------------------------------------------"<<endl;
				return 0;
			}
        }
    }
return 0;
}
