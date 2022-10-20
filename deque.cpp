#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int > d;
    d.push_back(1);
    d.push_front(2);

    for( int i:d){
        cout<<i<<" ";
    }
cout<<endl;
    // d.pop_back();
    //  for( int i:d){
    //     cout<<i<<" " <<endl;
    // }

cout<<"first element  "<<d.front()<<endl;
cout<<"element at first index  "<<d.at(1)<<endl;
cout<<"before erase size is  "<<d.size()<<endl;

    cout<<"after erase size of deque is  "<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<d.size()<<endl;


}