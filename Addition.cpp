/**
* @Author: Joakim Olsson <lomo133>
* @Date:   2018-12-08T17:55:05+01:00
 * @Last modified by:   lomo133
 * @Last modified time: 2018-12-08T17:55:29+01:00
*/

#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    freopen("addin.txt", "r", stdin);
    freopen("addout.txt", "w", stdout);

    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}
