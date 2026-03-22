//Bubble Sort
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n - 1; i++) {
//         bool flag = false; // has any swapping happened
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 flag = true;
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//         if (!flag) break; // optimized program
//     }
//     cout << "Bubble sorted array : ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

//Selection Sort
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n - 1; i++) {
//         int minIdx = i;
//         for (int j = i; j < n; j++) {
//             if (arr[minIdx] > arr[j]) {
//                 minIdx = j;
//             }
//         }
//         int temp = arr[minIdx];
//         arr[minIdx] = arr[i];
//         arr[i] = temp;
//     }
//     cout << "Selection sorted array : ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//Insertion Sort
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n - 1; i++) {
//         int j = i;
//         while (j >= 0 && arr[j + 1] < arr[j]) {
//             int temp = arr[j];
//             arr[j] = arr[j + 1];
//             arr[j + 1] = temp;
//             j--;
//         }
//     }
//     cout << "Insertion sorted array : ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//Merge Sort
// #include <iostream>
// using namespace std;
// void merge(int arr[], int l, int mid, int r) {
//     int n1 = mid - l + 1;   // size of left subarray
//     int n2 = r - mid;       // size of right subarray
//     int L[n1], R[n2];       // left and right subarrays
//     for (int i = 0; i < n1; i++) {
//         L[i] = arr[l + i];  // copy elements to left subarray
//     }
//     for (int j = 0; j < n2; j++) {
//         R[j] = arr[mid + 1 + j]; // copy elements to right subarray
//     }
//     int i = 0, j = 0, k = l; // i for left, j for right, k for merged array
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k++] = L[i++];
//         } else {
//             arr[k++] = R[j++];
//         }
//     }
//     while (i < n1) { // remaining elements in left subarray
//         arr[k++] = L[i++];
//     }
//     while (j < n2) { // remaining elements in right subarray
//         arr[k++] = R[j++];
//     }
// }
// void mergeSort(int arr[], int l, int r) {
//     if (l >= r) return;     // base case
//     int mid = (l + r) / 2;
//     mergeSort(arr, l, mid);       // left half
//     mergeSort(arr, mid + 1, r);   // right half
//     merge(arr, l, mid, r);        // merge the two halves
// }
// int main() {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     mergeSort(arr, 0, n - 1);
//     cout << "Sorted array : ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// quick sort
// #include <iostream>
// #include <algorithm>   // for swap
// using namespace std;

// int partitionArr(int arr[], int st, int end) {
//     int pivot = arr[st];
//     int cnt = 0;

//     for (int i = st + 1; i <= end; i++) {
//         if (arr[i] <= pivot)
//             cnt++;
//     }

//     int pivotidx = st + cnt;
//     swap(arr[st], arr[pivotidx]);   // built-in swap

//     int i = st, j = end;

//     while (i < pivotidx && j > pivotidx) {
//         while (arr[i] <= pivot) i++;
//         while (arr[j] > pivot) j--;

//         if (i < pivotidx && j > pivotidx) {
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }
//     }

//     return pivotidx;
// }

// void quickSort(int arr[], int st, int end) {
//     if (st < end) {
//         int pi = partitionArr(arr, st, end);
//         quickSort(arr, st, pi - 1);
//         quickSort(arr, pi + 1, end);
//     }
// }

// int main() {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter elements : ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     quickSort(arr, 0, n - 1);

//     cout << "Sorted array : ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

// #include <iostream>
// #include <algorithm>   // for swap
// using namespace std;
// void cyclicsort(int arr[], int n) {
//     int i = 0;
//     while(i < n){
//         int correctidx = arr[i] - 1;
//         if(arr[i] != arr[correctidx]){
//             swap(arr[i], arr[correctidx]);
//         }
//         else i++;
//     }
// }
// int main() {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter elements : ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     cyclicsort(arr, n);
//     cout << "Sorted array : ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     return 0;
// }

//Inplace merge sort
#include <iostream>
#include <vector>
using namespace std;
void mergeInPlace(vector<int>& arr, int l, int mid, int r) {
    int i = l;
    int j = mid + 1;

    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) {
            i++;
        } else {
            int value = arr[j];
            int index = j;

            while (index > i) {
                arr[index] = arr[index - 1];
                index--;
            }
            arr[i] = value;

            i++;
            mid++;
            j++;
        }
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l >= r) return;

    int mid = l + (r - l) / 2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    mergeInPlace(arr, l, mid, r);
}
int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    mergeSort(arr, 0, n - 1);
    cout << "Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}