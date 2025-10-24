#include<iostream>
using namespace std;
int digitCount (int a , int b  ) {

    if ( a == 0) {
        return b;
    } else {
        return digitCount(a / 10, b +1);
    }

}

int main() {

    int a;
    cin >> a;

    cout << digitCount(a,0) << endl;
}
