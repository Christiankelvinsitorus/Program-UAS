#include <stdio.h>
#include <conio.h>
#include <iostream.h>


main()
{
 int i,j=1,k=1;
  struct
  {
   char nim[10];
   char nama[15];
   float nilai;
  }mhs[5];

clrscr();
for(i=0;i<2;i++)
{
 cout<<"Data ke- "<<j++<<endl;
 cout<<"Masukkan NIM = "; cin>>mhs[i].nim;
 cout<<"Masukkan Nama = "; cin>>mhs[i].nama;
 cout<<"Masukkan nilai akhir = "; cin>>mhs[i].nilai;
 cout<<endl;
}

clrscr();
for(i=0;i<2;i++)
{
 cout<<"Data ke- "<<k++<<endl;
 cout<<"NIM ="<<mhs[i].nim<<endl;
  cout<<"Nama ="<<mhs[i].nama<<endl;
  cout<<"Nilai Akhir ="<<mhs[i].nilai<<endl;
  cout<<"Keterangan Yang Didapat =";
  cout<<endl;
}
getch();
}

