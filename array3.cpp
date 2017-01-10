# include <conio.h>
# include <iostream.h>

main()
{
 int i,j;
 char hari[7][10];

 clrscr();
 cout<<"masukkan jumlah hari :";cin>>j;
 for(i=1;i<=j;i++)
{
 cout<<"masukkan nama hari :";cin>>hari[i];
}
 clrscr();
 cout<<"nama-nama hari :"<<endl;
 for(i=1;i<=j;i++)
{
 cout<<hari[i]<<endl;
}
getch();
}
