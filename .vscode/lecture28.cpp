#include<iostream>
using namespace std;


void update1(int n ){
    n++;

}




void update2(int& n ){
    n++;

}



int getSum(int *arr,int n){
    int sum =0;
    for( int i =0 ; i<n ; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){


    int i =5;

    //reference variable-->j is a reference variable of i

    // int& j =i;
    cout<<"value of i brfore : "<<i <<endl;
 update1(i);
      cout<<"value of i after : "<<i <<endl;
      cout<<endl;
    
        cout<<"value of i brfore : "<<i <<endl;
        update2(i);
        cout<<"value of i brfore : "<<i <<endl;


        //variable size array allocation using heap memory


        int n;
        cout<<" Enter the size of array"<<endl;
        cin>>n;

        int* arr = new int[n];

        //taking inputs in array
        for(int i =0 ; i<n ; i++){
            cin>>arr[i];
        }

        int ans = getSum(arr,n);
        cout<<"answer is : "<<ans<<endl;







}