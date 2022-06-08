#include <iostream>
using namespace std;
int main(){
    float basic, all, ded, net;
    cout<<"Please enter values: ";
    cin>>basic>>all>>ded;
    net = basic + (basic*(all/100))-(basic*(ded/100));
    cout<<"Net Salary : "<<net;
    return 0;
}