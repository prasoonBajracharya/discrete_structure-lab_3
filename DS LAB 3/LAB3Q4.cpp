#include <iostream>
using namespace std;

int main() {
    cout << "m j s | m?j | j?s | m?s | Valid\n";
    cout << "----------------------------------\n";

    for (int m = 0; m <= 1; m++) {
        for (int j = 0; j <= 1; j++) {
            for (int s = 0; s <= 1; s++) {
                int premise1 = (!m || j); 
                int premise2 = (!j || s); 
                int conclusion = (!m || s);

                int all_premises_true = premise1 && premise2;
                int valid_argument = (!all_premises_true || conclusion);

                cout << m << " " << j << " " << s << " |  "
                     << premise1 << "   |  " << premise2 << "   |  "
                     << conclusion << "   |   " << valid_argument << "\n";
            }
        }
    }

    return 0;
}
