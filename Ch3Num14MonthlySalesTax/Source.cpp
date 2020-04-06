/************************************************
** Author: Andrea Hayes
** Date: Febuary 28th, 2020
** Purpose: Figure monthly sales tax for the county and state
** Input: Month, Year, Sales and Sales w/ tax collect at register.
** Processing: Calculate county sales tax, state sales tax and total tax
** Output: Month, Year, Total Sales Colleced, Sales, County Sales Tax, 
            State Sales Tax, Total Sales Tax 
*************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    
    string month;
    int year;
    double totalSalesCollected;

    cout << "Month: ";
    getline(cin, month); // Input for month
    cout << "Year: ";
    cin >> year; // Input for year
    cout << "Total Sales Collected: $";
    cin >> totalSalesCollected; // Input for Total Sales Collected

    double totalSales = totalSalesCollected / 1.06; // Total Sales Collected
    double productSalesCounty = totalSales * 0.02; // County Sales Tax Collected
    double productSalesState = totalSales * 0.04; // State Sales Tax Collected
    double totalTax = productSalesCounty + productSalesState; // Total Tax Collected
   
    cout << "Month Year: " << month <<" " << year << endl;
    cout << "-----------------" << endl;
    cout << left << setw(20) << fixed << setprecision(2) << showpoint << "Total Collected: ";
    cout << right << setw(15) << "$" << totalSalesCollected << endl;
    cout << left << setw(20) << "Sales: ";
    cout << right << setw(15) << "$" << totalSales << endl;
    cout << left << setw(20) << "County Sales Tax: ";
    cout << right << setw(15) << "$" << productSalesCounty << endl;
    cout << left << setw(20) << "State Sales Tax: ";
    cout << right << setw(15)<< "$" << productSalesState << endl;
    cout << left << setw(20) << "Total Sales Tax: ";
    cout << right << setw(15) << "$" << totalTax  << endl;



    return 0;
}