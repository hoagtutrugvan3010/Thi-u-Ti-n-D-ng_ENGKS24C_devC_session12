#include <iostream>
using namespace std;

long long tinhGiaiThua(int n) {
    if (n < 0) {
        cout << "Khong tinh duoc " << endl;
        return -1; 
    }
    long long giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}

int main() {
    int n;

    cout << "Nhap mot so nguyen: ";
    cin >> n;

    long long ketQua = tinhGiaiThua(n);
    if (ketQua != -1) { 
        cout << "Giai thua cua " << n << " la: " << ketQua << endl;
    }

    return 0;
}


