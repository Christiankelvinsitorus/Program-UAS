# include <conio.h>
# include <iostream.h>
# include <stdio.h>

siswa(float uts,float uas);
garis()
{
 printf("\n\t===============\n");
}
 main()
{
 char nim[10],nama[20],ket[10],lagi;
 float a,b,rata;

garis();
cout<<"\n\t Perhitungan Nilai Siswa"<<endl;
cout<<"\t" ;garis();
cout<<"\t Masukkan nim  :";cin>>nim;
cout<<"\t Masukkan nama :";cin>>nama;
cout<<"\t Nilai UTS     :";cin>>a;
cout<<"\t Nilai UAS     :";cin>>b;

rata=siswa(a,b);
 printf("\n\t Nilai Rata-Rata :%3.2f",rata);
 if(rata>59)
 strcpy(ket,"lulus");
 else
 strcpy(ket,"gagal");
 cout<<"\n\t Keterangan :"<<ket<<endl;
 getch();
}
 siswa(float uts, float uas)
{
 return((uts+uas)/2);
}