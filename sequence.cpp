#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int x=0;
	int k=1;
	cout<<"Enter the value of x : " ;
	cin>>x;
	cout<<"The series is : "<<endl;
	cout<<x<<" ";
	do
	{	
			if (x%2==0)
			{
				x=x/2;
				cout<<x<<" ";
			}
			else
			{
				x=(x*3) + 1;
		    	cout<<x<<" ";
			}
	}
	while (x>1);	
}
