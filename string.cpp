// STRING INPUT
//#include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string input;
//     cout << "Enter a string: ";
//     getline(cin, input);
//     cout << "You entered: " << input << endl;
//     return 0;
// }
// ALL STRING IN-BUILD FUNCTIONS
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str = "Hello, World!";
//     cout << "Length: " << str.length() << endl;
//     cout << "Substring: " << str.substr(0, 5) << endl;
//     cout << "Find: " << str.find("World") << endl;
//     cout << "Replace: " << str.replace(7, 5, "C++") << endl;
//     cout << "To Upper: " << str << endl;
//     return 0;
// }
// +// STRING CONCATENATION
#//include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str1 = "Hello, ";
//     string str2 = "World!";
//     string result = str1 + str2;
//     cout << "Concatenated String: " << result << endl;
//     return 0;
// }
// INPUT A STRING OF EVEN LENGHT AND REVERSE THE FIRST HALF OF THE STRING
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string input;
    cout << "Enter a string of even length: ";
    getline(cin, input);
    if (input.length() % 2 != 0) {
        cout << "Please enter an even-length string." << endl;
        return 1;
    }
    int n = input.length();
    reverse(input.begin(),input.begin() + n/2);
    cout << "Reversed first half: " << input << endl;
    return 0;
}