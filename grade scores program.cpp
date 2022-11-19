//program to check grade of a student

#include<iostream>

using namespace std;

int main(){
    string fullName;
    int score;
    
    cout <<"Enter your full name: ";
    getline(cin,fullName);
    
    cout<<"Enter your score: ";
    cin>>score;
    
    if(score >=70){
        cout<<fullName <<" your score of "<< score <<"  is graded as : A";
    }
    else if(score >=60 && score <=69){
        cout<<score +"  is graded as : B";

    }
    else if(score >=50 && score <=59){
        cout<<score +"  is graded as : C";

    }
    else if(score >=40 && score <=49){
        cout<<score +"  is graded as :D ";

    }
    else if(score < 40){
        cout<<score +"  is graded as : F";

    }
    else{
        cout<<"invalid score";
    }
    
    
    return 0;
}