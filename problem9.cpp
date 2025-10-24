#include <iostream>
using namespace std;
int maxdig(int n) {
    if (n == 0) {
        return 0;
    }
    int dig=n%10;
    int max=maxdig(n/10);
    if (dig>max)
        return dig;
    else
        return max;
}
int main() {
    int n;
    cin>>n;
    cout<<maxdig(n)<<endl;
    return 0;

}