#include <iostream>
using namespace std;
int main(void) {

    int x, d, k;
    std::cin >> x >> d >> k;
    int a[k];
    a[0] = x;
    for (int i = 1; i < k; i++) {
        /* code */
        a[i] = a[i - 1] + d;
    }

    std::cout << a[k - 1] << std::endl;
    return 0;
}
