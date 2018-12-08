Link to problem: https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=412

/**
* @Author: Joakim Olsson <lomo133>
* @Date:   2018-12-08T18:02:43+01:00
 * @Last modified by:   lomo133
 * @Last modified time: 2018-12-08T18:03:04+01:00
*/

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    freopen("encyin.txt", "r", stdin);
    freopen("encyout.txt", "w", stdout);

    int n, q, x, pages;

    int arr[n];

    cin >> n >> q;

    for (int i = 0; i < n; i++) {
        cin >> pages;
        arr[i] = pages;
    }

    for (int i = 0; i < q; i++) {
        cin >> x;
        cout << arr[x-1] << endl;
    }
    return 0;
}
