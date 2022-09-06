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

    int n  =  44;

    ofstream out;
    out.open("results_6.txt");
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
    float res6  =  log2(n);
    long long int value6  = int(res6);
    if (res6 !=  float(value6))
    {
        value6 += 1;
    }
    out << endl << "-----------" << endl;
    out << m << endl;
    out << value6 << endl;
    out << n-1 << endl;
    out << endl;

    return 0;
}
