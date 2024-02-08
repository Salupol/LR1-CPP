#include <iostream>

int main() {
    using namespace std;
    double x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    if (x > 0 && y > 0){
        cout << "The point is in the first quadrant" << endl;
    } else if (x < 0 && y > 0){
        cout << "The point is in the second quadrant" << endl;
    } else if (x < 0 && y < 0){
        cout << "The point is in the third quadrant" << endl;
    } else if (x > 0 && y < 0){
        cout << "The point is in the fourth quadrant" << endl;
    } else {
        printf("The point is on the axis\n"); // or cout it doesn't really matter in this case
    return 0;
}
}

