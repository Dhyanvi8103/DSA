#include<iostream>
#include<vector>
using namespace std;//rotate array
                    //checkSortedRotatedArray
                    //Add Array




vector<int> rotateArrayByk(vector<int>& nums , int k){
    //just to practice the modulous approach
    int n = nums.size()
;
vector<int> temp(n);

for(int i =0 ; i<n ; i++){
    temp[(i+k)%n] = nums[i];
}
for(int i =0 ; i<nums.size(); i++){

    nums[i]=temp[i];
}
  return nums;

}

bool check(vector<int>& nums){
    int count =0;
    for(int i =1 ;i<nums.size();i++){

        if(nums[i]<nums[i-1]){
        count++;

        }
    }

    if(nums[nums.size()-1]>nums[0]){
        count++;
    }

    return count<=1;
    




}




int main(){


//     vector<int> arr = {11,12,13,14,15,16};

//     vector<int> ans = rotateArrayByk(arr,2);
    
// // Print the result
//     for (int num : ans) {
//         cout << num << " ";
//     }






      vector<int> nums = {3, 4, 5, 1, 2};  // Example test case

    if (check(nums)) {
        cout << "Valid rotated sorted array " << endl;
    } else {
        cout << "Invalid rotated sorted array " << endl;
    }

    return 0;

    // return 0;

    

}