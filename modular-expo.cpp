// Created by HP on 14-Mar-18.
//
#include<bits/stdc++.h>
using namespace std;

long long int power(long long int a,long long int N,long long int M) {

    if (N == 0)
        return 1;

    long long int R = power(a, N / 2, M);
    if (N % 2 == 0)
        return ((R * R) % M);

    else
        return (((R * R) % M)  * (a % M) % M);

}

int main()
{
    long long int x, y, p, i, t;
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> x >> y >> p;
        cout << "Power is " << power(x, y, p) << "\n";
    }
    return 0;
}
/*Sample input
2
54015779 489100829 472960975
827371214 966345673 443599139
*/

/* output
  350431544
  391669493
*/
