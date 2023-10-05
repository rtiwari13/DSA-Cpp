#include <iostream>
#include <climits>
using namespace std;

int getMin(int arr[][3],int rows, int cols){
  int mini = INT_MAX;

  for (int i=0;i<rows;i++){
 
  for(int j = 0; j<cols;j++){
   if(arr[i][j] < mini){
    mini=arr[i][j];
   }


}
  }

  return mini;
}

int main() {
  // 2D Array Linear Search Minimum number
  //declare and initialize 

  int arr[3][3]={
    {1,2,3},
    {4,25,0},
    {7,8,9}
  };
  int rows =3;
  int cols =3;


//outer loop 

for (int i=0;i<3;i++){
 
  for(int j = 0; j<3;j++){
    cout<<arr[i][j]<<" ";
  }

  cout<<endl;
}


cout << getMin(arr,rows,cols);


  return 0;

}