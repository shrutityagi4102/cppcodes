#include<iostream>
using namespace std;

int main(){
    float u,v,a,speed;
    cout<<"Please enter the values : \n";
    cin>>u>>v>>a;
    speed = ((v*v) - (u*u))/(2*a);
    cout<<"Speed is : "<<speed;
    return 0;
}