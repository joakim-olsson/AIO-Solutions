Link to problem: https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=413

/**
* @Author: Joakim Olsson <lomo133>
* @Date:   2018-12-08T18:03:36+01:00
 * @Last modified by:   lomo133
 * @Last modified time: 2018-12-08T18:04:02+01:00
*/

#include <cstdio>
#include <iostream>
#include "map"
using namespace std;

int main() {
    freopen("dictin.txt", "r", stdin);
    freopen("dictout.txt", "w", stdout);

    int d, w, key, value;
    cin >> d >> w;

    map <int, int> dict;

    for (int i = 0; i < d; i++) {
        cin >> key >> value;
        dict[key] = value;
    }

    for (int i = 0; i < w; i++) {
        cin >> key;
        if (dict[key] == 0)
            cout << "C?" << endl;
        else
            cout << dict[key] << endl;
    }
    return 0;
}
