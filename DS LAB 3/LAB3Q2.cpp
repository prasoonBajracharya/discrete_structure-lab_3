#include <iostream>
using namespace std;

int main() {
    cout << "p q | p->q | !q | !p | Valid\n";
    cout << "-----------------------------\n";

    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            int implication = (!p || q);
            int not_q = !q;
            int not_p = !p;

            bool valid_argument = (implication && not_q) ? (not_p) : true;

            cout << p << " " << q << " |  " << implication
                 << "   | " << not_q << "  | " << not_p
                 << "  |   " << valid_argument << "\n";
        }
    }

    return 0;
}
