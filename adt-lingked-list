#include <iostream>
#include <string>

// 1. Definisi Node
struct Node {
  std::string nama;
  std::string nim;
  Node *next; // Pointer yang menunjuk ke Node berikutnya
};

// 2. Fungsi untuk menambah node baru di depan list
void tambahDepan(Node *&head, std::string nama, std::string nim) {
  // Alokasi memori untuk node baru
  Node *nodeBaru = new Node();

  // Isi data node baru
  nodeBaru->nama = nama;
  nodeBaru->nim = nim;

  // Hubungkan node baru ke head yang lama
  nodeBaru->next = head;

  // Geser head ke node yang baru
  head = nodeBaru;
}

// 3. Fungsi untuk mencetak seluruh isi Linked List
void cetakList(Node *head) {
  Node *temp = head; // Pointer bantuan untuk melintasi list

  std::cout << "=== DAFTAR MAHASISWA (LINKED LIST) ===" << std::endl;
  while (temp != nullptr) { // Ulangi sampai ujung list (nullptr)
    std::cout << "NIM  : " << temp->nim << std::endl;
    std::cout << "Nama : " << temp->nama << std::endl;
    std::cout << "--------------------" << std::endl;

    temp = temp->next; // Pindah ke node berikutnya
  }
}

int main() {
  Node *head = nullptr; // Awalnya list kosong

  // Menambahkan 3 mahasiswa
  tambahDepan(head, "Eko Prasetyo", "230101003");
  tambahDepan(head, "Siti Aminah", "230101002");
  tambahDepan(head, "Budi Santoso", "230101001");

  // Menampilkan isi list
  cetakList(head);

  return 0;
}