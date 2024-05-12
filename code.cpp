#include <iostream>
using namespace std;

int Nhapluachon() {
    int choice;
    cout << "\nDU AN LAP TRINH PBL 1\n"
         << "THUC HIEN BOI: HUYNH THIEN LOC & PHAM VIET DUY\n"
         << "=== UNG DUNG QUAN LY NHA HANG ===\n"
         << "1. QUAN LY DAT BAN TAI CHO\n"
         << "2. QUAN LY DAT BAN TRUOC\n"
         << "3. QUAN LY THUC DON\n"
         << "4. QUAN LY NHAN SU\n"
         << "5. BAO CAO VA THONG KE\n"
         << "0. THOAT\n\n"
         << "NHAP LUA CHON : ";
    cin >> choice;
    return choice;
}

int main() {
    int choice;
    choice = Nhapluachon();

    // Xử lý lựa chọn ở đây

    return 0;
}
