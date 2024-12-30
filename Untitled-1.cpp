#include <iostream>
#include <string>

using namespace std;

int main() {
    string username = "user123"; // set username
    string password = "pass123"; // set password
    string input_username, input_password; // inisialisasi variabel untuk input username dan password
    
    // Meminta input username dan password
    cout << "Masukkan username: ";
    cin >> input_username;
    cout << "Masukkan password: ";
    cin >> input_password;
    
    // Memeriksa apakah input username dan password sesuai dengan username dan password yang telah ditetapkan
    if (input_username == username && input_password == password) {
        cout << "Login berhasil!" << endl;
    } else {
        cout << "Username atau password salah. Silahkan coba lagi." << endl;
    }
    
    return 0;
}