#include<iostream>
#include<climits>
using namespace std;

//getting maximum value for an array
// int getMax(int num[], int n){
//     int max = INT_MIN; 

//     for(int i =0 ; i<n ; i++)
//     {

//         if(num[i]>max){
//             max = num[i];
//         }
// }
// //returning max
//     return max;
// }




//grtting minimum value for an array

// int getMin(int num[], int n){
//     int min = INT_MAX;
//     for(int i =0 ; i<n ; i++)
//     {

//         if(num[i]<min){
//             min = num[i];
//         }
// }
// //returning max
//     return min;


// }



//another way to get maximum  value
 int getMaxi(int num[], int n){
    int maxi = INT_MIN;
    for( int i=0; i<n ; i++){
        maxi = max(maxi , num[i]);
        
    }
    return maxi;
}

//another way to get minimum value
int getMini(int num[], int n){
    int mini = INT_MAX;
    for(int i= 0 ; i<n ; i++){
        mini = min(mini, num[i]);
    }
    return mini;
}



int main(){

    int size;
    cout<<"Enter size of an array"<<endl;
    cin>>size;

    int num[100];

    //taking input in array
    cout<<"Enter the elements of array"<<endl;
    for(int i =0 ; i<size ; i++){
        cin>>num[i];
    }
    // cout<<"maximum value is "<<getMax(num, size)<<endl;
    // cout<<"minimum value is"<<getMin(num, size)<<endl;
    cout<<"maximum value is "<<getMaxi(num, size)<<endl;
    cout<<"minimum value is"<<getMini(num, size)<<endl;


}