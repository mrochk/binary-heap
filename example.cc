#include <iostream>
#include <cstdlib>

#include "binary_heap.hpp"

using namespace std;

int main() {
    srand(time(nullptr));
    int n_to_insert = 100'000;

    cout << "Creating a min-heap:\n\n";
    BinaryHeap<int> *min_heap = new BinaryHeap<int>;

    cout << "Inserting 100000 random integers in the min-heap...\n\n";
    cout.flush();
    for (int i = n_to_insert; i > 0; --i) min_heap->insert(rand() % 1000001);

    // Removing and printing the top element.
    for (int i = 0; i < 3; ++i) {
        cout << "Removing the top element...\n";
        cout << "Lowest integer => " << min_heap->pop_top() << '\n';
        cout << "Heap Size      => " << min_heap->get_size() << "\n";
        cout << "_____\n";
    }

    delete (min_heap);

    cout << "\nCreating a max-heap:\n\n";
    auto       compare  = [](int a, int b) { return a < b; };
    BinaryHeap<int> *max_heap = new BinaryHeap<int>(compare);

    cout << "Inserting 100000 random integers in the max-heap...\n\n";
    cout.flush();
    for (; n_to_insert > 0; --n_to_insert) max_heap->insert(rand() % 1000001);

    // Removing and printing the top element.
    for (int i = 0; i < 3; ++i) {
        cout << "Removing the top element...\n";
        cout << "Largest integer => " << max_heap->pop_top() << '\n';
        cout << "Heap size       => " << max_heap->get_size() << "\n";
        cout << "_____\n";
    }

    delete (max_heap);

    return EXIT_SUCCESS;
}
