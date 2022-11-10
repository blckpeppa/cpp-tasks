// C++ program to compute the profit made for selling a vehicle and display it
//user inputs buying price , selling price


#include <iostream>
using namespace std;

int main()
{
    int buyingPrice, sellingPrice , profit ;
    
    //get inputs
    cout<<"Enter buying price: \n";
    cin >> buyingPrice;
    cout<<"Enter selling price: \n";
    cin>> sellingPrice;
    
    //formula to get profit
    profit = sellingPrice - buyingPrice;   
    //display profit
    cout<<"the profit is: "<<profit<<"\n";

	return 0;
}


