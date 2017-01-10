# include <conio.h>
# include <iostream.h>

main()
{
  char nama[2][3][10]={{"PAK","BU","MAS"},
                       {"ANDI","BUDI","CARLI"}};
  clrscr();

  cout<<nama[0][0]<<ends<<nama[1][0]<<endl;
  cout<<nama[0][1]<<ends<<nama[1][1]<<endl;
  cout<<nama[0][2]<<ends<<nama[1][2]<<endl;
  getch();
}
