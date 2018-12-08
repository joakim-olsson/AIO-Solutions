Link to problem: https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=398

/**
* @Author: Joakim Olsson <lomo133>
* @Date:   2018-12-08T18:01:28+01:00
 * @Last modified by:   lomo133
 * @Last modified time: 2018-12-08T18:01:33+01:00
*/

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    freopen("rainin.txt", "r", stdin);
    freopen("rainout.txt", "w", stdout);

    int days, capacity, litres;
    int l = 0;

    cin >> days >> capacity;

    for (int i = 0; i <= days; i++) {

        if (l >= capacity) {
            cout << i << endl;
            return 0;
        }
        cin >> litres;
        l += litres;
    }
    return 0;
}
