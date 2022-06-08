#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter the value of n :\n";
    cin>>n;
    // float sum = (float)(0.5)*(n*(n+1));
    // cout<<"The Sum is : "<<sum;
    int sum = 0;
    for (int i =1;i<=n;i++){
        sum += i;
    }
    cout<<"The Sum is : "<<sum;
    return 0;
}