#include<iostream>
using namespace std;
//recursion



//factorial of n 

int fact(int n){
    //base conditiom 
    if(n==0){
        return 1;

    }


return n * fact(n-1);

}


//power of 2

int power(int n){
    //base conditiion

    if(n==0){
        return 1;

    }


    //recursive relation

   int smallerProblem = power(n-1);
   int biggerProblem = 2 * smallerProblem;

   return biggerProblem;
}

//print counting from 1 - n
int count(int n){
    //base condition
    if(n==1){
        return 1;

    }

    cout<<n<<endl;
   int ans= count(n-1);
   return ans;

}





int main(){

    int n ;
    cout<<"Enter the value of n"<<endl;

    cin>>n;

int ans = fact(n);
cout<<"factorial of n is : "<<ans<<endl;

int ans2 = power(n);
cout<<"power of 2 is : "<<ans2<<endl;



count(n);

}