#include<iostream>
#include<conio.h>
#define Pi 3.1416


int main ()
{
  float hght, base, Area_Tri, Area_Sq, Area_Rec, Area_Cir, Area_Trape, Hght_Trape;
 
  clrscr();
  cout<<"Enter the height.";
  cin>>hght;

  cout<<"Enter the base.";
  cin>>base;
 
  cout<<"Enter the height FOR TRAPEZOID ONLY!.";
  cin>>Hght_Trape;
  
  cout<<"=======================================================";
  cout<<end1;
 
 
  //FORMULAS
  Area_Tri = (.5)*(hght)*(base);
  Area_Sq = (hght)*(base);
  Area_Rec = (hght)*(base);
  Area_Cir = (Pi)*(base/2);
  Area_Trape = (hght+base)/2*(Hght_Trape);


  cout<<"Area of Triangle is";
  cout<< Area_Tri <<end1;

  cout<<"Area of Square is";
  cout<< Area_Sq <<end1;

  cout<<"Area of Rectangle is";
  cout<< Area_Rec <<end1;

  cout<<"Area of Circle is";
  cout<< Area_Cir <<end1;

  cout<<"Area of Trapezoid is";
  cout<< Area_Trape <<end1;


getch();
return 0;
}
