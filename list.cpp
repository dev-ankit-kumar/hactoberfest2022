#include<iostream>
#include<list>

using namespace std;
int main(){
    list<int> l;

    l.push_back(2);
    l.push_front(1);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    
    l.pop_front();
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<l.size()<<endl;
    cout<<"after erasing from list size of list is "<<endl;
    l.erase(l.begin());
    cout<<l.size()<<endl;

    
    
}