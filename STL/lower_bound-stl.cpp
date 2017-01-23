//
// Created by Miguel Rentes on 19/01/2017.
//

#include "STL.h"

int main(void) {
    unsigned int number_elements;
    unsigned int number_queries;
    unsigned int element;
    vector <unsigned int> elements;
    vector<unsigned int>::iterator it;
    cin >> number_elements;
    for (int i = 0; i < number_elements; i++) {
        if (cin >> element) {
            elements.push_back(element);
        }
    }
    cin >> number_queries;
    for (int i = 0; i < number_queries; i++) {
        cin >> element;
        it = lower_bound(elements.begin(), elements.end(), element);
        if (elements.begin() != elements.end() && !(element<*elements.begin()) && element == *it) {
            cout << "Yes " << it - elements.begin() + 1 << endl;
        }
        else {
            cout << "No " << it - elements.begin() + 1 << endl;
        }
    }

    return EXIT_SUCCESS;
}