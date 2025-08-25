#include <iostream>
#include <string>

using namespace std;

int main() {
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    cout << "Names of the months of the year:" << endl;
    for(int i = 0; i < 12; i++) {
        cout << months[i] << endl;
    }

    return 0;
}