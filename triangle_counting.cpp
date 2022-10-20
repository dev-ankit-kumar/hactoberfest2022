#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of row:"<<endl;
    cin>>n;
    int row=1;
    
    while(row<=n){
        int column=1;
        int value=row;
        while(column<=row){
            cout<<value<<" ";
            column++;
            value++;
        }
        cout<<endl;
        row++;
    }

}