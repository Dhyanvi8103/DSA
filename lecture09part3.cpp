#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout<< endl <<"Inside the function"<<endl;
    arr[0] = 120;

    //printing the array
    for(int i =0 ; i <3 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"going back to the main function " << endl;

}
//conclusion --> here in the array when  we pass array we pass address of te aray , hence chnage in the function chhnages the whole cycle

//HW--> print sum of all elements in an array




int main(){
    int arr[3] = {1,2, 3};
    update(arr , 3);


    //printing the array
    cout<<"printing array in main function"<<endl;

    for(int i =0; i<3 ; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;



}