#include<iostream>
using namespace std;

void print(int *pointer){
    cout<<*pointer<<endl;
}


int main(){
    // int arr[10] = {2,5,6};
    // int *ptr = &arr[0];
   
    // cout<<"Address of arr  " <<arr<<endl;
    // cout<<"Address of arr  " <<&arr[0]<<endl;
    // cout<<"value of arr  " <<*arr<<endl;
    // cout<<"value of arr +1: " <<*arr +1<<endl;
    // cout<<"value of arr +1 :" <<*(arr +1)<<endl;
    // cout<<"value of arr +1 :" <<*(arr) +1<<endl;
    // cout<<*ptr;
    // cout<<&arr[0];

    // cout<<sizeof(arr)<<endl;
    // // cout<<sizeof(ptr)<<endl;
    // cout<<arr<<endl;
    // cout<<ptr<<endl;



    // cout<<&arr<<endl;
    // cout<<&ptr<<endl;

    // cout<<"arr before " <<arr<<endl;
    // arr= arr +1;
    // cout<<"arr aftre " <<arr<<endl;


    
    // cout<<"ptr before " <<ptr<<endl;
    // ptr = ptr +1;
    
    // cout<<"ptr after " <<ptr<<endl;

    // char ch[6] ="abcde";

    // char *c =&ch[0];

    // cout<<arr<<endl;
    // cout<<ch<<endl;

    // cout<<c<<endl;


    // char temp ='z';

    // char *cptr= &temp;
    
    // cout<<cptr;


    int value = 5 ;

    int *pointer = &value;

    print(pointer);








}