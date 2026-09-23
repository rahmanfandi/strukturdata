#include <iostream>
#include <string>

struct Node {
  std::string nama;
  Node *next;
};

int main() {
  // List Awal: Budi -> Rian -> NULL
  Node n1 = {"Budi", nullptr};
  Node n2 = {"Rian", nullptr};
  n1.next = &n2;

  Node *first = &n1; // first menunjuk ke Budi

  // 1. INSERT FIRST (Tambah "Siti" di paling depan)
  Node nAwal = {"Siti", nullptr};
  nAwal.next = first; // Siti menunjuk ke Budi
  first = &nAwal;     // first pindah ke Siti

  // 2. INSERT AFTER (Tambah "Eko" di tengah, setelah Budi / n1)
  Node nTengah = {"Eko", nullptr};
  nTengah.next = n1.next; // Eko menunjuk ke Rian
  n1.next = &nTengah;     // Budi menunjuk ke Eko

  // 3. INSERT LAST (Tambah "Dewi" di paling belakang, setelah Rian / n2)
  Node nAkhir = {"Dewi", nullptr};
  n2.next = &nAkhir; // Rian menunjuk ke Dewi

  // Cetak Rantai
  Node *temp = first;
  while (temp != nullptr) {
    std::cout << temp->nama << " -> ";
    temp = temp->next;
  }
  std::cout << "NULL" << std::endl;

  return 0;
}