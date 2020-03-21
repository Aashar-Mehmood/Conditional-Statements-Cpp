#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	char ch;
	int choice;
	int manager_salary,hourly_wage, no_of_hrs, gross_Sales, items, pay_per_item;
	float manager_pay, hr_worker_pay, comm_worker_pay, piece_worker_pay;
	top:
	cout<<"For which category of worker you want to calculate weekly pay ? "<<endl;
	cout<<endl;
	label:
	cout<<"Enter 1 for manager, 2 for hourly worker, 3 for commission workers or 4 for pieceworkers : ";
	cin>>choice;
	cout<<endl;
	switch(choice){
		case 1:
			cout<<"Enter the manager salary : ";
			cin>>manager_salary;
			manager_pay=manager_salary;
			cout<<endl;
			cout<<"The weekly pay of manager is :";
			cout<<manager_pay;
			cout<<endl;
			break;
		case 2:
			cout<<"Enter the hourly wage of hourly workers : ";
			cin>>hourly_wage;
			cout<<endl;
			cout<<"Enter the number of hours that the employee worked in a week: ";
			cin>>no_of_hrs;
			cout<<endl;
			if(no_of_hrs<=40)
			{
			hr_worker_pay=no_of_hrs*hourly_wage;
			}
			else if (no_of_hrs>40)
			{
			hr_worker_pay=no_of_hrs*1.5*hourly_wage;
			}
	        cout<<"The weekly pay of hourly worker is :";
			cout<<hr_worker_pay;
			cout<<endl;
			break;	
		case 3:
			cout<<"Enter the gross weekly sales of commission worker : ";
			cin>>gross_Sales;
			cout<<endl;
			comm_worker_pay=250+(gross_Sales/100)*5.7;
		    cout<<"The weekly pay of commission worker is :";
			cout<<comm_worker_pay;
			cout<<endl;
			break;
		case 4:
		    cout<<"Enter the numbers of items produced by piece worker in the week  : ";
			cin>>items;
			cout<<endl;	
		    cout<<"Enter the pay per item : ";
			cin>>pay_per_item;		
			cout<<endl;
			piece_worker_pay=items*pay_per_item;
		    cout<<"The weekly pay of piece worker is : ";
		    cout<<piece_worker_pay;
		    cout<<endl;
		    break;
		default:
		    cout<<"Incorrect choice !!! Enter Numbers between 1 - 4."<<endl; 
			cout<<endl;
			goto label;   
	}
	cout<<endl;
	cout<<"Would you like to calculate the salary of another employee ? (Enter Y or N) : ";
	cin>>ch;
	cout<<endl;
	switch (ch){
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
