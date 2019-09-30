#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class batsman
{
int bcode;
char bname[20];
int innings,notout,runs;
int batavg;
void calcavg();
batavg=runs/(innings-notout);
public :voidreaddata();
voiddisplaydata();
};
void batsman::readdata()
{
cout<<"Enter batsman code ";
cin>>bcode;
cout<<"Enter batsman name ";
gets(bname);
cout<<"enter innings,notout and runs ";
cin>>innings>>notout>>runs;
calcavg();
}
void batsman::displaydata()
{
cout<<"Batsman code "<<bcode<<"\nBatsman name "<<bname<<"\nInnings "<<innings<<"\nNot out "<<notout<<"\nRuns "<<runs<<"\nBatting Average "<<batavg;
int main()
{
batsman obj;
obj.readdata();
obj.displaydata();
getch();
return 0;
}

