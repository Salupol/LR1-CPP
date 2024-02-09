/*#include <iostream>

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
}*/
// switchcase method
#include <iostream>
// var 12
int main() {
    using namespace std;


    //part 1
    int day;
    int contidion;
    cout << "Enter day:" << endl;
    cin >> day;
    int month;
    cout << "Enter month" << endl;
    cin >> month;
    switch (month) {
        case 1:
            contidion = 31;
            break;
        case 2:
            contidion = 28;
            break;
        case 3:
            contidion = 31;
            break;
        case 4:
            contidion = 30;
            break;
        case 5:
            contidion = 31;
            break;
        case 6:
            contidion = 30;
            break;
        case 7:
            contidion = 31;
            break;
        case 8:
            contidion = 31;
            break;
        case 9:
            contidion = 30;
            break;
        case 10:
            contidion = 31;
            break;
        case 11:
            contidion = 30;
            break;
        case 12:
            contidion = 31;
            break;
        default:
            printf("Invalid month\n");
            break;
    }
    if (contidion < day || day < 1 || month < 1 || month > 12) {
        printf("Invalid date\n");
        return 0;
    }
    if (day < contidion) {
        day++;
    } else if (day == contidion) {
        day = 1;
        month++;
    }
    printf("The next day is: %d/%d\n", day, month);



//part 2
//var 21
double x, y;
int quadrant;
cout << "Enter x: ";
cin >> x;
cout << "Enter y: ";
cin >> y;
if (x > 0 && y > 0) {
quadrant = 1;
} else if (x<0 && y> 0) {
quadrant = 2;
} else if (x < 0 && y < 0) {
quadrant = 3;
} else if (x > 0 && y < 0) {
quadrant = 4;
} else {
quadrant = 0;
}
switch (quadrant) {
    case 1:
        cout << "The point is in the first quadrant" << endl;
        break;
    case 2:
        cout << "The point is in the second quadrant" << endl;
        break;
    case 3:
        cout << "The point is in the third quadrant" << endl;
        break;
    case 4:
        cout << "The point is in the fourth quadrant" << endl;
        break;
    default:
        cout << "The point is on the axis" << endl;
}

}
