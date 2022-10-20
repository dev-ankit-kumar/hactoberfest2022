//maxi queue mein se maximum pahle niklega or min queue mein se minimum pahle niklega

#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxi;
    priority_queue<int, vector<int> , greater<int> > min;

    maxi.push(5);
    maxi.push(8);
    maxi.push(3);
    maxi.push(4);
    maxi.push(1);
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    min.push(5);
    min.push(8);
    min.push(3);
    min.push(4);
    min.push(1);
    int k=min.size();
    for(int i=0;i<k;i++){
        cout<<min.top()<<" ";
        min.pop();
    }

    
}