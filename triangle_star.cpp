#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of row:"<<endl;
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
        while(column<=row){
            cout<<"*";
            column++;
        }
        cout<<endl;
        row++;
    }

}