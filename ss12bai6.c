#include <iostream>
using namespace std;

bool laSoHoanHao(int n) {
    if (n <= 0) {
        return false; 
    }

    int tongUoc = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tongUoc += i;
        }
    }

    return tongUoc == n;
}

int main() {
    int so1, so2;

    cout << "Nhap so nguyen thu nhat: ";
    cin >> so1;
    cout << "Nhap so nguyen thu hai: ";
    cin >> so2;

    if (laSoHoanHao(so1)) {
        cout << so1 << " la so hoan hao." << endl;
    } else {
        cout << so1 << " khong phai la so hoan hao." << endl;
    }

    if (laSoHoanHao(so2)) {
        cout << so2 << " la so hoan hao." << endl;
    } else {
        cout << so2 << " khong phai la so hoan hao." << endl;
    }

    return 0;
}

