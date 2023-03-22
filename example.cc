#include <bits/stdc++.h>

#include "heap.h"

using namespace std;

int main() {
    srand(time(nullptr));

    // Creating a new empty min Heap of Integers.
    Heap<int> *h = new Heap<int>;

    // Inserting 1000 random integers.
    for (int i = 1000; i > 0; --i) h->insert(new Node<int>(rand() % 1000001));

    // Removing and printing the top element.
    for (int i = 0; i < 3; ++i) {
        cout << "Top Element => " << h->pop_top() << '\n';
        cout << "Heap Size => " << h->get_size() << "\n";
        cout << "_____\n";
    }

    delete (h);
    return 0;
}