#include<iostream>
using namespace std;



//convert into lowercase

char toLowerCase(char ch){

    if(ch>'a'&& ch<'z'){
        return ch;
    }
    else{

        char temp = ch-'A' +'a';
       return temp;
    }
}





// Reverse a string
void reverse(char name[], int n) {
    int s = 0;
    int e = n - 1;
    while(s < e) {
        swap(name[s++], name[e--]);
    }
}

// Get the length of a string
int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

// Check if the string is a palindrome
bool checkPalindrome(char name[], int n) {
    int start = 0;
    int end = n - 1;
    while(start < end) {
        if( toLowerCase(name[start]) != toLowerCase( name[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    cout << "Enter your name: ";
    char name[20];
    cin >> name;

    int len = getLength(name);

    cout << "Your name is: " << name << endl;
    cout << "Length of name: " << len << endl;

    // Check if it's a palindrome
    if (checkPalindrome(name, len)) {
        cout << "It is a palindrome." << endl;
    } else {
        cout << "It is not a palindrome." << endl;
    }

    // Reverse the name
    reverse(name, len);
    cout << "Reversed name: " << name << endl;

    return 0;
}
