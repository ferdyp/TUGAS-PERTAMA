#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;
main ()
{
char JK[20], prodi[20], nama [30], nim[10];
float nilai1, nilai2, nilai3, totalnilai;


cout<<"============================================="<<endl;
cout<<"                                            "<<endl;
cout<<"\t PROGRAM MENGHITUNG NILAI AKHIR        "<<endl;
cout<<"                                            "<<endl;
cout<<"============================================="<<endl;
cout<<endl;
cout<<"NIM           : ";cin>>nim;
cout<<"Nama          : ";cin>>nama;
cout<<"jenis Kelamin :";cin>>JK;
cout<<"Jurusan       :";cin>>prodi;
cout<<endl;
cout<<"Masukan Nilai Rata-rata\n"<<endl;
cout<<"Masukkan Nilai TUGAS Anda : "; cin>>nilai1;
cout<<"Masukkan Nilai UTS Anda   : "; cin>>nilai2;
cout<<"Masukkan Nilai UAS Anda   : "; cin>>nilai3;


totalnilai=(nilai1*0.2+nilai2*0.4+nilai3*0.4);
cout<<"--------------------------------"<<endl;
if    (totalnilai >=85 && totalnilai <=100)
    cout<<"// Grade Yang Anda Peroleh: A //"<<endl;

    else if (totalnilai >=75 && totalnilai <=84)

    cout<<"// Grade Yang Anda Peroleh: B //"<<endl;

    else if (totalnilai >=65 && totalnilai <=75)

    cout<<"// Grade Yang Anda Peroleh: C //"<<endl;

    else if (totalnilai >=40 && totalnilai <=65)

    cout<<"// Grade Yang Anda Peroleh: D //"<<endl;

    else if (totalnilai >=0 && totalnilai <=40)

    cout<<"// Grade Yang Anda Peroleh: E //"<<endl;
    cout<<"--------------------------------"<<endl;



cout<<endl;
cout<<endl;
cout<<"-------------------------------------------"<<endl;
cout<<"Nama  : "<<nama<<endl;
cout<<"NIM   :"<<nim<<endl;
cout<<"Jenis Kelamin :"<<JK<<endl;
cout<<"Jurusan  :"<<prodi<<endl;
cout<<endl;
cout<<"Memperoleh Total Nilai :"<<totalnilai<<endl;
cout<<"Selama perjuangannya di STT PLN Jakarta"<<endl;
cout<<"-------------------------------------------"<<endl;
getch ();
}
