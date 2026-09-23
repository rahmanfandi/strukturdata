#include <iostream>
#include <string>

struct Node {
  std::string nama;
  Node *next; // Menyimpan alamat Node berikutnya
};

int main() {
  Node n1 = {"Budi", nullptr};
  Node n2 = {"Siti", nullptr};

  n1.next = &n2; // Menyambungkan n1 ke n2

  // Akses data Siti melalui n1
  std::cout << n1.next->nama << std::endl; // Output: Siti

  return 0;
}