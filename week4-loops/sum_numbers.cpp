#include <iostream>
using namespace std;

int main() {
    int n;
    int sum=0;

    cout << "Enter a positive number (N):";
    cin >> n;

    // part 1: int i = 1;
    // part 2: i <= n;
    // part 3: i++;
    for (int i = 1; i <=n;i++) {
        sum +=i;
    }
    cout<< "The sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;

}   
       