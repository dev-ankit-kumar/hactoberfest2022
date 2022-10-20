#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of row:"<<endl;
    cin>>n;
    int i=1;

    
    while(i<=n){
        int j=1;
       
        while(j<=n){


            /*i+j-1=1 for i=1 and j=1
            1 ko A m convert krne k liye dono side 'A'-1 add kr do
            hence 'A'+i+j-2='A' for i=1 and j=1*/


            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j++;
           
        }
        cout<<endl;
        i++;
    }

}