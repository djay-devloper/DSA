#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;  
    cout << "Enter a number: ";
    cin >> num;
    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= num);
    cout << "The sum of numbers up to " << num << " is: " << sum << endl;
    return 0;
}
