#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std; 
class polar
{
  float r,a;
  public:
 void setpolar(float i, float j){r=i; a=j;}
 void showpolar()
 {
  cout<<"Radius = "<<setprecision(4)<<r<<"             Angle = "<<setprecision(4)<<a;
 }
 void getresult(){}
 polar operator + (polar ob);

};

polar polar :: operator + (polar ob)
{
  float x1,x2,y1,y2,x,y,rad,angle;
  float angle1,angle2,ang;
  polar tempob;

  angle1 = (22 * a) /float(7 * 180);
  angle2 = (22 * ob.a)/ float (7 * 180);

  x1 = r*cos(angle1);
  y1 = r*sin(angle1);
  x2 = ob.r * cos(angle2);
  y2 = ob.r * sin(angle2);

  x = x1 + x2;
  y = y1 + y2;

  rad = sqrt((x*x)+(y*y));
  ang = atan(y/float(x));
  angle = (180*7*ang)/22;
  tempob.setpolar(rad,angle);
  return tempob;
}

void main()
{
   float r,a;
   polar ob[2],sumob;
   clrscr();
   cout<<"A Class for POLAR that determine polar coordinates\n";
   cout<<"==================================================\n\n\n\n\n";

   for(int i=0;i<2;i++)
   {
     cout<<"\nEnter value for r : "<<i+1<< " : ";
     cin>>r;
     cout<<"\nEnter value for a : "<<i+1<< " : ";
     cin>>a;
     ob[i].setpolar(r,a);
   }

   cout<<"\n";

   for(i=0;i<2;i++)
   {
     cout<<"\n\n\n\n";
     cout<<i+1<<"   number polar coordinate : ";
     cout<<"\n\n";
     ob[i].showpolar();
     cout<<"\n\n\n\n";
   }
   cout<<"\n\n\n\nResult\n\n";
   sumob = ob[0] + ob[1];
   sumob.showpolar();
   getch();
}
