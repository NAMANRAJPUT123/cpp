// #include<iostream>
// using namespace std;
// int main() {
//     int x,y;
//     cin>>x>>y;
//     if(x>y) {
//         cout<<x<<" is greater than "<<y;
//     } 
//     else {
//         cout<<y<<" is greater than "<<x;
//     }
//     return 0;
// }

// EVEN OR ODD
// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cin >> num;
//     if (num % 2 == 0) {
//         cout << num << " is even.";
//     } else {
//         cout << num << " is odd.";
//     }
//     return 0;
// 
//ABSOLUTEVALUE
// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cin >> num;
//     if (num < 0) {
//         num = -num;
//     }
//     cout << "The absolute value is " << num;
//     return 0;
// }
//PROFIT OR LOSS
// #include <iostream>
// using namespace std;
// int main() {
//     float costPrice, sellingPrice;
//     cout << "Enter cost price and selling price: ";
//     cin >> costPrice >> sellingPrice;
//     if (sellingPrice > costPrice) {
//         cout << "Profit: " << sellingPrice - costPrice;
//     } else if (sellingPrice < costPrice) {
//         cout << "Loss: " << costPrice - sellingPrice;
//     } else {
//         cout << "No Profit No Loss";
//     }
//     return 0;
// }
//MULTIPLE CONDITIONS
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a > b && a > c) {
//         cout << "A is the greatest";
//     } else if (b > a && b > c) {
//         cout << "B is the greatest";
//     } else {
//         cout << "C is the greatest";
//     }
//     return 0;
// }
//VALID TRIANGLE
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     cout << "Enter the lengths of the three sides of the triangle: ";
//     cin >> a >> b >> c;
//     if (a + b > c && a + c > b && b + c > a) {
//         cout << "Valid triangle";
//     } else {
//         cout << "Invalid triangle";
//     }
//     return 0;
// }
// FIND THE YOUNGEST OF THREE without multiple conditions without third variable
// #include <iostream>
// using namespace std;
// int main() {
//     int age1, age2, age3;
//     cout << "Enter the ages of three people: ";
//     cin >> age1 >> age2 >> age3;
//     if (age1 < age2) {
//         if (age1 < age3) {
//             cout << "Person 1 is the youngest.";
//         } else {
//             cout << "Person 3 is the youngest.";
//         }
//     } else {
//         if (age2 < age3) {
//             cout << "Person 2 is the youngest.";
//         } else {
//             cout << "Person 3 is the youngest.";
//         }
//     }
//     return 0;
// }
// TERNARY OPERATOR
// #include <iostream>
// using namespace std;
// int main() {
//     int age1, age2, age3;
//     cout << "Enter the ages of three people: ";
//     cin >> age1 >> age2 >> age3;
//     int youngest = (age1 < age2) ? ((age1 < age3) ? age1 : age3) : ((age2 < age3) ? age2 : age3);
//     cout << "The youngest person is " << youngest << " years old.";
//     return 0;
// }
//SWITCH CASE CALCULATOR
#include <iostream>
using namespace std;
int main() {
    int num1, num2, choice;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter your choice (1: Add, 2: Subtract, 3: Multiply, 4: Divide): ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Result: " << num1 + num2;
            break;
        case 2:
            cout << "Result: " << num1 - num2;
            break;
        case 3:
            cout << "Result: " << num1 * num2;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Result: " << num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed.";
            }
            break;
        default:
            cout << "Invalid choice";
    }
    return 0;
}