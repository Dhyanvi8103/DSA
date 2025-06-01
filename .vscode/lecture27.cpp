#include<iostream>
using namespace std;

void update( int **p2){

    // p2 =p2 +1;
    //kuch change hoga isse--->N (pass by value)


    //   *p2 =*p2 +1;
    // //kuch change hoga isse

      **p2 =**p2 +1;
    //kuch change hoga isse

}


int main(){
    int i =5;
    int *p =&i;
    int** p2 = &p;

 
   
    //   cout<<"printing i : "<<i<<endl;
    // cout<<"printing i : "<<*p<<endl;
    // cout<<"printing i : "<<**p2<<endl;


    
    // cout<<"printing address of i: "<<&i<<endl;
    // cout<<"printing p : "<<p<<endl;
    //  cout<<"printing address of p : "<<*p2<<endl;


      
    // cout<<"printing address of p : "<<&p<<endl;
    //  cout<<"printing address of p : "<<p2<<endl;






    cout<<"Before : "<<i<<endl;
    cout<<"Before : "<<p<<endl;
    cout<<"Before : "<<p2<<endl;

    update(p2);

    cout<<"After : "<<i<<endl;
    cout<<"After : "<<p<<endl;
    cout<<"After : "<<p2<<endl;
    
    return 0;

}