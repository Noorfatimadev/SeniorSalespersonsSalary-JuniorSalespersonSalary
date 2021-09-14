#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	char status;
	cout<<"enter your sales person status :"<<endl;
	cout<<"if senior enter S || if junior enter endl"<<endl;
	cin>>status;
	if (status=='S'|| status=='s')
	{ cout<< "salary = 400 RS a week"<<endl;
}
else if (status=='J' || status=='j')
{cout<<"salary = 275 RS a week"<<endl;

}
else 
{cout<<"wrong input : You can only enter J/j OR S/s"<<endl;

	}
	 return 0;
	 	
	
}
