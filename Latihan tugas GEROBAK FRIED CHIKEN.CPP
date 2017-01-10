#include <conio.h>
#include <iostream>
#include <stdio.h>
main()
{
int x,a,ulang;
char jenis[6]={'D','d','P','p','S','s'},*ket[6];
long bapot[6],jumhar[6]={0},hasat[6]=
{2500,2000,1500};
long jumbar[6]={0},pajak[6],totbal[6];
pesan;
clrssr();
cout<<"\tGEROBAK FRIED CHIKEN\n";
cout<<"\t----------------------\n";
cout<<"\tcode jenis harga\n";
cout<<"t-----------------------\n";
cout<<"\t[D] dada Rp.2500\n";
cout<<"\t[P] paha Rp.2000\n";
cout<<"\t[S] sayap Rp.1500\n";
cout<<"\t--------------------\n";
cout<<"\tBanyak jenis ;";cin>>x;
jumbar[x]=0
if (x<=0)
{
cout<<"\n\t\tBanyak Jenis Tidak Boleh Null";
goto akhir;
}
else
{
for(a=1;a<=x;++a)
}
cout<<"\tjenis ke-"<<a;
cout<<"\n\tJenis potong[D/P/S]:";cin>>bapot[a];
cout<<"\t-----------------\n";
if(jenis[a]=='D'||jenis[a]=='d')
{
ket[a]="Dada";
hasat[a]=2500";
}
else if (jenis[a]=='P'||jenis[a]=='p')
{
ket[a]="Paha";
hasat[a]a=2000";
}
else if (jenis [a]=='S'||jenis[a]=='s')
{
ket[a]a="Sayap"
hasat[a]a=1500";
}
else
{
cout<<"\nAnda salah masukan kode jenis potongan.";
hasat[a]=0;
}
jumhar[a]=hasat[a]*bapot[a];
jumbar[x]=jumbar[x]+hasat[a]*bapot[a];
if(jumbar[x]==0)
{
pajak[x]=0;
totba[x]=0;
}
else
{
pajak[x]=jumbar[x]*0.1;
totba[x]=jumbar[x]+pajak[x];
}
}
}
cout<<"\n\n\tGEROBAK FRIED CHIKEN\n:
cout<<"--------------------------\n;
cout<<"No.|jenis|Harga|Banyak|jumlah\n"
cout<<"
