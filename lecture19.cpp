#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
using namespace std;


int main(){



    //<------------------------ARRAYS------------------------->

    // int basic[3]={1,2,3};

    // array<int , 4> a = {1,2,3,4}; // implementation is stattic array type


    // int size = a.size();

    // for(int i =0 ; i<size ;  i++){
    //     cout<< a[i]<<endl;
    // }

    // cout<<"Element at 2nd index "<<a.at(2)<<endl;

    // cout<<"Empty or not "<<a.empty()<<endl;

    // cout<<"First Element : "<<a.front()<<endl;
    
    // cout<<"Last Element : "<<a.back()<<endl;





    //<-----------------------------VECTOR--------------------------->



//     vector<int> v;

//     cout<<"Capacity : "<<v.capacity()<<endl;
//     cout<<"Size : " <<v.size()<<endl;

//    v.push_back(1);
//    cout<<"Capacity : "<<v.capacity()<<endl;
//     cout<<"Size : " <<v.size()<<endl;

//     v.push_back(2);
//        cout<<"Capacity : "<<v.capacity()<<endl;
//     cout<<"Size : " <<v.size()<<endl;


//     v.push_back(3);
//        cout<<"Capacity : "<<v.capacity()<<endl;
//     cout<<"Size : " <<v.size()<<endl;


// cout<<"Element at 2nd index : "<<v.at(2)<<endl;

// cout<<"Front Element : "<<v.front()<<endl;
// cout<<"Last Element : " <<v.back()<<endl;


// cout<<"before pop"<<endl;


// for(int i =0 ; i<v.size() ; i++){
//     cout<<v.at(i)<<endl;

// }

// v.pop_back();
// cout<<"after pop"<<endl;


// for(int i =0 ; i<v.size() ; i++){
//     cout<<v.at(i)<<endl;

// }

// vector<int> start(4,1);
// vector<int> last(start);


// for(int i =0 ; i<last.size(); i++){
//     cout<<last[i];
// }




//<------------------------------DEQUE------------------------------------>

// deque<int> d;

// d.push_back(1);
// d.push_front(2);


// for(int i :d){
//     cout<<i<<" ";
// }


// // d.pop_front();
// for(int i :d){
//     cout<<i<<" ";
// }



// cout<<"Front Element : "<<d.front();
// cout<<"Last Element : "<<d.back();

// cout<<"Empty or Not : "<<d.empty();

// d.erase(d.begin(),d.begin()+1);

// cout<<d.size();




//<-----------------------------LIST---------------------------------->

list<int> l;
list<int> n(l);//copy of l list in n
list<int> m(5,100);

l.push_back(1);
l.push_front(2);


for( int i : l){

    cout<<i<<" ";
}

for(int i : m){
    cout<<i<<" ";
}


}