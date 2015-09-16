#include <iostream>
#include <conio.h>
#include<stdlib.h>
#include "list.h"
using namespace std;

int main()
{
    int mn,idk,ddk;
    list l;
    address c,s;
    infotype b;
    (l).awal=NULL;
    do
    {
        system("cls");
        cout << "~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~ " << endl;
        cout << "1. Insert First" <<endl;
        cout << "2. Insert After" <<endl;
        cout << "3. Insert Last" <<endl;
        cout << "4. Delete First" <<endl;
        cout << "5. Delete After" <<endl;
        cout << "6. Delete Last" <<endl;
        cout << "7. View Data" <<endl;
        cout << "8. Search Element" << endl;
        cout << "9. Exit" << endl;
        cout << "Masukkan no menu yang diinginkan : ";
        cin >> mn;
        switch (mn)
        {
        case 1:
            system("cls");
            buat_baru(&b);
            c=alokasi(b);
            insertfirst(&l,c);
            break;
        case 2:
            system("cls");
            view(l);
            cout << "Masukkan data setelah ID Karyawan : "; cin>>idk;
             address r;
            r=(l).awal;
            while(info(r).idKar!=idk) {
                r=next(r);
            }
            buat_baru(&b);
            c=alokasi(b);
            insertafter(&l,c,r);
            break;
        case 3:
            system("cls");
            
			break;

        case 4:
            system("cls");
            address p;
            p = new Elmlist;
            deletefirst(&l,&p);
			break;

        case 5:
            system("cls");
            
			break;
        case 6:
            system("cls");
            
			break;
        case 7:
            system("cls");
            
            break;
        case 8:
            system("cls");
            cariid(&b);
            s=cari(l,b);
            cout<< "Data Karyawan berada pada data ke "<<s <<endl;
            cout<<endl;
            view(l);
            break;
        }
    }
    while(mn<9);
    return 0;
}
