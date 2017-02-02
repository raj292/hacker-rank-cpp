//
// Created by Miguel Rentes on 30/01/2017.
//

#include "STL.h"

void printKMax(int arr[], int n, int k) {
    deque<int> mydeque;
    int greatest = 0;
    // creating the deque from the array k-elements
    for (int i = 0; i < n-k+1; i++) {
        for (int j = i; j < i+k; j++) {
            mydeque.push_back(arr[j]);
        }
        // after each evaluation we pop the front value
        for (int j = 0; j < k; j++) {
            int value_front;
            value_front = mydeque.front();
            mydeque.pop_front();
            if (value_front > greatest)
                greatest = value_front;
        }
        cout << greatest << " ";
        greatest = 0;
    }
    cout << endl;
}

int main(void) {
    int t;
    cin >> t;
    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return EXIT_SUCCESS;
}