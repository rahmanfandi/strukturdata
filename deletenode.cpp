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

  // 2. Sambungkan ke-5 node (Budi -> Siti -> Eko -> Dewi -> Rian -> NULL)
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5;

  Node *first = &n1; // first menunjuk ke Budi

  // -----------------------------------------------------------
  // CONTOH DELETE:
  // -----------------------------------------------------------

  // A. DELETE FIRST (Hapus "Budi" di depan)
  // Cukup geser pointer first ke node berikutnya (Siti)
  first = first->next; // first sekarang menunjuk ke Siti

  // B. DELETE AFTER / MIDDLE (Hapus "Eko" / n3 yang ada setelah Siti / n2)
  // Sambungan dilewati: n2 (Siti) langsung menunjuk ke n4 (Dewi)
  n2.next = &n4;

  // C. DELETE LAST (Hapus "Rian" / n5 di paling belakang)
  // Putus sambungan dengan mengubah next milik Dewi (n4) menjadi nullptr
  n4.next = nullptr;

  // -----------------------------------------------------------
  // Cetak hasil setelah di-delete
  // -----------------------------------------------------------
  std::cout << "Setelah di-delete:" << std::endl;
  Node *temp = first;
  while (temp != nullptr) {
    std::cout << temp->nama << " -> ";
    temp = temp->next;
  }
  std::cout << "NULL" << std::endl;

  return 0;
}