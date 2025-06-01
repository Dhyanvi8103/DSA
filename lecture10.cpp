#include<iostream>                     //Array
using namespace std;           //Practice Problems



void printArray(int arr[], int n){

for(int i =0 ; i<n ; i ++){
    cout<<arr[i]<<" ";
}cout<<endl;
}


int findDuplicate(vector<int> &arr){
    int ans =0;

    // 
    for(int i =0 ; i<arr.size(); i++){
        ans = ans^arr[i]
    }
    for(int i = 1 ;i<arr.size() ; i++ ){
        ans = ans^i;
    }
    return ans;
}

int findunique(int *arr,int size){
    int ans = 0;
    for(int i =0; i<size ; i++){

        ans = ans^arr[i];

    }
    return ans;
}



void swapAlternate( int arr[], int size) {
    for(int i =0 ; i<size ; i+=2){
        if(i+1 < size){
            // swap(arr[i], arr[i+1]);
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

        }

    }

}


int main(){
     
    //swap alternate elements of an array
    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {11,33,9,76,43};
    swapAlternate(even, 8);
    printArray(even , 8);
    swapAlternate(odd, 5);
    printArray(odd , 5);

   

//problem 2


  
   



return 0;
}
