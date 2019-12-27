#include<iostream>
using namespace std;
int main(){

    float x=2,sum=0;
    while(x<=69){

        sum +=1/x;
        x++;
    }
    cout<<sum;
}