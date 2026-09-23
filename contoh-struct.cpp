#include <iostream>
#include <string>

// 1. Tipe Data (ADT)
struct Mahasiswa {
  std::string nama;
  std::string nim;
};

// 2. Operasi ADT: Membuat/mengisi data mahasiswa
Mahasiswa buatMahasiswa(std::string nama, std::string nim) {
  Mahasiswa mhs;
  mhs.nama = nama;
  mhs.nim = nim;
  return mhs;
}

// 3. Operasi ADT: Menampilkan data mahasiswa
void cetakMahasiswa(Mahasiswa mhs) {
  std::cout << "NIM  : " << mhs.nim << std::endl;
  std::cout << "Nama : " << mhs.nama << std::endl;
}

int main() {
  // Memakai ADT Mahasiswa
  Mahasiswa mhs1 = buatMahasiswa("budi  werkudoro", "230101001");
  Mahasiswa mhs2 = buatMahasiswa("syeh haji lemper ", "234234234");
  Mahasiswa mhs3 = buatMahasiswa("john moana trenggiling ", "234234");

  cetakMahasiswa(mhs1);

  return 0;
}