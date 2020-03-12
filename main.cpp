#include <iostream>
#include <stdlib.h>>

using namespace std;

int main()
{
    int x[100][100], y[100][100], z[100][100];
    int b, k, i, j;
    int angka;

    cout << "Masukan baris matriks : ";
    cin >> b;
    cout << "Masukan kolom matriks : ";
    cin >> k;
    system ("cls");
    cout << endl << "Masukan nilai matriks A " << endl;
    for (i=0; i<b; i++)
    {
        for (j=0; j<k; j++)
        {
            cout << "Nilai [" << 1+i << "]" << "[" << 1+j << "] : ";
            cin >> x[i][j];
        }
    }
    system("cls");
    cout << endl << "Masukan nilai matriks B " << endl;
    for (i=0; i<b; i++)
    {
        for (j=0; j<k; j++)
        {
            cout << "Nilai [" << 1+i << "]" << "[" << 1+j << "] : ";
            cin >> y[i][j];
        }
    }
    system ("cls");
    cout << endl << "Pilih operasi : " << endl;
    cout << "1. Penambahan (+)" << endl;
    cout << "2. Pengurangan (-) " << endl;
    cout << "Masukan pilihan : ";
    cin >> angka;
    system ("cls");
    if (angka == 1)
    {
        cout << endl << "Hasil penjumlahan matriks : \n";
        for (i=0; i<b; i++)
        {
            for (j=0; j<k; j++)
            {
                z[i][j] = x[i][j] + y [i][j];
                cout << z[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else
        cout << endl << "Hasil pengurangan matriks : \n";
        for (i=0; i<b; i++)
        {
            for (j=0; j<k; j++)
            {
                z[i][j] = x[i][j] - y [i][j];
                cout << z[i][j] << "\t";
            }
            cout << endl;
        }


}
