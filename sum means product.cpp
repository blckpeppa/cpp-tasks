//program to calculate sum,product and mean of an array
#include <iostream>
using namespace std;

int main() {
    int nums[5];
    int sum=0;
    int product= 1;
    //input array
    cout<<"please enter 5 integers: "<< endl;
    for(int i =0; i < 5; i++){
        cin>>nums[i] ;
    }
    
    cout <<"you entered the following numbers: "<<endl;
    //print array
    for (int i = 0; i < 5; ++i) {
        cout << nums[i] << "  ";
        sum = sum+nums[i];
        product = product*nums[i];
        
  }
  //gets the length of an array
  float len = sizeof(nums)/sizeof(nums[0]);
  cout<< "the sum of the array is: " << sum<<endl;
  cout<< "the product of the array is: " << product<<endl;
  cout<< "the mean of the array is: " << sum/len<<endl;



}