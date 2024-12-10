#include <iostream>
using namespace std;

	void inMang(int arr[], int size) {
   		 cout << "Cac phan tu trong mang la: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
   		cout << endl;
}	

int main() {
    int n;

    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    int arr[n];

    cout << "Nhap cac phan tu cua mang: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }

    inMang(arr, n);

    return 0;
}


