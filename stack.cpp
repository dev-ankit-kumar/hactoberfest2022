//last in first out example:-shadi mein rakhi plate

#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("ankit");
    s.push("kumar");
    s.push("csai");

    cout<<"top element is "<<s.top();
    cout<<endl;
    s.pop();
    cout<<"top element is "<<s.top();
    cout<<endl;
    cout<<"size is "<<s.size();
    cout<<endl;
    cout<<"empty or not "<<s.empty();
}