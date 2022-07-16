#include <algorithm>
#include <iostream>
  
using namespace std;
  
void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << ",";
}
  
int main()
{
	int val;
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\nThe array is : \n";
    show(a, asize);
  
    cout << "\n In the array So, we first sort the array";
    sort(a, a + asize);
    cout << "\n\nThe array after sorting is : \n";
    show(a, asize);
    cout << "\n\nLet's say we want to search for ";
    cin>>val;
    cout << "\n\nNow, we do the binary search";
    if (binary_search(a, a + asize, val))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
  
    cout << "\n\nNow, say we want to search for 10";
    if (binary_search(a, a + asize, val))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
  
    return 0;
}