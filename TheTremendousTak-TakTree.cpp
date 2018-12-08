Link to problem: https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=382

/**
* @Author: Joakim Olsson <lomo133>
* @Date:   2018-12-08T17:59:45+01:00
 * @Last modified by:   lomo133
 * @Last modified time: 2018-12-08T18:00:11+01:00
*/

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    freopen("taktakin.txt", "r", stdin);
    freopen("taktakout.txt", "w", stdout);

    int fruits;
    int counter = 0;

    cin >> fruits;

    if (fruits % 11 == 1) {
        cout << 0 << " " << fruits;
    } else {
        while (true) {
            fruits *= 2;
            counter++;
            if (fruits % 11 == 1){
                cout << counter << " " << fruits;
                break;
            }
        }
    }
    return 0;
}
