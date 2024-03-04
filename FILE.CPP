#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
    char sname[20]="SYBBACA",line[20];
    ofstream outfile;
    outfile.open("example.txt");
    outfile<<sname;
    outfile.close();
    ifstream infile;
    infile.getline(line,20);
    cout<<line;
    infile.close();
    return 0;

}