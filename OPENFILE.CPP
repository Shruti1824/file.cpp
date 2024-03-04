#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
char sname[20]="SYBBACA";
ofstream outfile;
outfile.open("example.bin");
outfile.write((char *)& sname,sizeof(sname));
outfile.close();
ifstream infile;
infile.open("example.txt");
infile.read((char *)& sname,sizeof(sname));
cout<<sname;
infile.close();
return 0;
getch();
}
