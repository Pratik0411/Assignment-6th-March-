#include<iostream>

using namespace std;

class AddAmount
{
	public:
	int amount=50;

	AddAmount()
	{
		amount =50;
	}

	AddAmount(int a)
	{
		amount=amount+a;
	}
	
	void display()
	{
		cout<<"Final amount: "<<amount<<endl;
	}
};

int main()
{
	AddAmount a1;
	int am;
	cout<<"initial amount is 50"<<endl;
	cout<<"Enter amount to be added"<<endl;
	cin>>am;
	AddAmount a2(am);
	a2.display();
	return 0;
}
