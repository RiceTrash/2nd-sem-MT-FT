#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
int main() {
 int arr1[MAX_SIZE], arr2[MAX_SIZE], sum[MAX_SIZE];
 int size;
 // Input the size and elements of the first array
 cout << "Enter the size of the first array: ";
 cin >> size;
 cout << "Enter the elements of the first array: ";
 for (int i = 0; i < size; i++) {
 cin >> arr1[i];
 }
 // Input the size and elements of the second array
 cout << "Enter the size of the second array: ";
 cin >> size;
 cout << "Enter the elements of the second array: ";
 for (int i = 0; i < size; i++) {
 cin >> arr2[i];
 }
 // Calculate the sum of corresponding elements of the two arrays
 for (int i = 0; i < size; i++) {
 sum[i] = arr1[i] + arr2[i];
 }
 // Output the sum of corresponding elements of the two arrays
 cout << "The sum of corresponding elements of the two arrays is: ";
 for (int i = 0; i < size; i++) {
 cout << sum[i] << " ";
 }
 cout << endl;
 return 0;
}
