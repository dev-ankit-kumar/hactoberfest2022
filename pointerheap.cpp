#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
    int *p;
    //alloacting memory in heap using malloc this syntax is for c language
    //array of size 5 is creaed in heap
    //p=(int *)malloc(5*sizeof(int));
    //for c++
    p=new int[5];
    
    p[0]=1;p[1]=2;p[2]=3;p[3]=5;p[4]=4;

    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    cout<<p;
}