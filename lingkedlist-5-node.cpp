#include <iostream>
#include <string>

struct Node {
  std::string nama;
  Node *next;
};

int main() {
  // 1. Buat 5 node secara mandiri
  Node n1 = {"Budi", nullptr};
  Node n2 = {"Siti", nullptr};
  Node n3 = {"Eko", nullptr};
  Node n4 = {"Dewi", nullptr};
  Node n5 = {"Rian", nullptr};

  // 2. Sambungkan ke-5 node menjadi satu rantai (n1 -> n2 -> n3 -> n4 -> n5 ->
  // nullptr)
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5; // n5.next tetap nullptr karena ini ujungnya

  // 3. Tentukan pointer FIRST ke elemen pertama
  Node *first = &n1;

  // 4. Penelusuran (traversal) dimulai dari FIRST
  Node *temp = first;
  while (temp != nullptr) {
    std::cout << temp->nama << " -> ";
    temp = temp->next;
  }
  std::cout << "NULL" << std::endl;

  return 0;
}