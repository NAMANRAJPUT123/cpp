// hcf using loops
// #include <iostream>
// using namespace std;
// int hcf(int a, int b) {
//     int min = (a < b) ? a : b;
//     int hcf = 1;
//     for (int i = 1; i <= min; i++) {
//         if (a % i == 0 && b % i == 0) {
//             hcf = i;
//         }
//     }
//     return hcf;
// }
// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     cout << "HCF of " << a << " and " << b << " is: " << hcf(a, b) << endl;
//     return 0;
// }

// TABLE OF N
// #include <iostream> 
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Table of " << n << " is:" << endl;
//     for (int i = 1; i <= 10; i++) {
//         cout << n << " x " << i << " = " << n * i << endl;
//     }
//     return 0;
// }

// ARITHMATIC PROGRESSION
// #include <iostream>
// using namespace std;

// int main() {
//     int a, d, n;
//     cout << "Enter the first term (a), common difference (d), and number of terms (n): ";
//     cin >> a >> d >> n;
//     cout << "Arithmetic progression: ";
//     for (int i = 0; i < n; i++) {
//         cout << a + i * d << " ";
//     }
//     return 0;
// }

//GEOMETRIC PROGRESSION WITHOUT USING POW FUNCTION
// #include <iostream>
// using namespace std;
// int main() {
//     int a, r, n;
//     cout << "Enter the first term (a), common ratio (r), and number of terms (n): ";
//     cin >> a >> r >> n;
//     cout << "Geometric progression: ";
//     int term = a;
//     for (int i = 0; i < n; i++) {
//         cout << term << " ";
//         term *= r;
//     }
//     return 0;
// }

// COMPOSITE NUMBER
// #include <iostream>
// using namespace std;
// bool isComposite(int n) {
//     if (n < 4) return false; // 0, 1, 2, 3 are not composite
//     for (int i = 2; i <= n / 2; i++) {
//         if (n % i == 0) return true;
//     }
//     return false;
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (isComposite(num)) {
//         cout << num << " is a composite number." << endl;
//     } else {
//         cout << num << " is not a composite number." << endl;
//     }
//     return 0;
// }

//COUNTDIGIT AND SUM
// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter the n: ";
//     cin >>num;
//     int count = 0,sum=0;
//     while(num>0){
//         int ld = num%10;
//         sum = sum +ld;
//         num = num/10;
//         count++;
//     }
//     cout<<"Number of digits and sum : "<<count<<","<<sum;
//     return 0;
// }

//REVERSE
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter the n: ";
    cin >>num;
    int rev=0;
    while(num>0){
        int ld = num%10;
        rev = rev*10 +ld;
        num = num/10;
    }
    cout<<"Reverse : "<<rev;
    return 0;
}

