#include<iostream>
#include<vector>
using namespace std;

//Sieve of erastothenes
int countPrime(int n){
    int count =0;
    vector<bool> prime(n+1 ,true);

    prime[0]=prime[1]=false;
    for(int i =2 ; i<n ; i++){
        if(prime[i]){
            count++;
            for(int j = 2*i; j<n ; j = j+i){
                prime[j]=0;
            }
        }
    }
    return count;
}

//Euclid algorithm
int gcd(int a, int b){
    if(a==0)
    return b;

    if(b==0)
    return a;

while(a!=b){
    if(a>b){
        a=a-b;
        }
        else{
            b= b-a;
        }
}

return a;


}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = countPrime(n);
    cout << "Number of prime numbers less than " << n << " is: " << result << endl;



    int a,b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;

    int ans = gcd(a,b);
    cout<<"the gcd of "<<a <<" & "<<b<<" is "<<ans<<endl;

    return 0;
}
