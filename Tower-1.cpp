#include <iostream>
using namespace std;

void moveDisk(int num, char from_peg, char to_peg) {
    cout << "Move disk " << num << " from " << from_peg << " to " << to_peg << endl;
}

void towerOfHanoi(int n, char from_peg, char to_peg, char aux_peg) {
    if (n == 1) {
        moveDisk(1, from_peg, to_peg);
        return;
    }

    towerOfHanoi(n - 1, from_peg, aux_peg, to_peg);
    moveDisk(n, from_peg, to_peg);
    towerOfHanoi(n - 1, aux_peg, to_peg, from_peg);
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
