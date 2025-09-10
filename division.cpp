#include<iostream>
#include <string>
using namespace std;

const int Division_count = 4;
const string Divisions[Division_count] = {"Northeast", "Southeast", "Northwest", "Southwest"};

double getSales (const string & divisionName);
void findHighest (double sales[], const string divisions[]);

int main () {
	double sales[Division_count];
	
	for (int i = 0; i < Division_count; ++i ){
		sales[i] = getSales(Divisions[i]);
		
		
	}
	findHighest(sales, Divisions);
	return 0;
}

double getSales (const string & divisionName){
	double Sales_Amount;
	
	do{
		cout << "Enter The quarterly sales for the " << divisionName <<" division:$";
		cin >> Sales_Amount;
		
		if(Sales_Amount < 0) {
			cout << "Sales figures cannot be negative. Please re-enter." << endl;
		}
	}
	while (Sales_Amount < 0);
	
	return Sales_Amount;
	
}

void findHighest (double sales[], const string divisionName[]){
	
	double highestSales = sales[0];
	string highestDivision = Divisions[0];
	
	for (int i = 1; i < Division_count; ++i){
		if (sales [i] > highestSales ){
			highestSales = sales[i];
			highestDivision = Divisions[i];
		}
	}
	
	cout <<  "The division with the highest sales is " << highestDivision << " with sales of $" << highestSales << endl;
}