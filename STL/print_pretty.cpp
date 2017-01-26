//
// Created by Miguel Rentes on 23/01/2017.
//

#include "STL.h"

int main(void) {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;
        // pretty printing A
        cout << setw(2) << "0x" << setw(13) << left << hex << (int) A << endl;
        // pretty printing B
        // width is 15 minus the number of digits of B
        // because 1 character is for the '.', and 2 for the decimal places
        // so the width is 15 - 1 - 2 = 12 minus the number of digits of B
        unsigned int number_of_digits = 0;
        double dx = B < 0.0 ? -0.5 : 0.5;
        int number = static_cast<int>(B + dx);
        if (number < 0)
            number = -number;
        do {
            ++number_of_digits;
            number /= 10;
        } while (number);
        cout << fixed << setfill('_') << setw(12-number_of_digits);
        if (B > 0)
            cout << right << "+" << setprecision(2) <<  B << endl;
        else cout << right << "" << setprecision(2) << B << endl;
        // pretty printing C
        cout << scientific << setprecision(9) << C << endl;
    }

    return EXIT_SUCCESS;
}

