#include <conio.h>
#include <stdio.h>
#include <iostream.h>

struct
{
 char kh,kp,jnsh[10],jp[20];
   long int jh,bp,st;
}php[5];

char np[20],npem[20],idl;
long int jd,tb,ub,uk,a;

judul()
{
 cout<<"   Penitipan Hewan Pemeliharaan"<<endl;
   cout<<"       'Meaow Pet Care'"<<endl;
   cout<<"=================================="<<endl;
}

tobay()
{
 tb=tb+php[a].st;
}

main()
{
 awal:
   clrscr();
   tb=0;
   judul();
   cout<<"Nama Petugas :";cin>>np;
   cout<<"Nama Pemilik :";cin>>npem;
   cout<<"Jumlah Data Peliharaan :";cin>>jd;

   for(a=1;a<=jd;a++)
   {
    cout<<"Hewan ke-"<<a<<endl;
      cout<<"Kode Jenis Hewan :";cin>>php[a].kh;
      cout<<"Kode Perawatan   :";cin>>php[a].kp;
      cout<<"Jumlah Hewan     :";cin>>php[a].jh;

      if(php[a].kh=='K')
      {
       strcpy(php[a].jnsh,"Kucing");
         if(php[a].kp=='1')
         {
            strcpy(php[a].jp,"Lux");
          php[a].bp=25000;
         }
         else
         {
          strcpy(php[a].jp,"Intensif");
            php[a].bp=30000;
         }
      }
  else
      {
       strcpy(php[a].jnsh,"Hamster");
         if(php[a].kp=='1')
         {
            strcpy(php[a].jp,"Lux");
          php[a].bp=15000;
         }
         else
         {
          strcpy(php[a].jp,"Intensif");
            php[a].bp=10000;
         }
      }
   }

   clrscr();
   judul();
   cout<<"Nama Petugas : "<<np<<endl;
   cout<<"Nama Pemilik : "<<npem<<endl;
   cout<<"=================================================="<<endl;
   cout<<"No. Jenis    Jenis       Biaya     Jumlah Subtotal"<<endl;
   cout<<"    Hewan    Perawatan   Perawatan hewan"<<endl;
   cout<<"=================================================="<<endl;
        //12345678901234567890123456789012345678901234567890
   for(a=1;a<=jd;a++)
   {
    gotoxy(1,9+a);cout<<a;
      gotoxy(5,9+a);cout<<php[a].jnsh;
      gotoxy(14,9+a);cout<<php[a].jp;
      gotoxy(26,9+a);cout<<php[a].bp;
      gotoxy(36,9+a);cout<<php[a].jh;
      php[a].st=php[a].bp*php[a].jh;
      gotoxy(43,9+a);cout<<php[a].st<<endl;
      tobay();
   }
   cout<<"=================================================="<<endl;
   cout<<"               Total Bayar :Rp."<<tb<<endl;
   cout<<"               Uang Bayar  :Rp.";cin>>ub;
   uk=ub-tb;
   cout<<"               Uang Kembali:Rp."<<uk<<endl;
   cout<<"=================================================="<<endl;
   cout<<"Input data lagi [y/t] :";cin>>idl;
   if(idl=='y')
    goto awal;
   getch();
   }