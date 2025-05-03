// switch case and functions

#include<iostream>
using namespace std;


int countSet_Bits( int n){
    int count = 0;
    while (n>0){
        if(n&1){
            count++;
           
        }
        n=n>>1;

    }
    return count;
}

//fibonacci series
// 1,2,3,5,8
void fibonacci(){
    int a = 0;
    int b = 1;
    int c =0 ;
    while( c <=89){
        
        cout<<c<<" ";
        a =b;
        b =c;
        c = a + b;

    }
    
}




int main(){
//     char ch = 'a';

//   cout<<endl;
//     switch(ch){
//         case '1' : cout<<"First"<<endl;
//                 break;
//         case '2' : cout<<"Second" <<endl;
//         break;
        
//         default: cout<<" It is default"<<endl;

//     }
//     cout<<endl;
//     return 0;



//create a calculator using switch case


// int a , b;

// cout<<"Enter  the value of a";
// cin>>a;

// cout<<"Enter the value of b"<<endl;
// cin>>b;


// char op;
// cout<<"Enter the required operator"<<endl;
// cin>>op;

// switch(op){
//     case '+':{
//     cout<<(a+b)<<endl;break;
//     }
//     case '-':
//     cout<<(a-b)<<endl;break;
//     case '*':
//     cout<<(a*b)<<endl;break;
//     case '/':
//     cout<<(a/b)<<endl;break;
//     case '%':
//     cout<<(a%b)<<endl;break;
//     default:cout<<"Enter a valid operator"<<endl;
// }

//for a given amount  of money(consider1330) calculate how many notes are required of 100 , 50 , 20 and 1 using switch statement

    // int amount = 1360;
    // int note100 = 0, note50 = 0, note20 = 0, note1 = 0;
    // int state = 1;

    // while (amount > 0) {
    //     switch (state) {
    //         case 1:
    //             note100 = amount / 100;
    //             amount = amount % 100;
    //             state = 2;
    //             break;

    //         case 2:
    //             note50 = amount / 50;
    //             amount = amount % 50;
    //             state = 3;
    //             break;

    //         case 3:
    //             note20 = amount / 20;
    //             amount = amount % 20;
    //             state = 4;
    //             break;

    //         case 4:
    //             note1 = amount;
    //             amount = 0;
    //             state = 5;
    //             break;

    //         default:
    //             // Done processing
    //             break;
    //     }
    // }

    // cout << "100 rupee notes: " << note100 << endl;
    // cout << "50 rupee notes: " << note50 << endl;
    // cout << "20 rupee notes: " << note20 << endl;
    // cout << "1 rupee notes: " << note1 << endl;



    


// int num1, num2;

// // Taking input from the user
// cout << "Enter first number: ";
// cin >> num1;

// cout << "Enter second number: ";
// cin >> num2;

// // Counting set bits
// int totalSetBits = countSet_Bits(num1) + countSet_Bits(num2);

// cout << "Total number of set bits in both numbers: " << totalSetBits << endl;

// return 0;


  fibonacci();
 return 0;

}

    



