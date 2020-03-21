#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int town_a_pop;
	int town_b_pop;
	int growth_a;
	int growth_b;
	int year=0;
	cout<<"Note : The population of town A should be less than of B ."<<endl;
	cout<<endl;
	cout<<"while growth rate of town A should be greater tha A"<<endl;
	cout<<endl;
    cout<<"Enter the population of town A : ";
	cin>>town_a_pop;
	cout<<endl;
    cout<<"Enter the growth rate of town A : ";
	cin>>growth_a;
	cout<<endl;
	cout<<"Enter the population of town B : ";
	cin>>town_b_pop;
   	cout<<endl;
    cout<<"Enter the growth rate of town B : ";
	cin>>growth_b;
	cout<<endl;
  do 	
    {
		town_a_pop=town_a_pop+(town_a_pop/100)*4;
		town_b_pop=town_b_pop+(town_b_pop/100)*2;
		year+=1;
	}
	while((town_a_pop<town_b_pop));
	cout<<"After "<<year<<" years, the population of town A will be equal to population of town B "<<endl;
}
