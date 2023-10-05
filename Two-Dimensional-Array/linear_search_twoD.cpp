#include <iostream>
using namespace std;

void linearSearch2D( int arr[][3],int rows,int cols ,int key ){
  //row wise traversal 
  
 for(int i=0;i<rows;i++){

  int sum=0;

  for(int j=0;j<cols;j++){
    if(arr[i][j]==key)
    cout<<"true"<<endl;

  }
 
 }
 cout<<"false"<<endl;

}
int main() {
  // 2D Array Linear Search

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


linearSearch2D(arr,rows,cols,5);


  return 0;

}