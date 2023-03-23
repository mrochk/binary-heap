#include <bits/stdc++.h>

#include "heap.h"

using namespace std;

int main() {
  srand(time(nullptr));
  int n_to_insert = 100'000;

  cout << "Creating a Min-Heap:\n\n";
  Heap<int> *min_heap = new Heap<int>;

  cout << "Inserting 100000 random integers in the Min-Heap...\n\n";
  cout.flush();
  for (int i = n_to_insert; i > 0; --i)
    min_heap->insert(rand() % 1000001);

  // Removing and printing the top element.
  for (int i = 0; i < 3; ++i) {
    cout << "Removing the top element.\n";
    cout << "Top Element => " << min_heap->pop_top() << '\n';
    cout << "Heap Size => " << min_heap->get_size() << "\n";
    cout << "_____\n";
  }

  delete (min_heap);

  cout << "\nCreating a Max-Heap:\n\n";
  auto compare = [](int a, int b) { return a < b; };
  Heap<int> *max_heap = new Heap<int>(compare);

  cout << "Inserting 100000 random integers in the Max-Heap...\n\n";
  cout.flush();
  for (; n_to_insert > 0; --n_to_insert)
    max_heap->insert(rand() % 1000001);

  // Removing and printing the top element.
  for (int i = 0; i < 3; ++i) {
    cout << "Removing the top element.\n";
    cout << "Top Element => " << max_heap->pop_top() << '\n';
    cout << "Heap Size => " << max_heap->get_size() << "\n";
    cout << "_____\n";
  }

  delete (max_heap);

  return EXIT_SUCCESS;
}
