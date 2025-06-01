#include<iostream>
using namespace std;
//dynamic memory allocation in 2D array 

int main(){
    int n;
    cin>>n;


    //creating a 2D array

    int ** arr = new int*[n];
    for(int i =0 ;i<n ;i++){

        arr[i] = new int [n];
    }



    //taking input
    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }


    //printing output
    for(int i=0 ; i<n ; i++){
        for(int j =0 ; j< n ; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

  //releasing memory

  for(int i=0 ; i< n ; i++){
    delete [] arr[i];
  }

  delete []arr;
  




}