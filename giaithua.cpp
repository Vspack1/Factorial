// giai thua
#include <iostream>
using namespace std;

int giaithua(int n) {
    if (n == 0) return 1;
    return n * giaithua(n - 1);
}

// Hàm tính tổng từ 1! đến n!
int tongGiaiThua(int n) {
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += giaithua(i);
    }
    return tong;
}

int main() {
    int n;
    cin >> n;
    cout << giaithua(n) << endl; // In giai thua n
    cout << tongGiaiThua(n); // In tong tu 1! den n!
    return 0;
}