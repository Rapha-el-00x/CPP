// This is one of my school assignment about students' biography.
// This code is messy, but it does the job well.
// Might come back later and modify a few once I've got the hang of it.
// For now, I'd just push this to my git repo.

#include <iostream>
#include <string>

int main() {
  // declare variables
  std::string nama, nim, telp, mail, kelas, hobi, tgl, relg, address, prodi, faculty, department;
  char prompt;
  int umur;
  std::cout << "\n      --- FORM BIODATA MAHASISWA ---\n" << std::endl;
  // name input
  std::cout << "Nama                : ";
  std::getline(std::cin, nama);
  // college class input
  std::cout << "Kelas               : ";
  std::getline(std::cin, kelas);
  // nim input
  std::cout << "NIM                 : ";
  std::getline(std::cin, nim);
  // faculty input
  std::cout << "Fakultas            : ";
  std::getline(std::cin, faculty);
  // department input
  std::cout << "Jurusan             : ";
  std::getline(std::cin, department);
  // study program input
  std::cout << "Program Studi       : ";
  std::getline(std::cin, prodi);
  // email input
  std::cout << "Email               : ";
  std::getline(std::cin, mail);
  // Phone number input
  std::cout << "No. Telp            : ";
  std::getline(std::cin, telp);
  // age input
  std::cout << "Umur                : ";
  std::cin >> umur;
  // birth date input
  // PS: I recently learned about 'cin.ignore()' cause how weird
  // the code behaves after inputting an integer beforehand..
  // might learn about buffer next time!
  std::cin.ignore(100, '\n');
  std::cout << "Tempat Tanggal Lahir: ";
  std::getline(std::cin, tgl);
  // religion input
  std::cout << "Agama               : ";
  std::getline(std::cin, relg);
  // address input
  std::cout << "Alamat lengkap      : ";
  std::getline(std::cin, address);
  // hobby input
  std::cout << "Hobi                : ";
  std::getline(std::cin, hobi); 
  // An interactive prompt! I got this from GeeksForGeeks.com, and it's really amazing.
  // combine it with ansi codes to make it colorful, it feels like a fresh made system!
  // im glad it also works on c++, 'cause ive been using ANSI with bash script on linux.
  std::cout << "\n" << "\033[32m" << "==>" << "\033[0m" << " Submit data mahasiswa? (Enter) ";
  // This actually a trick. The 'get()' function is empty and were stuck waiting for an input
  // because its supposed to read any CHARACTERS, including the NEW LINE (Enter) character!
  // The characte it READS doesn't matter what is. ABC, The Esc Key, ANYTHING.
  // Though you could get errors from this, but the idea still is good for a beginner like me to learn.
  std::cin.get();
  std::cout << "Data berhasil di submit!" << std::endl;
  // basic if-else, with a basic Logic using: '||' (OR).
  std::cout << "Tampilkan data mahasiswa? (Y/n) ";
  std::cin >> prompt;
  // removes the buffer again just in case
  std::cin.ignore(100, '\n');
  if (prompt == 'y' || prompt == 'Y') {
    std::cout << "\n" << "\033[33m" << "[ ----- PROFIL MAHASISWA ----- ]" << "\033[0m" << std::endl;
    std::cout << "Nama                : " << nama << std::endl;
    std::cout << "NIM                 : " << nim << std::endl;
    std::cout << "Kelas               : " << kelas << std::endl;
    std::cout << "Fakultas            : " << faculty << std::endl;
    std::cout << "Jurusan             : " << department << std::endl;
    std::cout << "Program Studi       : " << prodi << std::endl;
    std::cout << "Email               : " << mail << std::endl;
    std::cout << "No. Telp            : " << telp << std::endl;
    std::cout << "Tempat Tanggal Lahir: " << tgl << std::endl;
    std::cout << "Agama               : " << relg << std::endl;
    std::cout << "Alamat              : " << address << std::endl;
    std::cout << "Umur                : " << umur << " Tahun" << std::endl;
    std::cout << "Hobi                : " << hobi << std::endl;
    
  } else {
    std::cout << "\033[31m" << "Terimakasih, Sampai jumpa kembali!" << "\033[0m" << std::endl;
    return(0);
  }

  return 0;
}
