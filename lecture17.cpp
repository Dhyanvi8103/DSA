#include<iostream>
#include<vector>
using namespace std;    //Bubble sort algorithm

void bubbleSort(vector<int>& arr , int n){
    for(int i = 1; i<n ; i++){
        //for round 1 to n-1

        bool swapped = false;
        for(int j =0; j <n-i ; j++){

            //process element till n-i th index
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;

            }

        }
        if(swapped == false){
            //already sorted
            break;

        }

    }
}


int main(){
        vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();

    cout << "Original array: ";
    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    


}