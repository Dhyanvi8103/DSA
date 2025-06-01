#include<stack>
#include<queue>
#include<set>
#include<map> 
#include<algorithm>
#include<iostream>
using namespace std;

int main(){


    //<---------------------STACK--------------------------->
    //last in first out -- shadi ki plate


    stack<string> s;

    // s.push("Dhyanvi");
    // s.push("Raghuvanshi");
    // s.push("OMP");


    // cout<<"TOP : "<<s.top()<<endl;



    // s.pop();
    //  cout<<"TOP : "<<s.top()<<endl;
    //  cout<<"FROnt"<<s.front()<<endl;


    //<----------------QUEUE--------------------------->
    //First in first out(shadi me khane ki line me khade log)


    // queue<string> q;

    // q.push("dhyanvi");
    // q.push("raghuvanshi");
    // q.push("OMP");
    // q.push("OMp*OMP");



    // cout<<"FRONT befor pop : " <<q.front()<<endl;
    // cout<<"SIZE befor pop : " <<q.size()<<endl;
    // q.pop();

    // cout<<"FRONT after pop : " <<q.front()<<endl;
    //  cout<<"SIZE after pop : " <<q.size()<<endl;
    
    // cout<<"Back : " <<q.back()<<endl;


//<--------------------------------PRIORITY QUEUE----------------------------------->

// priority_queue<int> maxi;      //(for maximum heap)

// priority_queue<int, vector<int> , greater<int>> mini;     //(for minimum heap)

// maxi.push(1);
// maxi.push(3);
// maxi.push(2);
// maxi.push(0);
// maxi.push(5);

// int size  = maxi.size();
// for(int i =0 ; i<size ; i++){
//     cout<<maxi.top()<<' '<<endl;
//     maxi.pop();



// }

//     mini.push(1);
// mini.push(3);
// mini.push(2);
// mini.push(0);
// mini.push(5);

// int sizee  = mini.size();
// for(int i =0 ; i<sizee ; i++){
//     cout<<mini.top()<<' '<<endl;
//     mini.pop();
// }


//<------------------------------------SET----------------------------------------------->

// set<int> set;

// set.insert(7);
// set.insert(5);
// set.insert(5);
// set.insert(5);
// set.insert(5);
// set.insert(0);
// set.insert(9);
// set.insert(-5);
// set.insert(1);
// set.insert(2);

// for (int i :set){
//     cout<<i <<" ";
// }
// cout<<endl;

// set.erase(set.begin());

// for (int i :set){
//     cout<<i <<" ";
// }

// cout<<"count: " <<set.count(5)<<endl;

 //<-----------------------------------MAP--------------------------------->

//  map<int, string> mn;

//  mn[1]="Dhyanvi";
//  mn[20]="Raghuvanshi";
//  mn[3]="OMPP";

//  mn.insert({5,"bheem"});

// for(auto i : mn){
//     cout<<i.first<<endl;
// }



// cout<<"finding 1"<<mn.count(1);


//<----------------------------------ALGorithm--------------------------------->

vector<int> v ;
v.push_back(1);
v.push_back(3);
v.push_back(6);
v.push_back(7);

cout<<"Finding 6  :"<<binary_search(v.begin(), v.end(),6)<<endl;



}

