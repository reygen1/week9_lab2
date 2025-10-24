#include <iostream>
using namespace std;
int rec_sum (int n ) {
    if (n == 0 ) {
        return n;
    } else {
        return n + rec_sum(n -2);
    }
}
int main () {
    int a;
    cin >> a;
    int b = (a%2 == 0)? rec_sum(a) : rec_sum(a-1);
    cout << b << endl;
}
