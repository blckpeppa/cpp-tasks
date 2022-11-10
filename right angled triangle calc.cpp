// C++ program to compute area and perimeter of a right angled triangle
//inputs: base = 10 , height = 7 , hypotenuse = 12

#include <iostream>
using namespace std;


int main()
{
    int base, height , hypotenuse , perimeter,area;
    base = 10;
    height = 7;
    hypotenuse = 12;
    //formula perimeter
    perimeter = (base + height + hypotenuse);
    //formula area
    area = (0.5*base*height);
    
    // cout<< "Enter any two integers\n";
    cout<<"the perimeter is: "<<perimeter<<"\n";
    cout<<"the area is: "<<area<<"\n";
	return 0;
}


