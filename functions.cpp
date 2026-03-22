// //PASCAL TRIANGLE
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     if(n>=0){
//        for(int i=1;i<=n;i++){
//           fact = fact*i;
//         }
//     }
//     return fact;
// }
// int ncr(int n,int r){
//     return factorial(n)/(factorial(r)*factorial(n-r));
// }
// int main() {
//     int n;
//     cout<<"Enter number of rows : ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1-i;j++){
//             cout<<"    ";
//         }
//         for(int k=0;k<i+1;k++){
//             cout<<ncr(i,k)<<"       ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// Enter number of row : 6 
//                         1       
//                     1       1
//                 1       2       1
//             1       3       3       1
//         1       4       6       4       1
//     1       5       10       10       5       1    

// PASS BY VALUE ,PASS BY REFERENCE ,PASS BY ADDRESS
// #include<iostream>
// using namespace std;
// void passByValue(int a) {
//     a = 10;
// }
// void passByReference(int &a) { // sidha point krta hai khud ki memory nhi bnata hai
//     a = 20;
// }
// void passByAddress(int *a) { // khud ki memory mai address rakhta hai
//     *a = 30;
// }
// int main() {
//     int x = 5;
//     passByValue(x);
//     cout << "After passByValue: " << x << endl;
//     passByReference(x);
//     cout << "After passByReference: " << x << endl;
//     passByAddress(&x);
//     cout << "After passByAddress: " << x << endl;
//     return 0;
// }

// RETURN BY REFERENCE
#include<iostream>
using namespace std;
int& returnByReference(int &a,int &y) {
    int temp = a;
    a=y;
    y=temp;
    return a;
}
int main() {
    int x = 5,y=15;
    returnByReference(x,y) = 45; // x mai 45
    cout<<x<<" "<<y;
    return 0;
}