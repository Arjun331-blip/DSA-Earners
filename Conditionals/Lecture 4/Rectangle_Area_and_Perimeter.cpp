#include <iostream>
using namespace std;

int main() {
    int length, width;
    cout << "Enter a length: ";
    cin >> length;
    cout << "Enter a width: ";
    cin >> width;
    int area = length * width;
    int perimeter = 2*(length + width);
    if(area > perimeter)
        cout << "area of a rectangle greater than to perimeter.";
    else if(perimeter > area)
        cout << "area of a rectangle less than to perimeter.";
    else 
        cout << "area and perimeter both are equal.";
    
    
    return 0;
}