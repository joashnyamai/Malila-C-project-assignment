#include <iostream>

using namespace std;

int main ()

{
	
	float amount, rate, total_charge;
	
	cout<<"enter amount of units consumed:";
	
	cin>>amount;
	
	rate = 100;
	
	total_charge = amount * rate;
	
	cout<< "Amount consumed: " << amount << endl;
	
    cout << "Rate: " << rate << endl;
    
    cout << "Total charges: " << total_charge << endl;

    return 0;
}
	
