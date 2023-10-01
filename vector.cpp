#include <iostream>
#include<vector>
using namespace std;

int main() {
 // Vector

 // Create a vector

 vector<int> arr;

 cout<< "Default size of Vector is :" <<size(arr) << "  " << arr.size()<<endl ;

 // Checking Capacity of Vector

 cout<<"Capacity of Vector is : " << arr.capacity() <<endl;

 // space occupied by arr Vector

 cout<<sizeof(arr)/sizeof(int)<<endl; //6

 //Insert Elements inside vector

 arr.push_back(7);
 arr.push_back(8);
 arr.push_back(9);
 arr.push_back(10);

cout<<"Printing the Elements of Vector"<<endl;

for(int i=0; i<arr.size();i++){
  cout<<arr[i]<<endl;
}

arr.pop_back();

cout<<"Printing the Elements of Vector after pop function"<<endl;

for(int i=0; i<arr.size();i++){
  cout<<arr[i]<<endl;
}

//Another way to create function 

vector <int> arr2(10,3);
cout <<"Size of 2nd array is = = "<<" " << arr2.size()<<endl;

cout<<"Printing the Elements of 2nd Vector "<<endl;

for(int i=0; i<arr2.size();i++){
  cout<<arr2[i]<<endl; 
}

//Unkown size 

int n;
cout<<"Enter the value of n : "<<endl;
cin>>n;

vector <int> unknown(n,90);

for(int i=0; i<unknown.size();i++){
  cout<<unknown[i]<<endl;
}


//Another Way to create vector 

vector <int> vect {10,20,30,40,50};

cout<<"Another way to create a vector " <<endl;

for(int i=0; i<vect.size();i++){
  cout<<vect[i]<<endl;
}

cout << "Vect is empty or not ? " << vect.empty();

  return 0;
}