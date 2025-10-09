#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return n + sum(n - 1);
}

int main() {
    int n, result;
    
    cout << "Nhap so nguyen duong n (n > 1): ";
    cin >> n;
    
    if (n < 1) {
        cout << "n khong hop le!" << endl;
    } else {
        result = sum(n);
        cout << "Tong cac so nguyen duong tu 1 den " << n << " = " << result;
    }
    
    return 0;
}