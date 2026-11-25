#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "===========" << endl;
    cout << "MULTIPLICATION TABLE" << endl;
    cout << "===========" << endl;
    cout << endl;

    //part1: int i = 1;
    //part2: i <= 10;
    //part3: i++
    for (int i = 1; i <= 10; i++) {
        //part1: int j = 1;
        //part2: j <= 10;
        //part3: j++
        for (int j = 1; j <= 10; j++) {
            //int product = i * j;
            cout << setw(5) << i * j;
        }
        cout << endl;
    }
    cout << "===========" << endl;


    return 0;
}