#include <iostream>

using namespace std;

int main()
{
    int n, m; 
 
    n = 5; m = 5; 
    int rez1 = n++ * m; 
    cout << "1) n++ * m = " << rez1 << " (n = " << n << ", m = " << m << ")" << endl; 
 
    n = 5; m = 5; 
    bool rez2 = n++ < m; 
    cout << "2) n++ < m = " << rez2 << " (n = " << n << ", m = " << m << ")" << endl; 
 
    n = 5; m = 5; 
    bool rez3 = m-- > n; 
    cout << "3) m-- > n = " << rez3 << " (n = " << n << ", m = " << m << ")" << endl; 
 
    return 0;
}