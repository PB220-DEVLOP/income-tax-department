#include<iostream>
using namespace std;
float gettax(float salary)
{
float tax;
if(salary>1 &&salary<=150000)
{
	tax=0;
	}	
	else if(salary>150000&&salary<=300000)
	{
		tax=salary*0.10;
	}
	else if(salary>300000&&salary<=500000)
	{
		tax=salary*0.20;
	}
	else
	{
		tax=salary*0.30;
	
	}
	return tax;
}
main()
{
	float salary,tax;
	cout<<"plz enter your salary"<<endl;
	cin>>salary;
tax=gettax(salary);
cout<<"you have to pay = "<<tax<<"tax";
	
}
