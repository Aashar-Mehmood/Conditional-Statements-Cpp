#include <iostream>
#include <cstdlib>
using namespace std;
void locker_calc(int no_of_students, int no_of_lockers);
int main()
{
	int student, locker;
	char choice;
	top:
	cout<<"Enter the number of students in the school : ";
	cin>>student;
	cout<<endl;
	cout<<"Enter the number of lockers in the school : ";
	cin>>locker;
	cout<<endl;
	locker_calc(student, locker);
	cout<<"Do you want to play the game again ? Enter Y or N : ";
	cin>>choice;
	cout<<endl;
//Checks wheter user wants to play the game again//
	switch (choice){
		    case 'y':
			goto top;
			break;
			
			case 'Y':
			goto top;
			break;
			default:
			exit(0);
	}
	return 0;
}
void locker_calc(int no_of_students, int no_of_lockers)
{
	int a=0, s=2, d=3, f=4, j=5, k=6, l=7;
	bool locker[no_of_lockers]={false}; //false represnts that all lockers are initally closed//
	int opened_no_of_lockers=0;
	for (int i=1; i<=no_of_students; i++)
	{
		if (i==1)
		{	for (a; a<=no_of_lockers; a++)
			{			
			locker[a]=true; //first student opens all the lockers//
			}
			opened_no_of_lockers=no_of_lockers;
		}
		
		else if (i%2==0)
		{
			for (s; s<=no_of_lockers;s+=2)
			{
				locker[s]=false; //multiple of 2 students  closed the lockers//			
            }
	     	    opened_no_of_lockers=no_of_lockers-(locker[s]=false);

		}
		else if (i%3==0)
		{
			for (d; d<=no_of_lockers; d+=3);
			{
				locker[d]=false;	
            }
	    }
     	opened_no_of_lockers=no_of_lockers-(locker[d]);

	}
	cout<<"The number of empty lockers are : "<<opened_no_of_lockers<<endl;
	cout<<endl;
}





