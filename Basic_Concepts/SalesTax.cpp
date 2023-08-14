#include <iostream>

using namespace std;

int main() {
  const double STATE_TAX_RATE = 0.04;
  const double COUNTY_TAX_RATE = 0.02;

  cout << "Enter your sales" << endl;
  double sales;
  cin >> sales;

  double stateTax = STATE_TAX_RATE * sales;
  double countyTax = COUNTY_TAX_RATE * sales;
  double totalTax = stateTax + countyTax;

  cout << "Sales = $" << sales << endl 
       << "State Tax = $" << stateTax << endl
       << "County Tax = $" << countyTax << endl
       << "Total Tax = $" << totalTax << endl;

  return 0;
}

