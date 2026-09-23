class Node:
    def __init__(self, nama):
        self.nama = nama
        self.next = None


# Fungsi pembantu untuk mencetak isi list
def cetak_list(first, pesan):
    print(pesan)
    temp = first
    while temp is not None:
        print(temp.nama, end=" -> ")
        temp = temp.next
    print("None\n")


# -----------------------------------------------------------
# 1. INISIALISASI 5 NODE AWAL
# -----------------------------------------------------------
n1 = Node("Budi")
n2 = Node("Siti")
n3 = Node("Eko")
n4 = Node("Dewi")
n5 = Node("Rian")

# Sambungkan: Budi -> Siti -> Eko -> Dewi -> Rian -> None
n1.next = n2
n2.next = n3
n3.next = n4
n4.next = n5

first = n1  # Referensi penanda awal (head)
cetak_list(first, "--- 1. List Awal (5 Node) ---")

# -----------------------------------------------------------
# 2. CONTOH OPERASI INSERT
# -----------------------------------------------------------
# A. Insert First: Tambah "Andi" di awal
n_awal = Node("Andi")
n_awal.next = first
first = n_awal

# B. Insert After/Middle: Tambah "Maya" setelah "Siti" (n2)
n_tengah = Node("Maya")
n_tengah.next = n2.next
n2.next = n_tengah

# C. Insert Last: Tambah "Zaki" setelah "Rian" (n5)
n_akhir = Node("Zaki")
n5.next = n_akhir

cetak_list(first, "--- 2. Setelah Diberi Insert (First, Middle, Last) ---")

# -----------------------------------------------------------
# 3. CONTOH OPERASI DELETE
# -----------------------------------------------------------
# A. Delete First: Hapus "Andi" (elemen pertama)
first = first.next  # first pindah dari Andi ke Budi

# B. Delete After/Middle: Hapus "Maya" (Siti langsung dihubungkan ke Eko / n3)
n2.next = n3

# C. Delete Last: Hapus "Zaki" (potong sambungan di Rian / n5)
n5.next = None

cetak_list(first, "--- 3. Setelah Diberi Delete (First, Middle, Last) ---")