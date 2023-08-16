# include <iostream>
using namespace std;
int main(){
    int x;
    cout<< "Enter first number :";
    cin >> x;  // user will give x a value
    int y,m;
    cout<<"Enter second number and value for taking modulus :";
    cin >> y >>m;
    int Z = (x*y)%m;
    cout<< "Output is :" << Z;
    // answer is 0
    return 0;
}