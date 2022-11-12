
// simple user profile
//accepts input and displays output

#include<iostream>

using namespace std;

int main()
{
    string firstName,lastName ,fullName ,FavouriteMeal ,FavouriteMovie;

    cout<<"Enter your first name: \n";
    cin >> firstName;
    cout<<"last name: \n";
    cin >> lastName;

    cout<<"full name: \n";
    //solution for compiler skipping getline()
    // Usage of std::ws will extract all the whitespace character and allow getline to run smoothly
    getline(cin >> ws, fullName);

    cout<<"favourite meal: \n";
    cin >> FavouriteMeal;
    cout<<"favourite movie: \n";
    cin >> FavouriteMovie;
    //display results
     
    cout << "hello " << fullName << "\n";
    cout << "your Favourite Meal is " << FavouriteMeal << "\n";
    cout << "your Favourite Movie is "<< FavouriteMovie;
    
    return 0;
}
