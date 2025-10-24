#include <iostream>
using namespace std;
int recReverser (int n , int reversed_n ) {
    if (n == 0 ) {
        return reversed_n;
    } else {
        return recReverser ( n / 10 , reversed_n * 10 + n % 10 );
    }
}

int main() {
    int n;
    cin >> n;
    cout << recReverser ( n , 0 );
    return 0;
}
