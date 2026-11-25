#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a>b && b>c) cout << "path 1";
    else if (a>b && a>c) cout << "path 2";
    else if (a>b) cout << "path 3";
    else if (a>c) cout << "path 4";
    else if (b>c) cout << "path 5";
    else cout << "path 6";
    

  return 0;

}