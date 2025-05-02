#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{ // prosedur input
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array: ";
        cin >> nPanjang;
        if (nPanjang <= 20)
        {
            break;
        }
        else
        {
            cout << "\nAraay maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i];
    }
}

void bubbleSortArray()
{
    int pass = 1; // step 1
    do
    {
        for (int j = 0; j <= nPanjang - 1 - pass; j++)
        { // step 2
            if (element[j] > element[j + 1])
            { // step 3
                int temp;
                temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass = pass + 1; // step 4
    } while (pass <= nPanjang - 1); // step 5
}

void display()
{
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < nPanjang; j++)
    {
        cout << element[j];
        if (j < nPanjang - 1)
        {
            cout << " --> ";
        }
    }
}

void binarySreach()
{
    cout << "\nMasukkan element yang ingin dicari: ";
    cin >> x;                // step 1
    int low = 0;             // step 2
    int high = nPanjang - 1; // step 3
    do
    {
        int mid = (low + high) / 2; // step 4
        if (element[mid] == x)
        { 
            cout << "Ditemukan pada index ke " << mid << endl;
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
    if (low > high) // step 8a
    {
        cout << x << "Tidak ditemukan" << endl; // step 9
    }
}

int main()
{
    input();
    bubbleSortArray();
    display();
    binarySreach();
    return 0;
}