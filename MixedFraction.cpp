Link to problem: https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=362


/**
* @Author: Joakim Olsson <lomo133>
* @Date:   2018-12-08T17:58:52+01:00
 * @Last modified by:   lomo133
 * @Last modified time: 2018-12-08T17:58:58+01:00
*/

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    freopen("mixin.txt", "r", stdin);
    freopen("mixout.txt", "w", stdout);

    int n,d,a,b;
    cin >> n >> d;
    a = n/d;
    b = n-a*d;

    if (b == 0)
    cout<<a;
    else
    cout<<a<<" "<<b<<"/"<<d;

    return 0;
}
