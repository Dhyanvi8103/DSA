// #include <iostream>
// #include<climits>
// using namespace std;




// //reverse an integer
// // class Solution {
// // public:
// //     int reverse(int x) {
// //         int ans = 0;
// //         while (x != 0) {
// //             int digit = x % 10;

// //             if ((ans > INT_MAX/10) || (ans < INT_MIN/10)){
// //                 return 0;
// //             }
// //             ans = ans * 10 + digit;
// //             x = x / 10;
// //         }
// //         return ans;
// //     }
// // };


// //complement of base 10 integer
// // class Solution {
// //     public:
// //     int bitwiseComplement(int n){
// //         int m = n ;
// //         int mask = 0;
// //         while(m!=0){
// //             mask = (mask<<1)| 1;
// //             m = m>>1;
// //         }
// //         int ans = (~n) & mask;
// //         return ans;

// //     }

// // };


// //power of 2

// class Solution {
//     public:
//     bool isPowerOfTwo(int n){
//         for (int i =0; i < 30; i++){
//             int ans = pow(2,i);
//             if (ans == n){
//                 return true;
//             }
            
//         }
//         return false;
        
//     }
// }






// int main() {
//     // Solution sol;
//     // int num;
//     // cout << "Enter a number: ";
//     // cin >> num;
//     // cout << "Reversed: " << sol.reverse(num) << endl;
//     // return 0;






// }
