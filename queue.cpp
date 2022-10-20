//first in first out  example:bank ki line

#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("ankit");
    q.push("kumar");
    q.push("nsut");

    cout<<"first element is "<<q.front();
    cout<<endl;
    cout<<"size before pop "<<q.size()<<endl;
    q.pop();
    cout<<"first element is "<<q.front()<<endl;

    cout<<"size after pop "<<q.size()<<endl;

    
}