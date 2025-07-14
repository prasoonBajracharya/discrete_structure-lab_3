#include <iostream>
using namespace std;

int main() {
    cout << "p q r | => | <=>\n";

    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            for (int r = 0; r <= 1; r++) {
                int a = (p && !q) || r;
                int b = (!p || r);

                int implication = (!a || b);
                int biconditional = (a == b);

                cout << p << " " << q << " " << r << " | " << implication << " | " << biconditional << "\n";
            }
        }
    }

    return 0;
}
