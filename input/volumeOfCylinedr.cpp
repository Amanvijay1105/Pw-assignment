# include <iostream>
using namespace std;
int main(){
    float volume, height, radius;
    cout << "Enter radius :";
    cin >> radius;
    cout << "Enter height :";
    cin >> height;
    volume = 3.1415*radius*radius*height;
    cout << "Volume with given radius and height is :" << volume << endl;
    return 0;
}