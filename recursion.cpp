// 1 TO n
// #include <iostream>
// using namespace std;
// void printNumbers(int n) {
//     if (n == 0) return;
//     printNumbers(n - 1);
//     cout << n << " ";
// }
// int main() {
//     int n = 5; 
//     printNumbers(n);
//     cout << endl;
//     return 0;
// }
// FACTORIAL
// #include <iostream>
// using namespace std;
// int factorial(int n) {
//     if (n == 0) return 1;
//     return n * factorial(n - 1);
// }
// int main() {
//     int n;
//     cin >> n;
//     if (n < 0) {
//         cout << "Factorial is not defined for negative numbers." << endl;
//         return 1;
//     } 
//     cout << "Factorial of " << n << " is " << factorial(n) << endl;
//     return 0;
// }
// FIBONACCI
#include <iostream>
using namespace std;
int fibo(int n) {
    if (n==0 || n==1) return n;
    return fibo(n-1) + fibo(n-2);
}
int main() {
    int n;
    cin >> n;
    cout <<n<<" th fibonacci number is : "<< fibo(n) << endl;
    return 0;
}
