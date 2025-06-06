//Binary search


#include<iostream>
using namespace std;


int binarySearch (int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = start +(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        

        //go to right wala part
        if(key>arr[mid]){
         start= mid+1;
        }
        else{
            end= mid-1;
        }
     
        int mid = start +(end-start)/2;
    }

   return -1; 

}



int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5] ={3,8,11,14,16};
    

    int index = binarySearch(even,6,2);
    cout <<"index of 2 is:"<<index<<endl;

    int indexOdd = binarySearch(odd,5,16);
    cout <<"index of 16 is:"<<indexOdd<<endl;



}