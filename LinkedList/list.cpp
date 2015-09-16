#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include "list.h"
using namespace std;
address alokasi (infotype x)
{
    address p=(address)malloc(sizeof(Elmlist));
    info(p)=x;
    return p;
}
void buat_baru(infotype *x)
{
    cout<< "=============INSERT DATA KARYAWAN============= "<<endl;
    infotype k;
    cout<<"Masukkan ID Karyawan  : ";
    cin>>k.idKar;
    cout<<"Masukkan Nama  : ";
    cin>>k.nama;
    cout<<"Masukkan Alamat  : ";
    cin>>k.alm;
    cout<<"Masukkan Jenis Kelamin  : ";
    cin>>k.jk;
    cout<<"Masukkan No. Tlp  : ";
    cin>>k.notlp;
    *x=k;
}

void insertfirst (list *l, address p)
{
    if((*l).awal==NULL)
    {
        (*l).awal=p;
        next((*l).awal)=NULL;


    }
    else
    {
        next(p)=NULL;
        next(p)=(*l).awal;
        (*l).awal=p;
    }
}

void insertafter(list *l, address p, address s)
{
    address Q;
    Q=(*l).awal;
    while (info(Q).idKar!=info(s).idKar)
    {
        Q=next(Q);
    }
    next(p)=NULL;
    next(p)=next(Q);
    next(Q)=p;

}

void deletefirst(list *l,address *p)
{
    *p=(*l).awal;
    (*l).awal=next((*l).awal);
    next(*p)=NULL;
    delete p;
}

void cariid(infotype *x)
{
    cout<< "=============CARI DATA KARYAWAN============= "<<endl;
    cout<<"Masukkan ID Karyawan yang dicari : ";
    cin>>(*x).idKar;
}
address cari(list l,infotype x)
{
    address Q;
    Q=(l).awal;
    while(Q!=NULL)
    {
        if(info(Q).idKar==x.idKar)
            return Q;
        else
            Q=next(Q);
    }
    return NULL;
}
