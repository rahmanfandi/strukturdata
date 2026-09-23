#include <iostream>
#include <string>

struct Node {
  std::string nama;
  Node *next;
};

// Fungsi pembantu untuk mencetak isi list
void cetakList(Node *first, std::string pesan) {
  std::cout << pesan << std::endl;
  Node *temp = first;
  while (temp != nullptr) {
    std::cout << temp->nama << " -> ";
    temp = temp->next;
  }
  std::cout << "NULL\n\n";
}

int main() {
  // -----------------------------------------------------------
  // 1. INSISIALISASI 5 NODE AWAL
  // -----------------------------------------------------------
  Node n1 = {"Budi", nullptr};
  Node n2 = {"Siti", nullptr};
  Node n3 = {"Eko", nullptr};
  Node n4 = {"Dewi", nullptr};
  Node n5 = {"Rian", nullptr};

  // Sambungkan: Budi -> Siti -> Eko -> Dewi -> Rian -> NULL
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5;

  Node *first = &n1; // Pointer penanda awal
  cetakList(first, "--- 1. List Awal (5 Node) ---");

  // -----------------------------------------------------------
  // 2. CONTOH OPERASI INSERT
  // -----------------------------------------------------------
  // A. Insert First: Tambah "Andi" di awal
  Node nAwal = {"Andi", nullptr};
  nAwal.next = first;
  first = &nAwal;

  // B. Insert After/Middle: Tambah "Maya" setelah "Siti" (n2)
  Node nTengah = {"Maya", nullptr};
  nTengah.next = n2.next;
  n2.next = &nTengah;

  // C. Insert Last: Tambah "Zaki" setelah "Rian" (n5)
  Node nAkhir = {"Zaki", nullptr};
  n5.next = &nAkhir;

  cetakList(first, "--- 2. Setelah Diberi Insert (First, Middle, Last) ---");

  // -----------------------------------------------------------
  // 3. CONTOH OPERASI DELETE
  // -----------------------------------------------------------
  // A. Delete First: Hapus "Andi" (elemen pertama)
  first = first->next; // first pindah dari Andi ke Budi

  // B. Delete After/Middle: Hapus "Maya" (Siti langsung ditembakkan ke Eko)
  n2.next = &n3;

  // C. Delete Last: Hapus "Zaki" (potong sambungan di Rian / n5)
  n5.next = nullptr;

  cetakList(first, "--- 3. Setelah Diberi Delete (First, Middle, Last) ---");

  return 0;
}