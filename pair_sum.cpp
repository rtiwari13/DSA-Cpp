#include <iostream>
#include<vector>
using namespace std;

int main() {
  // Pair sum 
  vector <int> arr{10,20,40,60,70};

  //print all pairs 
  // outer loop will traverse for each elements 

  for (int i=0;i<arr.size();i++){
    int element = arr[i];

    // for every element (let say present at i=0 ) traverse rest of the elements in increasing index order (i=1 start from here )

    for (int j=i+1;j<arr.size();j++){
      cout <<"{"<<element << "," << arr[j]<<"}"<<endl;
    }

  }

  return 0;
}