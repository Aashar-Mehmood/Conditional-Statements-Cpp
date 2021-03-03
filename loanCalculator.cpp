#include <iostream>
#include <cstdlib>
using namespace std;
void calculate_month(int monthly_payment, float loan_amount, float  percent_intrest );
int main(){
	int payment ;
	float loan, interest;
	char choice;
	top:
	cout<<"Enter the loan amount : ";
	cin>>loan;
	cout<<endl;
	cout<<"Enter the interest per year : ";
	cin>>interest;
	cout<<endl;
	cout<<"Enter the monthly payment : ";
	cin >>payment;
	cout<<endl;
	calculate_month(payment, loan, interest);
	cout<<"Do you want to run the program again ? Enter Y or N : ";
	cin>>choice;
	cout<<endl;
	
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
void calculate_month(int monthly_payment, float loan_amount, float percent_intrest )
{
	int months;
	float intrest_per_month, remaining_amount, first_month_intrest;
	intrest_per_month=(percent_intrest/12)/100;
	
	while(remaining_amount>0){
	if (monthly_payment<intrest_per_month){
	cout <<"The monthly payment is too low and with this payment loan amount could not be prepared !"<<endl;
	}
	first_month_intrest=loan_amount*intrest_per_month;
	remaining_amount=loan_amount-(monthly_payment-first_month_intrest);
	loan_amount=remaining_amount;
	months=months+1;
	}
	cout<<"Total months required to pay loan are : " << months <<endl;
	cout<<endl;
}

