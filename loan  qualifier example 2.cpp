
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
//program to qualify a customer for a loan

#include<iostream>

using namespace std;

int main()
{
    int age ,bankBalance , customerTime;
    string name ,crbStatus;
    cout <<"hi,thank you for your interest in our loan program"<<endl;
    cout<< "what is your name? ";
    cin >> name;
    
    cout << name + " How old are you ?";
    cin >> age;
    
    cout<< "what is your bank balance: ";
    cin>>bankBalance;
    
    cout<<"how is your crbStatus: ";
    cin>>crbStatus;
    
    cout<<"how long have you been a client: ";
    cin>>customerTime;
  
    if(age>22 && bankBalance > 50000 && crbStatus == "good" && customerTime > 6){
      cout << "congratulations "+name+ " you qualify for a loan";
     }  
    else{
      cout << name + " you do not qualify for a loan at this time";
    }

    
    return 0;
}
