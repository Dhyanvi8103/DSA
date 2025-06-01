//Binary Search Problems
#include<iostream>
#include<vector>
using namespace std;


//find pivot element
int getPivot(vector<int>& arr, int n){

    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<end){
if(arr[mid]>=arr[0]){
    start =mid+1;

    }

    else{
        end = mid;

    }
      mid = start +(end-start)/2;

    }

    // int ans = arr[start];


    // return ans;

    return start;
}



int binarySearch(vector<int>& arr , int s , int key , int e){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        else{
            start= mid + 1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}

//search in rotated sorted array 
int findPosition(vector<int>& arr , int n , int key){
    int pivot = getPivot(arr,n);
    if(key>arr[pivot]&&key<=arr[n-1]){
        //binary Search on 2nd line
        return binarySearch(arr,pivot , key,n-1);
    }
    else{
        //binary search on first line
        return binarySearch(arr,0, key,pivot-1);
    }
}


long long int squareRoot(int n){
    int s =0;
    int e = n;
    long long int mid = s +(e-s)/2;

    long long int ans = -1;

    while(s<=e){
        long long int square = mid*mid;
        if(square==n){
            return mid;
        }

        else if(square<n){
            ans = mid;
           s = mid+1;
            
        }

        else{
            e=mid-1;
        }
        mid = s +(e-s)/2;


    }
    return ans;

}

double morePrecision(int n,int precision,int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i =0; i<precision ;i++){
        factor = factor/10;
        for(double j = ans ; j*j<n ; j+factor){

            ans = j;
        }
    }
    return ans;
}





// int main(){
//     //find pivot element
//     int arr[5] = {8,10,17,1,3};
//     cout<<"Pivot is :"<<getPivot(arr,5)<<endl;
// }

int main() {


    //search in rotated sorted array
    vector<int> arr = {7, 9, 1, 2, 3};
    int key = 2;
    int position = findPosition(arr, arr.size(), key);
    cout << "Element found at index: " << position << endl;
    

    //find pivot element
     vector<int> arr1 = {8,10,17,1,3};
    cout<<"Pivot is :"<<getPivot(arr1,arr1.size())<<endl;

//   int root;
//      root =squareRoot(36);

//     cout<<root<<endl;
    
//     return 0;


    //square root of an element
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int tempSol = squareRoot(n);
    cout<<"Answer is "<<morePrecision(n,3,tempSol)<<endl;
    return 0;

       




}
