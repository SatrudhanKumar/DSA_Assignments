#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string a;
     string b;
    
    cin >> a;
    cin >> b;
 
    cout << a.length() << " " << b.length() << std::endl;
    string c = a + b;
    cout << c << std::endl;
    string temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp[0];
    cout << a << " " << b;
    
    return 0;
}
