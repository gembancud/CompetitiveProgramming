#include <iostream>
#include <cmath>
using namespace std;
// ! NOT YET SOLVED
long long int m(int m){
    // long long int
}
int main()
{
    ios::sync_with_stdio(0);
    long long int x = pow(2, 10105);
    long long int y = pow(2, 123456);
    int out = (x % 10000) + (y % 10000);
    cout << out << endl;
}