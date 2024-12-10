#include <iostream>
using namespace std;

bool laSoNguyenTo(int n) {
    if (n < 2) {
        return false; 
    }
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int so1, so2;

    cout << "Nhap so nguyen thu nhat: ";
    cin >> so1;
    cout << "Nhap so nguyen thu hai: ";
    cin >> so2;

    if (laSoNguyenTo(so1)) {
        cout << so1 << " la so nguyen to." << endl;
    } else {
        cout << so1 << " khong phai la so nguyen to." << endl;
    }

    if (laSoNguyenTo(so2)) {
        cout << so2 << " la so nguyen to." << endl;
    } else {
        cout << so2 << " khong phai la so nguyen to." << endl;
    }

    return 0;
}

