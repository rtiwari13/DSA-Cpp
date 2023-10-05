#include <iostream>
#include<vector>
using namespace std;

int main() {

  // find the triplet that upon addition gives value equal to sum 
  
  vector <int> arr{10,20,30,40};
  int sum = 80;

  for(int i=0;i<arr.size();i++){
    int  elementOne = arr[i]; 

    for(int j=i+1;j<arr.size();j++){
          int elementTwo = arr[j]; 

       for(int k=j+1;k<arr.size();k++){
          int  elementThree = arr[k]; 
            if (elementOne+elementTwo+elementThree == sum){
              cout<<"{"<<elementOne<<","<<elementTwo<<","<<elementThree<<"}"<<endl;
            }
  }
  }
  }
  return 0;
}