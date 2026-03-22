// vectors -->vector is a part of the Standard Template Library (STL). It's a dynamic array that can grow or shrink in size automatically.
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     // 1. Declare vectors
//     vector<int> v1;                         // Empty vector
//     vector<int> v2(5);                      // 5 elements, default 0
//     vector<int> v3(5, 10);                  // 5 elements, all 10
//     vector<int> v4 = {1, 2, 3, 4};          // Initialization list
//     vector<int> v5(v4);                     // Copy constructor
//     // 2. Add elements
//     v1.push_back(100);
//     v1.push_back(200);
//     // 3. Access elements
//     cout << "v1[0] = " << v1[0] << endl;
//     cout << "v1.at(1) = " << v1.at(1) << endl;
//     // 4. Front and Back
//     cout << "Front: " << v1.front() << ", Back: " << v1.back() << endl;
//     // 5. Size and Capacity
//     v1.push_back(300); // Add more elements to change size and capacity
//     v1.push_back(400);
//     v1.push_back(500);
//     cout << "Size: " << v1.size() << ", Capacity: " << v1.capacity() << endl;
//     // 6. Insert
//     v1.insert(v1.begin() + 1, 150);  // insert 150 at index 1
//     // 7. Erase
//     v1.erase(v1.begin());           // erase first element
//     // 8. Pop last element
//     v1.pop_back();
//     // 9. Iterate using range-based loop
//     cout << "v1 elements: ";
//     for (int x : v1) cout << x << " ";
//     cout << endl;
//     // 10. Iterate using iterator
//     cout << "v3 elements using iterator: ";
//     for (auto it = v3.begin(); it != v3.end(); ++it) {
//         cout << *it << " ";
//     }
//     cout << endl;
//     // 11. Resize vector
//     v3.resize(3);   // reduce size to 3
//     v3.resize(6, 99); // expand to 6, new values = 99
//     // 12. Check if empty
//     cout << "v2 is empty? " << (v2.empty() ? "Yes" : "No") << endl;
//     // 13. Clear vector
//     v2.clear();
//     cout << "After clearing, v2 size: " << v2.size() << endl;
//     // 14. Swap two vectors
//     cout << "Before swap, v4[0] = " << v4[0] << ", v5[0] = " << v5[0] << endl;
//     v4.swap(v5);
//     cout << "After swap, v4[0] = " << v4[0] << ", v5[0] = " << v5[0] << endl;
//     // 15. 2D vector
//     vector<vector<int>> matrix(2, vector<int>(3, 7));
//     cout << "2D vector element matrix[1][2] = " << matrix[1][2] << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
class DistanceMiles;
class DistanceM;
class DistanceKM {
    float km;
public:
    DistanceKM(float k=0): km(k) {}
    float getKM() const { return km; }
    operator DistanceM(); // Conversion operator
};
class DistanceM {
    float m;
public:
    DistanceM(float x=0): m(x) {}
    operator DistanceKM(){ return DistanceKM(m / 1000); }
    float getM() const { return m; }
    operator DistanceMiles(){ return DistanceMiles(m / 1609.34); }
};
DistanceKM::operator DistanceM(){
    return DistanceM(km * 1000);
}

class DistanceMiles {
    float miles;
public:
    DistanceMiles(float x=0): miles(x) {}
    DistanceMiles(DistanceM d) { miles = d.getM() / 1609.34; }
    operator DistanceM(){ return DistanceM(miles * 1609.34); }
    float getMiles() const { return miles; }
};

int main() {
    DistanceKM km(10);
    DistanceM m = km;
    DistanceMiles miles = m;
    DistanceM m2 = miles;
    DistanceKM km2 = m2;
    cout << "Distance in KM: " << km.getKM() << " km" << endl;
    cout << "Distance in M: " << m.getM() << " m" << endl;
    cout << "Distance in Miles: " << miles.getMiles() << " miles" << endl;
    cout << "Distance in M2: " << m2.getM() << " m" << endl;
    cout << "Distance in KM2: " << km2.getKM() << " km" << endl;
}






























