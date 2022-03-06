#include<iostream>
using namespace std;

class Matrix
{
	public:
	int rows,columns;
	int array[3][3]; 
	Matrix(int r,int c)
	{
		rows=r;
		columns=c;
	}

	int getrows()
	{
		return rows;
	}

	int getcolumn()
	{
		return columns;
	}

	void setelement(int i,int j,int element)
	{
		array[i][j]=element;
	}

	friend Matrix add(Matrix a,Matrix b);
	friend Matrix mul(Matrix a,Matrix b);
};

Matrix add(Matrix a,Matrix b)
{
	Matrix r(a.getrows(),a.getcolumn());
	for(int i=0;i<a.getrows();i++)
	{
		for(int j=0;j<a.getcolumn();j++)
		{
			r.array[i][j]=a.array[i][j]+b.array[i][j];
		}
	}
return r;
}

Matrix mul(Matrix a,Matrix b)
{
	Matrix r2(3,3);
	int i, j, sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
			    sum+=a.array[i][k] * b.array[k][j];
			}
			r2.array[i][j]=sum;
			sum=0;
		}
	}
	return r2;
}

int main()
{
	Matrix a(3,3),b(3,3);
	int r1,r2,c1,c2;
	r1=a.getrows();
	c1=a.getcolumn();
	r2=b.getrows();
	c2=b.getcolumn();
	int e;
	cout<<"enter elements of first array"<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>e;
			a.setelement(i,j,e);
		}
	}
	cout<<"enter elements of second array"<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>e;
			b.setelement(i,j,e);
		}
	}
	Matrix res(3,3);
	res=add(a,b);
	cout<<"Addition:\n";
	for(int i=0;i<a.getrows();i++)
	{
		for(int j=0;j<a.getcolumn();j++)
		{
			cout<<res.array[i][j]<<endl;		
		}
	}
	
	Matrix result(3,3);
	result=mul(a,b);
	cout<<"Multiplication:\n";
	for(int i=0;i<a.getrows();i++)
	{
		for(int j=0;j<a.getcolumn();j++)
		{
			cout<<result.array[i][j]<<endl;		
		}
	}
	return 0;
}
