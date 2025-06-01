#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;     //Book Allocation Problem
                         //Agressive cows problem




bool isPossible(vector<int> arr, int n , int m , int mid)
    {
int studentCount =1;
int pageSum =0;

for(int i =0 ; i<n ; i++){
    if(pageSum +arr[i]<=mid){
        pageSum +=arr[i];
    }
    else{
        studentCount++;
        if(studentCount >m || arr[i]> mid){
            return false;
        }
        pageSum = arr[i];
    }
    if(studentCount > m) {
        return false;
    }
}
return true;
}


int allocateBooks(vector<int> arr, int n , int m){
    int  s = 0;
    int sum = 0;
    for(int i =0 ; i<n ; i++){
        sum = sum +arr[i];
    }
    int e = sum;
    int ans =-1;
    int mid = s +(e-s)/2;

    while(s<=e){
        if(isPossible(arr,n ,m , mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid +1;
        }
        mid = s +(e-s)/2;
    }
    return ans;

}
 bool isPossibleC(vector<int> &stalls, int k ,int mid , int n){
int cowCount = 1;
int lastPos = stalls[0];
for(int i = 0 ; i <n ; i++){
    if(stalls[i]-lastPos >=mid){
        cowCount++;
        if(cowCount==k){
            return true;
            lastPos = stalls[i];
        }
    }
  
}
return false;
 }


int agressiveCows(vector<int> &stalls , int k){
    sort(stalls.begin() , stalls.end());
    int s =0;
    int n = stalls.size();
    int e = stalls[n-1];
    int ans =-1;
    int mid = s +(e-s)/2;
    while(s<=e){
        if(isPossibleC(stalls , k , mid , n)){
            ans = mid;
            s = mid +1;
        }
        else{
            e = mid -1;

        }
        mid = s + (e-s)/2;

    }
    return ans;


}


int main() {
    vector<int> books = {12, 34, 67, 90};
    int n = books.size();
    int m = 2;

    int result = allocateBooks(books, n, m);
    cout << "Minimum number of pages: " << result << endl;

  



        vector<int> stalls = {1, 2, 8, 4, 9};
    int k = 3;

    int resultC = agressiveCows(stalls, k);
    cout << "Maximum minimum distance: " << resultC << endl;

    return 0;
}