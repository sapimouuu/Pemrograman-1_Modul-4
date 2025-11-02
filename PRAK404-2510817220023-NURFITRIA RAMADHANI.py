while True:
    pil = int(input("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\nMasukkan Pilihan : "))
    if pil==1:
        nil1=float(input("Masukkan nilai pertama : "))
        nil2=float(input("Masukkan nilai kedua : "))
        hasil = nil1+nil2
        print(f"Hasil penjumlahan antara {nil1:.2f} dengan {nil2:.2f} adalah {hasil:.2f}\n")
    elif pil==2:
        nil1=float(input("Masukkan nilai pertama : "))
        nil2=float(input("Masukkan nilai kedua : "))
        hasil = nil1-nil2
        print(f"Hasil pengurangan antara {nil1:.2f} dengan {nil2:.2f} adalah {hasil:.2f}\n")
    elif pil==3:
        nil1=float(input("Masukkan nilai pertama : "))
        nil2=float(input("Masukkan nilai kedua : "))
        hasil = nil1*nil2
        print(f"Hasil perkalian antara {nil1:.2f} dengan {nil2:.2f} adalah {hasil:.2f}\n")
    elif pil==4:
        nil1=float(input("Masukkan nilai pertama : "))
        nil2=float(input("Masukkan nilai kedua : "))
        hasil = nil1/nil2
        print(f"Hasil pembagian antara {nil1:.2f} dengan {nil2:.2f} adalah {hasil:.2f}\n")
    elif pil==5:
        print("Terimakasih telah menggunakan Kalkulator Nurfitria Ramadhani")
        break
    else:
        print("Input anda salah, silakan coba lagi\n")