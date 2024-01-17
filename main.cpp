    #include <iostream>
    #include <conio.h>
    using namespace std;

    int main()
    {
        int pilihan;
        float hasilb, bil1, bil2, hasil_penjumlahan, hasil_pengurangan, hasil_perkalian, hasil_pembagian;
        char lagi;

        cout << "|================================|" << endl;
        cout << "|  Program Kalkulator Sederhana  |" << endl;
        cout << "|================================|\n" << endl;

    menu:
        cout << "|==========================|" << endl;
        cout << "|      Pilih Menu (1-4)    |" << endl;
        cout << "|==========================|" << endl;
        cout << "|      1. Penjumlahan      |" << endl;
        cout << "|      2. Pengurangan      |" << endl;
        cout << "|      3. Perkalian        |" << endl;
        cout << "|      4. Pembagian        |" << endl;
        cout << "|==========================|" << endl;
        cout << "Pilihan : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "==== Penjumlahan ====\n" << endl;
            cout << "Input Bilangan Pertama : ";
            cin >> bil1;
            cout << "Input Bilangan Kedua : ";
            cin >> bil2;

            hasil_penjumlahan = bil1 + bil2;
            cout << endl;

            cout << "Hasil dari penjumlahan adalah " << hasil_penjumlahan << endl;

            cout << "Hitung Lagi ?";
            cin >> lagi;

            if (lagi == 'y')
            {
                getch();
                goto menu;
            }
            else 
            {
                break;
            }
    case 2:
        cout << "==== Pengurangan ====\n" << endl;

        cout << "Input Bilangan Pertama : ";
        cin >> bil1;
        cout << "Input Bilangan Kedua : ";
        cin >> bil2;

        hasil_pengurangan = bil1 - bil2;
        cout << endl;

        cout << "Hasil dari pengurangan adalah " << hasil_pengurangan << endl;
        
        cout << "Hitung Lagi ?";
        cin >> lagi;

        if (lagi == 'y')
        {
            getch();
            goto menu;
        }
        else 
        {
            break;
        }
    case 3:
        cout << "==== Perkalian ====\n" << endl;

        cout << "Input Bilangan Pertama : ";
        cin >> bil1;
        cout << "Input Bilangan Kedua : ";
        cin >> bil2;

        hasil_perkalian = bil1 * bil2;
        cout << endl;

        cout << "Hasil dari perkalian adalah " << hasil_perkalian << endl;

        cout << "Hitung Lagi ?";
        cin >> lagi;

        if (lagi == 'y')
        {
            getch();
            goto menu;
        }
        else 
        {
            break;
        }
    case 4:
        cout << "==== Pembagian ====\n" << endl;

        cout << "Input Bilangan Pertama : ";
        cin >> bil1;
        cout << "Input Bilangan Kedua : ";
        cin >> bil2;

        hasil_pembagian = bil1 / bil2;
        cout << endl;

        cout << "Hasil dari pembagian adalah " << hasil_pembagian << endl;
        
        cout << "Hitung Lagi ?";
        cin >> lagi;

        if (lagi == 'y')
        {
            getch();
            goto menu;
        }
        else 
        {
            break;
        }
    default:
        break;
    }
}