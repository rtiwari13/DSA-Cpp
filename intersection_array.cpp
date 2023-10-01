#include <iostream>
#include<vector>
using namespace std;

int main() {

  // Intersection of two arrays

  vector <int> arr {1,5,6,4,8,9};
  vector <int> brr {2,8,5,4,0,13,15,19};
  vector <int> ans;


  // outer loop for arr vector 
  for(int i=0; i<arr.size();i++){
    int element = arr[i];

 //for every element , run loop on brr 
  for (int j=0;j<brr.size();j++){
  if(element == brr[j]){
    ans.push_back(element);
    }
  }
 }

for (auto value:ans){
cout << value << endl;
}
  
  return 0;
}