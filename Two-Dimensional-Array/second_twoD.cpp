#include <iostream>
using namespace std;

int main() {
  // 2D Array Print Column  Wise 

  //declare and initialize 

  int arr[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };

//outer loop 
for (int i=0;i<3;i++){
  //for every row we need to print  valuse in each column
  for(int j = 0; j<3;j++){
    cout<<arr[j][i]<<" ";
  }
  cout<<endl;
}
  return 0;

}