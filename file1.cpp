#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void binarySreach() {
    cout << "Masukkan element yang ingin dicari: ";
    cin >> x;   // step 1
    int low = 0;    // step 2
    int high = nPanjang-1;  // step 3
    do {
        int mid = (low + high)/2;   // step 4
        if (element[mid] == x) {    // step 5
            cout << "Ditemukan" << endl;   // step 5a
        }
        else if (element[mid] < x) {    // step 6
            high = mid + 1;   // step 6a 
        }
        if (x > element[mid]) {
            low = mid - 1;   // step 7
        }
    }while (low <= high);   // step 8
        cout << "Tidak ditemukan" << endl;   // step 9    
 }


int main(){

}