#include<iostream>
using namespace std;
//pointers


int main(){
    // int num =5;
    // cout<<num;

    // //address of operator
    // cout<<"Address of num is"<<&num<<endl;  
    // int *ptr = &num;
     


    // cout<<"value is : " << ptr <<endl;
    // cout<<"value is : " <<*ptr <<endl; 
    //   int *pointer =0;
    // cout<<"value of pointer is"<<*pointer<<endl;

    // int *p = 0;
  
    // cout<<"value of p : " << *p <<endl;



    int num = 9;
    int a = num;
    cout<<"a before:"<<num<<endl;

    a++;
    cout<<"a after:"<<num<<endl;
   
    int *pointer = &num;


    cout<<"pointer before :  "<<num<<endl;
     (*pointer)++;
        cout<<"pointer after :  "<<num<<endl;



    //copying a pointer
      int *copy = pointer;    


      cout<<"copy address : "<<copy<< "actual : " <<pointer<<endl;
      cout<<"copy address : "<<*copy<< "actual : " <<*pointer<<endl;


//important concept

int i =3 ;
int *t = &i;
cout<<"before: "<<*t<<endl;
*t = *t +1;
cout<<"after: "<<*t<<endl;

cout<<"before t : "<< t <<endl;
t = t+1;
cout<<"after t : "<< t <<endl;




    return 0;


}