#include<iostream>
using namespace std;



void reachHome(int src, int dest){
    cout<<"source : "<<src <<" destination : "<<dest<<endl;


    //base condition
    if(src==dest){
        cout<<"reach home"<<endl;
        return;

    }
       src++;
  reachHome(src,dest);
 
  

}

//fibonacci series
int fib( int n){
    //base condition

    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;

    }

    int ans = fib(n-1) +fib(n-2);
    return ans;

   






}





int main(){
    // int dest = 10;
    // int src =1 ;
    // cout<<endl;
    // reachHome(src, dest);


    int n ;
    cout<<"Enter the n'th term you want"<<endl;

    cin>>n;
   int count = 0;
   int ans = fib(5 n);
      cout<<"n ' the Fibonacci term is : "<< ans <<endl;


}