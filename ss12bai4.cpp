#include <iostream>
using namespace std;

int timMax(int arr[], int size) {
    if (size <= 0) {
        cout << "Mang rong, khong co gia tri lon nhat" << endl;
        return -1; 
    }

    int maxVal = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int n;

    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    if (n <= 0) {
        cout << "So luong phan tu khong hop le!" << endl;
        return 0;
    }

    int arr[n];

    cout << "Nhap cac phan tu cua mang: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }

    int maxVal = timMax(arr, n);
    if (maxVal != -1) { 
        cout << "So lon nhat trong mang la: " << maxVal << endl;
    }

    return 0;
}

