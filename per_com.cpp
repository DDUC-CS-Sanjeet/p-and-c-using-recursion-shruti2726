#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	if(n==0 || r==0)
	return 1;
	else
	{
		if(n!=0)
		{
		  return  (1.0*n*permutation(n-1,r-1));
		}
   }
  return 0;
}

int combination(int n, int r)
{
	if(n==0 || r==0)
	return 1;
	else
	{
		if(n!=0)
		{
		  return  (1.0*n*combination(n-1,r-1))/r;
		}
		
	}
  return 0;
}

int main()
{
	int n,r;
	cout<<"enter the vaue of n";
	cin>>n;
	cout<<"enter the value of r";
	cin>>r;
	try
	{
		if(n<0 || r<0)
		{
			throw 10;
		}
		else if(r>n)
		{
			throw 10;
		}
		else
		{
			float per=permutation(n,r);
			cout<<"permutation"<<per;
			float com=combination(n,r);
			cout<<"combination"<<com;
		}
	}
	catch(int x)
	{
		cout<<"cannot be computed";
	}
  return 0;
}
