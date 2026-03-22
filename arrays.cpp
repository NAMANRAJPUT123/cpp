// //SECOND LARGEST ELEMENT IN THE ARRAY
// #include <iostream> 
// #include <limits.h> // For INT_MIN
// using namespace std;
// int secondLargest(int arr[], int n) {
//     if (n < 2) {
//         cout << "Array must have at least two elements." << endl;
//         return -1; // Error case
//     }
//     int first = INT_MIN, second = INT_MIN;
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > first) {
//             second = first;
//             first = arr[i];
//         } else if (arr[i] > second && arr[i] != first) {
//             second = arr[i];
//         }
//     }
//     if (second == -1) {
//         cout << "There is no second largest element." << endl;
//         return -1; // Error case
//     }
//     return second;
// }
// int main() {
//     int arr[] = {12, 35, 1, 10, 3, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int result = secondLargest(arr, n);
//     if (result != -1) {
//         cout << "The second largest element is " << result << endl;
//     }
//     return 0;
// }

// call by reference and call by address
// #include <iostream>
// using namespace std;
// void swap(int &a, int &b) {  // Call by reference
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main() {
//     int x = 5, y = 10;
//     swap(x, y);
//     cout << "x = " << x << ", y = " << y << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// void swap(int *a, int *b) {  // Call by address
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int x = 5, y = 10;
//     swap(&x, &y);  // Pass address of variables
//     cout << "x = " << x << ", y = " << y << endl;
//     return 0;
// }
