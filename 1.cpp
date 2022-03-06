#include<iostream>

using namespace std;

class Employee
{
	public:
	int salary,work_hours;
	void getinfo(int s,int w)
	{
		salary=s;
		work_hours=w;				
	}

	void addsalary()
	{
		if(salary<500) salary=salary+10;	
	}

	void addwork()
	{
		if(work_hours>6) salary=salary+5;
	}
};

int main()
{
	Employee e;
	int s,wo;
	cout<<"Enter salary and work hours per day"<<endl;
	cin>>s>>wo;
	e.getinfo(s,wo);
	e.addsalary();
	e.addwork();
	cout<<"Final salary is : "<<e.salary<<endl;

	return 0;
}

