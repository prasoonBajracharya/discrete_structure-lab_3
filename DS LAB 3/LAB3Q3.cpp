#include <iostream>
using namespace std;

int main() {
    cout << "g y l | g?y | g?y | (g?y)?l | y?!l | !g | Valid\n";
    cout << "--------------------------------------------------\n";

    for (int g = 0; g <= 1; g++) {
        for (int y = 0; y <= 1; y++) {
            for (int l = 0; l <= 1; l++) {
                int g_or_y = g || y;
                int g_and_y = g && y;
                int implication = (!g_and_y || l);
                int y_and_not_l = y && !l;
                int not_g = !g;

                int all_premises_true = g_or_y && implication && y_and_not_l;
                int valid_argument = (!all_premises_true || not_g);

                cout << g << " " << y << " " << l << " |  "
                     << g_or_y << "   |  " << g_and_y << "   |     "
                     << implication << "     |   " << y_and_not_l
                     << "   |  " << not_g << "  |   " << valid_argument << "\n";
            }
        }
    }

    return 0;
}
