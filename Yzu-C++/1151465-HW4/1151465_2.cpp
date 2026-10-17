#include <iostream>
using namespace std;
int p(int n, int k) {
    int result = 1;
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
    }
    return result;
}
int main() {
    cout << "Enter n and k: "<<endl;
    int n, k;
    cin >> n >> k;
    cout << "P(" << n << ", " << k << ") = " << p(n, k) << endl;
    return 0;
}