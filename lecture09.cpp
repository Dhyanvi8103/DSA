//ARRAYS

//Array-->collection of similar type of data types


#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    
    for(int i = 0 ; i<=size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing done"<<endl;
    return;
}



int main(){

//declaration
int number[15];

//accesing
cout<<"Value at 0th index"<<number[14] << endl;//random garbage value
cout<<"Value at 20th index"<<number[20] << endl;//doubt


//initiaizing an array

int second[3] ={5,7,11};

//accessing
cout<<"value:"<<second[0]<<endl;;

int third[15]={3,5};
//printing the array
// for(int i =0 ; i<=14 ; i++){
//     cout<<third[i]<<endl;
// }

printArray(third ,15);


//initializing all locations with 0
// int fourth [5] ={0};
// for(int i =0 ; i<=4 ; i++){
//     cout<<fourth[i]<<endl;
// }


// trying to initialize all locations with 1   // not possible using this
// int fifth [5] ={1};
// for(int i =0 ; i<=3 ; i++){
//     cout<<fifth[i];
// }





cout<<"Everything i running fine"<<endl;
return 0;


}