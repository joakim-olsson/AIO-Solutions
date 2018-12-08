Link to problem: https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=383

/**
* @Author: Joakim Olsson <lomo133>
* @Date:   2018-12-08T18:00:38+01:00
 * @Last modified by:   lomo133
 * @Last modified time: 2018-12-08T18:00:58+01:00
*/

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    freopen("countin.txt", "r", stdin);
    freopen("countout.txt", "w", stdout);

    int n = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
    return 0;
}
