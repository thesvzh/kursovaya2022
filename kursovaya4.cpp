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

    int n  =  16;

    ofstream out;
    out.open("results_4.txt");
    int m = pow(2, n);

    int a[n+1][m+1];

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

    float res4  =  log2(n);
    int value4  =  int(res4);
    if (res4 !=  float(value4))
    {
        value4 += 1;
    }
    out << endl << "-----------" << endl;
    out << m << endl;
    out << value4 << endl;
    out << n-1 << endl;
    out << endl;

    return 0;
}
