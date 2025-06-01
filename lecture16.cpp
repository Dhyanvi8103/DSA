#include<iostream>
#include<vector>
using namespace std;  //Selection Sort

void selectionSort(vector<int>& arr , int n){
    for(int i =0 ; i < n-1 ; i++){
 int minIndex = i;
 int j;
 for(j = i+1; j<n ; j++){
    if(arr [j] < arr[minIndex]){
        minIndex =j ;
    }
 }
 swap(arr[minIndex], arr[i]);

    }

}



int main(){
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();
    cout<<n;

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}