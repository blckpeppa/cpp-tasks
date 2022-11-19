
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
//program to qualify a customer for a loan

#include<iostream>

using namespace std;

int main()
{
    int age;
    string name;
    cout <<"hi,thank you for your interest in our loan program"<<endl;
    cout<< "what is your name? ";
    cin >> name;
    
    cout << name + " How old are you ?";
    cin >> age;
    
    //check age
    if(age>=22){
        int bankBalance;
        cout << "what is your current bank balance: ";
        cin >> bankBalance;
        
        //check bank balance
        if(bankBalance > 50000){
            string crbStatus;
            cout << "what is your crb status: ";
            cin >> crbStatus;
            
            //check crb status
            if(crbStatus == "good"){
                int customerTime;
                cout<<"okay, how long have you been our customer (in months): ";
                cin>> customerTime;
                
                //check customer time as a client
                if (customerTime > 6){
                    cout <<"congratulations,you qualify for a loan";
                }
                else{
                    cout <<"you are required to have been a customer for more than 6 months to qualify";
                }
            }
            else{
                cout<<"your crb status has not met the requirements";
            }
            
        }
        else{
            cout <<"your bank balance is below the minimum standard";
        }
        
    }
    
    else {
        cout<<name + " sorry you are below the required age";
    }
    
    
    return 0;
}
