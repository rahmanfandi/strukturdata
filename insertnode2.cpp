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

  // 2. Sambungkan ke-5 node
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5;

  // 3. Tentukan pointer FIRST ke elemen pertama
  Node *first = &n1;

  // -----------------------------------------------------------
  // TAMBAHAN CONTOH INSERT:
  // -----------------------------------------------------------

  // A. INSERT FIRST (Tambah "Andi" di paling depan)
  Node nAwal = {"Andi", nullptr};
  nAwal.next = first; 
  first = &nAwal;     // first sekarang menunjuk ke Andi

  // B. INSERT AFTER (Tambah "Maya" di tengah, setelah Siti / n2)
  Node nTengah = {"Maya", nullptr};
  nTengah.next = n2.next; // Maya menunjuk ke Eko (n3)
  n2.next = &nTengah;     // Siti (n2) menunjuk ke Maya

  // C. INSERT LAST (Tambah "Zaki" di paling belakang, setelah Rian / n5)
  Node nAkhir = {"Zaki", nullptr};
  n5.next = &nAkhir;      // Rian (n5) menunjuk ke Zaki

  // -----------------------------------------------------------
  // Cetak ulang hasil setelah di-insert
  // -----------------------------------------------------------
  std::cout << "Setelah di-insert:" << std::endl;
  Node *temp = first;
  while (temp != nullptr) {
    std::cout << temp->nama << " -> ";
    temp = temp->next;
  }
  std::cout << "NULL" << std::endl;

  return 0;
}