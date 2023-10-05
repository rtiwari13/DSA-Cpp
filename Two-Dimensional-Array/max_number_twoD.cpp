#include <iostream>
#include <climits>
using namespace std;

int getMax(int arr[][3],int rows, int cols){
  int maxi = INT_MIN;

  for (int i=0;i<rows;i++){
 
  for(int j = 0; j<cols;j++){
   if(arr[i][j]>maxi){
    maxi=arr[i][j];
   }


}
  }

  return maxi;
}

int main() {
  // 2D Array Linear Search Maximum number
  //declare and initialize 

  int arr[3][3]={
    {1,2,3},
    {4,25,6},
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


cout << getMax(arr,rows,cols);


  return 0;

}