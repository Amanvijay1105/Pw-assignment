# include <iostream>
using namespace std;
int main(){
    char x, y;
    cout << "Enter first character :";
    cin >>x;
    cout << "Enter second character :";
    cin >> y;
    cout << "Difference of ASCII values is :"<<(int)x -(int)y<<endl;
    return 0;
}