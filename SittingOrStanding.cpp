Link to problem: https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=342


/**
* @Author: Joakim Olsson <lomo133>
* @Date:   2018-12-08T17:57:46+01:00
 * @Last modified by:   lomo133
 * @Last modified time: 2018-12-08T17:58:13+01:00
*/

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    freopen("sitin.txt", "r", stdin);
    freopen("sitout.txt", "w", stdout);

    int a, b, c;
    cin >> a >> b;
    cin >> c;

    if (a*b < c)
    cout << a*b << " " << c-a*b;
    else
    cout << c << " 0" ;
}
