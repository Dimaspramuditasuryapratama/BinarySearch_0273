#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void binarySreach()
{
    cout << "Masukkan element yang ingin dicari: ";
    cin >> x;                // step 1
    int low = 0;             // step 2
    int high = nPanjang - 1; // step 3
    do
    {
        int mid = (low + high) / 2; // step 4
        if (element[mid] == x)
        { // step 5
            cout << "element Ditemukan" << endl;
            return; // step 5a
        }
        if (x < element[mid] < x)
        {                   
            high = mid + 1; 
        }
        if (x > element[mid])
        {
            low = mid + 1; // step 7
        }
    } while (low <= high); // step 8
    if (low > high)                             // step 8a
    {
        cout << x << "Tidak ditemukan" << endl; // step 9
    }
 }

int main()
{
}