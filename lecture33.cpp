#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){
    //base case
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }

    else{
       bool remainingPart = isSorted( arr+1, size-1);
       return remainingPart;
    }
}

int search(int arr[] , int target, int size){

  //base case
  if(size==0){
    return 0;
  }

  if(target == arr[i]){
    cout<<"Element found  "<<endl;
  }


  




}

int main(){
    int arr[5] = {2,1,6,8,9};
    int size= 5;
    int element = 8;
  bool ans= isSorted(arr,size);
  if(ans){
    cout<<"Arrays i ssorted"<<endl; 
  }
  else {
    cout<<"Array is not sorted"<<endl;
  }

}