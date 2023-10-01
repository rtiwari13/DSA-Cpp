#include <iostream>
#include<vector>
using namespace std;

int main() {
  

  // Union of two arrays 

  int arr[] = {1,5,6};
  int sizea = 3;
  int brr[] = {3,9,7,2};
  int sizeb = 4;

  vector <int> ans;

  // push all elements of vector arr 
  for(int i=0;i<sizea; i++){
    ans.push_back(arr[i]);
  }

   // push all elements of vector brr 
  for(int i=0;i<sizeb; i++){
    ans.push_back(brr[i]);
  }
//print ans

for(int i=0; i<ans.size();i++){
  cout<<ans[i]<<endl;
}

  return 0;
}