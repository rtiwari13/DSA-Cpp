#include <iostream>
using namespace std;

void printRowWiseSum( int arr[][3],int rows,int cols){
  //row wise traversal 
  
 for(int i=0;i<rows;i++){

  int sum=0;

  for(int j=0;j<cols;j++){
    sum = sum + arr[j][i];
  }
  cout<<"sum of col is : "<<sum<<endl;
 }

}
int main() {
  // 2D Array Print Column   Wise  sum

  //declare and initialize 

  int arr[3][3]={
    {1,2,3},
    {4,5,6},
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


printRowWiseSum(arr,rows,cols);


  return 0;

}