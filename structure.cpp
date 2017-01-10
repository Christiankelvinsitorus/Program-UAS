#include <conio.h>
#include <iostream.h>
#include <stdio.h>
main()
{
 struct
 {
  char nim[10];
  char nama[15];
  int nilai;
 } mahasiswa;

clrscr();
cout<<"masukkan NIM = ";
cin>>mahasiswa.nim;
cout<<"masukkan Nama = ";
cin>>mahasiswa.nama;
cout<<"masukkan nilai akhir = ";
cin>>mahasiswa.nilai;
cout<<"\n\nData yang diinput adalah :\n\n";
cout<<"NIM ="<<mahasiswa.nim<<endl;
cout<<"Nama ="<<mahasiswa.nama<<endl;
cout<<"Nilai Akhir ="<<mahasiswa.nilai<<endl;
getch();
}
