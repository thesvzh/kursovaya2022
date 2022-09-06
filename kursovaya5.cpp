#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

int XOR(int a,  int b)
{
    return (a + b) % 2;
}

int main() {
    int i, j, k, p, c;

    int n  =  28;

    ofstream out;
    out.open("results_5.txt");
    long long int m = pow(2, n);

    /*long long int a[n+1][m+1];

    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            a[i][j] = 0;

    for (j = 1; j <= n; j++) {
        k = m / (pow(2, j));
        p = 0;
        c = 0;

        for (i = k + 1; i <= m; i++) {
            if (p < k) {
                a[j][i] = 1;
                p++;
            }
            else if(c < k-1) {
                a[j][i] = 0;
                c++;
            }
            else {
                p = 0;
                c = 0;
            }

        }
    }

    for (j = 1; j <= m; j++) {
        //int f = 0;
        for(i = 1; i <= n; i++)
        {
            out << a[i][j] << " ";
            //f = XOR(f,  a[i][j]) ;
        }
        //out << f;

    out << endl;
    }
*/
    float res5  =  log2(n);
    long long int value5  = int(res5);
    if (res5 !=  float(value5))
    {
        value5 += 1;
    }
    out << endl << "-----------" << endl;
    out << m << endl;
    out << value5 << endl;
    out << n-1 << endl;
    out << endl;

    return 0;
}
