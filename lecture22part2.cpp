#include<string>
#include<iostream>
#include<vector>

using namespace std;

char getMaxOccCharacter(string s){

    int arr[26] ={0};


    for(int i =0;i<s.length(); i++ ){
        char ch = s[i];
        int number =0 ;
        number = ch - 'a';
        arr[number]++;
    }


    //find maximum occurence character
    int maxi = -1 , ans =0;
    for(int i =0 ; i<26 ; i++){

        if(maxi <arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' +ans;
    return finalAns;


}




//remove extra space and add @40 in place of that

string replaceSpaces(string &str){

    string temp = "";
    for(int i =0; i <str.length() ;  i++){

        if(str[i] ==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');

        }
        else{
            temp.push_back(str[i]);
        }

    }
    return temp;
}

int main(){

    string Str;

cout<<"Enter String";
cin>>Str;

cout<<getMaxOccCharacter(Str);
cout<<replaceSpaces(Str);


}



