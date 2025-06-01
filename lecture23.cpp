#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// to check whether an element is present in an array or not
bool isPresent(int arr[] [4] , int target , int row, int column){

 

    for(int i =0 ; i<row; i++){
   for(int j =0 ; j<column ; j++){
    if(target==arr[i][j]){

        return 1;
    }
   }

    }

return 0;
}


//print sum row wise


void rowSum( int arr[] [4] , int row , int column){
   
    for(int i=0 ; i<row ; i++){
 int sum =0;
        for(int j =0 ; j< column ; j++){

            sum += arr[i][j];
        }
        cout<<"Sum of row is :  "<<sum;
    

    }
    
}



//print  column wise sum


void colSum( int arr[][4] , int row, int column){

    for(column =0 ; column < 4 ; column++){
        int sum = 0;
        for(row =0 ; row<3 ; row++){

            sum+= arr[row][column];
        }
        cout<<"Sum of column is :"<<sum;
      
    }


}



// void colSum( int arr[] [4] , int row , int column){
   
//     for(int i=0 ; i<column ; i++){
//  int sum =0;
//         for(int j =0 ; j<row  ; j++){

//             sum += arr[j][i];
//         }
//         cout<<"Sum of col is :  "<<sum;
//         cout<<endl;

//     }
    
// }

// 


// maximum sum in a row

int maxSumR(int arr[][4], int row , int col ){
    int maxi = INT_MIN;
    int rowIndex = -1;
    

        for(int i=0 ; i<row ; i++){
 int sum =0;
        for(int j =0 ; j< col ; j++){

            sum += arr[i][j];
        }
      if(sum>maxi){
        maxi = sum;
        rowIndex = i;



      }

    }

  return rowIndex; 
    
}



//wave printing

vector <int> wavePrint(vector<vector<int> > arr, int nRows , int mCols){

vector<int> ans;


for( int col =0 ; col<mCols ; col++){
    
    if(col&1){
        // odd Index ->Bottom to up 
        for(int row = nRows-1 ; row>=0 ; row--){
            ans.push_back(arr[row][col]);
        }
        cout<<endl;
    }

    else{
        for(int row = 0 ; row<nRows ;row++){
            ans.push_back(arr[row][col]);
        }
        cout<<endl;
    }
}

return ans;

}


// spiral print 2D array

vector<int> spiralPrint(vector<vector<int>> &matrix){
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    
    int count =0;
    int total = row*col;

    //index initialization 
    int startingRow =0;
    int startingCol =0 ;

    int endingRow = row-1;
    int endingCol = col-1;

    while(count<total){
   
        //print starting row

        for(int index = startingCol ; count<total&& index<=endingCol; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;

        }
        startingRow++;

        //print ending column

        for(int index = startingRow;count<total && index <=endingRow ; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        //print ending row
        for(int index = endingCol ; count< total && index>=startingCol ; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        //print starting column

        for(int index= endingRow;count<total&& index>=startingRow ; index--){
            ans.push_back(matrix[index][startingCol]);
            count++;

        }
        startingCol++;


    }

    return ans;




}





int main(){
//     //create 2D array

//     int arr [3] [4];
//     cout<<"Enter the eelements of array"<<endl;

//     //taking inputs
//     for(int i =0 ; i<3 ; i++){
//         for(int j =0; j<4 ; j++){
//             cin >>arr[i][j];
//         }
//     }



//     //printing array  

//     for(int i =0 ; i<3 ; i++){
//         for(int j =0 ; j<4 ; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//   int target;
//   cout<<"Target: ";
//   cin>>target;

//     if(isPresent(arr,target ,3,4)){
//         cout<<"target is present";
//     }
//     else{
//         cout<<"Target is not found";
//     }


//     rowSum(arr,3,4);
//     colSum(arr,3,4);

//     int ans = maxSumR(arr,3,4);
//     cout<<ans;

    vector <vector<int>> matrix ={{1,2,3} ,
                                  {4,5,6} ,
                                  {7,8,9}};

    // vector<int> result = wavePrint(matrix, 3, 3);

    // for (int val : result) {
    //     cout << val << " ";
    // }



    vector<int> result2 = spiralPrint(matrix);

    for (int val : result2) {
        cout << val << " ";
    }







   
   


    return 0;

}