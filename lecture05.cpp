#include<iostream>
using namespace std;

int main(){
    // int a = 4;
    // int b = 6;

//   cout<<"a&b:"<<(a&b) << endl;
//   cout<<"a|b:"<<(a|b) << endl;
//   cout<<"a^b:" <<(a^b) << endl;
//   cout<<"a~b:" <<(a~b) << endl; 


// int i = 7;
// cout<<"++i:"<<++i<<endl;
// cout<<"i++ :" <<i++<<endl;
// cout<<"i--:"<<i--<<endl;
// cout<<"--i:"<<--i<<endl;


//2,stage1- inside if 0 3  75

// int n ;
// cout<<"Enter the value of n "<<endl;
// cin>> n ;
// cout <<"Printing values from 1 to n"<<endl;
// int i =1 ;
// for( ;  ; ){
//     if(i<=n){
//     cout<<i<<endl;
   
//     }
//     else{
//         break;
//     }
//     i++;

// }


// int sum = 0;


// for(int i =1 ; i<=n ; i++){
//     sum = sum + i;


// }
// cout << sum << endl;

//fibonacci series
// 0,1,1,2,3,5,8,13,21.......
 
// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;

// int a = 0;
// int b = 1;

// for(int i =1 ; i<=n; i++){
//     int fibNext  = a +b;
//     cout<<fibNext<<endl;
//     a =b ;
//     b = fibNext;
// }

// check whether the given number is prime or not

// int n ;
// cout<<"Enter test number" << endl;
// cin>>n;
// bool isPrime = 1;



// for(int i = 2; i<n ; i++){
//     if(n%i==0){
//         // cout<<"It is not prime number"<<endl;
//         isPrime = 0;
//         break;
       
//     }


// }


// if(isPrime==0){
//     cout<<"It is not prime number"<<endl;
// }
// else{
//     cout<<"It is a prime number" << endl;
// }


// for( int i= 1; i<=5 ; i++){
//     cout<<"hi" << endl;
//     cout<<"hlw"<< endl;
//     continue;
//     cout<<"Reply to karde saale"<< endl;   // unreachable after continue keyword


// }


// Leetcode que 1


// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// int digit;
// int sum =0;
// int product =1;
// while(n!=0){
// digit = n % 10;
// n = n/10;
// sum = sum +digit;
// product = product * digit;



// }
// cout<<"sum:"<<sum<<endl;
// cout<<"product"<<product<<endl;
// cout<<"product-sum:"<<product-sum<<endl;



//Leetcode 02
int count = 0;
int n ;
cout<<"Enter binary number here"<<endl;
cin>>n;

//checking last bit
while(n!=0){
if(n&1){
    count++;
}

n>>1;
}
cout<<"count:"<<count;



}