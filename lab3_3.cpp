#include<iostream>
using namespace std;
int main(){

    float x=6,sum=0;
    while(x<=19){

        sum +=1/x;
        x++;
    }
    cout<<sum;
}