#include <iostream> 
using namespace std;

	int tinhTong(int a, int b) {
    return a + b;
}

	int main() {
    int so1, so2;
   		cout << "Nhap so thu nhat: ";
   		cin >> so1;
  		cout << "Nhap so thu hai: ";
    	cin >> so2;
    int tong = tinhTong(so1, so2);
    	cout << "Tong hai so la: " << tong << endl;


 return 0;
 }

