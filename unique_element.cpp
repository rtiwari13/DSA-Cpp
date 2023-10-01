#include <iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> vect){
  int ans =0;
  for(int i=0; i<vect.size(); i++){
    ans = ans ^ vect[i];
  }

  return ans;
}


int main() {
  

  // Find the Unique Element in an array 

  int n;
  cout << "Enter the size of array " << endl;
  cin >>n;
  vector <int> vect(n);
  cout<<"Enter the elements of array"<<endl;

  //taking input 

  for(int i=0;i<vect.size();i++){
    cin>>vect[i];
  }

int uniqueElement = findUnique(vect);
cout<<"Unique Element is "<<uniqueElement<<endl;

  return 0;

}