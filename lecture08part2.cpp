#include<iostream>
using namespace std;




//create a function to get power of a number
// int power( ){
//     int a,b ;
//     cout<<"Enter the value of a" <<endl;

//     cin>>a;

//     cout<<"Enter the vaue of b"<<endl;

//     cin>>b;

//     int ans = 1;

//     for(int i =1 ; i<=b ; i++){
//         ans=ans*a;
//     }
//     return ans;
// }



//create a function to check whether the given number is even or odd
// 1-->Even
// 2-->Odd
// bool isEven(int n){
//     //odd
//     if(n&1){
//         return 0;
//     }
//     return 1;
// }


//create a function to calculate nCr
// nCr = n!/r!(n-r!)

//  int factorial(int n){
//     int fact = 1;
//     for(int i = 1; i<=n ; i++){
//         fact=fact* i;
//     }
//     return fact;

// }


// int nCr (int n , int r){
    
//     int num = factorial(n);
//     int den = factorial(r)*factorial(n-r);
//     int answer = num/den;
    
//     return  answer;


// }




//create a function to print counting from 1 to n
//Function signature
// void counting( int n){
    
// //function body
// for(int i =1 ; i<=n ; i++){
//     cout<<i<<endl;
// }

// }


//check whether the given number is prime or not
//1-->prime
//0-->not prime

bool isPrime ( int n){

    for(int i = 2 ; i<n ; i++ ){
        if(n%i==0){
            return 0;
        }
      
    }
    
        return 1;
    

}


int main(){
    

    // int answer = power();
    // cout<<"answer is "<<answer<<endl;

    // int answer1 = power();
    // cout<<"answer is "<<answer1<<endl;

    // int answer2 = power();
    // cout<<"answer is "<<answer2<<endl;


    // return 0;
    
//     int num;
//     cin>>num;
//     if(isEven(num)){
//         cout<<"Number  is Even"<<endl;

//     }
//     else{
//         cout<<"Number is odd" << endl;
//     }
// return 0;



// int n, r; 
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// cout<<"Enter the value of r"<<endl;
//     cin>>r;
// int  answer = nCr(n,r);
// cout<<"answer"<<answer<<endl;
// return 0;



// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// //function call
//  counting(n);

int n ;
cout<<"enter the vallue  to check prime or not"<< endl;
cin>>n;
if (isPrime(n)){
    cout<<"It is prime number"<<endl;
}
else{
    cout<<"It is not a prime number"<<endl;
}


}