#include<iostream>
using namespace std;


//linear search in an array
bool search(int arr[],int size,  int key){
    for(int i = 0 ; i < size ; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    
        return 0;

    }

//reverse an array
void reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}




int main(){
    int arr[10] ={5 , 7 ,-2 , 10 ,22 , -2 , 0 ,  5 ,22 ,1};
    
   cout<<"Enter the key" << endl;
   int key ;
   cin>>key;

    bool found =search (arr, 10,  key);

    if (found){
        cout<<"Key is present"<< endl;
    }
else{
    cout<<"Key is absent " << endl;
     
}


reverse(arr, 10);
    
cout << "Reversed array: ";
for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
}
cout << endl;

return 0;


   


}