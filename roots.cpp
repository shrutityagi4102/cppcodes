#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c,r1,r2;
    cout<<"Values of a,b and c please : ";
    cin>>a>>b>>c;
    r1 = (float) (-b+sqrt((b*b)-(4*a*c)))/(2*a);
    r2 = (float) (-b-sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"Roots are : \n"<<r1<<"\n"<<r2;
    return 0;
}