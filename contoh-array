#include <iostream>
#include <string>

// Fungsi untuk menukar data tanpa struct (harus tukar dua-duanya)
void tukarMahasiswa(std::string nama[], std::string nim[], int pos1, int pos2) {
  // 1. Tukar nama
  std::string tempNama = nama[pos1];
  nama[pos1] = nama[pos2];
  nama[pos2] = tempNama;

  // 2. Tukar NIM (harus diingat! kalau lupa, data jadi acak-acakan)
  std::string tempNim = nim[pos1];
  nim[pos1] = nim[pos2];
  nim[pos2] = tempNim;
}

int main() {
  // Data terpisah di 2 array berbeda
  std::string nama[3] = {"Budi Santoso", "Siti Aminah", "Eko Prasetyo"};
  std::string nim[3] = {"230101001", "230101002", "230101003"};

  // Menukar data mahasiswa indeks 0 (Budi) dan 2 (Eko)
  tukarMahasiswa(nama, nim, 0, 2);

  std::cout << "Data setelah ditukar:" << std::endl;
  for (int i = 0; i < 3; i++) {
    std::cout << nim[i] << " - " << nama[i] << std::endl;
  }

  return 0;
}