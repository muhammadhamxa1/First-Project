#include<iostream>
#include<windows.h>
using namespace std;
int main()
{ 
    int a,b,c,d,f=0,ha=0,ua=0,i=0;
    int w,x,y=0,z,l,m=0;
    int *n,*o;
    n=&ha;
    o=&ua;
    char q,v;
    while(1)
    {
    	system("cls");
    	cout<<"\tMUHAMMAD HAMZA ATM \n";
	system("COLOR B5");
   cout<<"*********\t*********\t*          *\n";
   cout<<"*       *\t    *    \t* *      * *\n";
   cout<<"*       *\t    *    \t*   *  *   *\n";
   cout<<"*       *\t    *    \t*     *    *\n";
   cout<<"*********\t    *    \t*    	   *\n";
   cout<<"*       *\t    *    \t*          *\n";
   cout<<"*       *\t    *    \t*          *\n";
   cout<<"*       *\t    *    \t*          *\n";cout<<"\tTax free"<<endl;
 
   cout<<"Enter your accunt number \nNumber:  ";
   cin>>a;
   cout<<endl;
   cout<<"Enter your password \n pass:";
   cin>>b;
   c=1;
   d=12345;
   w=2;
   x=786;
   if(a==c)
   {
   	if(b==d)
   	{
   		int e=0;
   		while(e!=5)
   		{
   			int h=0,f=0;
   		system("cls");
   		system("COLOR 37");
   		cout<<"\n\n \t\tWelcome To Muhammad Hamza"<<endl;
   		cout<<"Enter (1) transaction \n Enter (2) transfer \n Enter (3) Balance Inquirey\n ENTER (4) Add Balance\n Enter (5) to exit your account \nEnter:";
   		cin>>e;
   		switch(e)
   		{
		   case 1:
		   	{
		   	cout<<"Enter the transation amount::";
   		    cin>>y;
   		    if(ha<300)
   		    {
   		       if(y<300)
			   {cout<<"You can't transation under 300 \n Please Try Again \n \t SORRY \n"<<endl;  }
			   else
			    {cout<<"You can't transation  \n Your account has lowest balance "<<endl;  }
			
   	     	}
		     else
		     { *n=ha-y;
			  cout<<"You sucessfuly transation"<<y<<endl; }  
   		     cin>>q;
   		      break;  } 
		    case 2:
			{ cout<<"Enter the transfer amount:";
			 cin>>f; 
			 if(ha>=f)
			 {  *n=ha-f;
			 cout<<"Your transfer has been sucessfull  "<<f<<endl; 
			 ua=ua+f;}
		     else 
		     { cout<<"You can't transfer monery due to insuificent  balance"<<endl;  }
   		     cin>>q;
			 break;}
		    case 3:
		    {  cout<<"Your total balance is "<<ha<<endl;  
			cin>>q; 
			break; }
			case 4:
			{ cout<<"Enter your Money :";
			  cin>>h;
			  ha=h+ha;
			 cout<<endl;
   		    cin>>q;
   		    	break ;  } 
   		   	default:
			{ cout<<"Please enter the correct number\n"<<endl;
			cin>>q;
			  break;} 
		}
		}
    }
}
   else if(w==a)
   {
   	if(x==b)
   	{   int h=0;
   		while(h!=5)
   		{
   		int k=0,j=0;
   		system("cls");
   		system("COLOR FC");
   		cout<<"\n\n \t Welcome to Muhammad Usman"<<endl;
   		cout<<"Enter (1) transaction \n Enter (2) transfer \n Enter (3) Balance Inquirey\n ENTER (4) Add Balance\n Enter (5) to exit your account \nEnter:";
   		cin>>h;
   		switch(h)
   		{
		   case 1:
		   	{
		   	cout<<"Enter the transation amount::";
   		    cin>>m;
   		    if(ua<300)
   		    {
   		    	if(m<300)
   		    { cout<<"You cant transation under 300 \n Please Try Again \n \t SORRY \n"; }
   		       else
			    {cout<<"You can't transation  \n Your account has lowest balance "<<endl;  } }
		     else
		     { *o=ua-m;
			 cout<<"You sucessfuly transation"<<m<<endl; }
			cout<<endl;
			cin>>q;
		     break;} 
		    case 2:
			{ cout<<"Enter the transfer amount:";
			 cin>>j;
			 if(ua>=j) 
			  {*o=ua-j;
			  cout<<"Your transfer has been sucessfull  "<<j;
			  ha=ha+j; }
		      else 
		     { cout<<"You can't transfer monery due to insuificent  balance";  }
		    cout<<endl;
   		     cin>>q;
			 break;}
		    case 3:
		    {cout<<"Your total balance is "<<ua;
		    cout<<endl;
   		     cin>>q;
		    	break;}
				case 4:
				{	cout<<"Enter your Money :";
					cin>>k;
					ua=k+ua;
					 cout<<endl;
   		            cin>>q;
   		           	break ; } 
			default :
			{cout<<"Please enter the correct number\n"<<endl;
			 cin>>q;
			  break;} 	
	   }
}
   	
	}
	   
   }
   else
   {
   	system("cls");
   	system("COLOR 47");
   	cout<<"\n\n\n\n\n\n\n \t\t\t      Your verification is failed\n";
   	cout<<"\t\t\tYour Account number or Password is invalid\n";
   	cout<<"\t\t\t Press any key to Re login to your account\n\t\t\t              Enter::";
   	cin>>v;
   	continue;
   }
}
}
