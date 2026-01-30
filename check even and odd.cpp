#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "The number " << num << " is Even." << endl;
    } else {
        cout << "The number " << num << " is Odd." << endl;
    }

    return 0;
}
