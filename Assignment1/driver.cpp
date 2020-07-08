#include "Array.h"
#include <iostream>

int main (int argc, char * argv [])
{
  // TODO Add code here to test your Array class.
  Array * a1=new Array;
  char b ='E';
  char c='c';
  char t='t';
  char h='h';
  char a='a';
  char n='n';
  Array * a3=new Array(5, b);
  //std::cout<<d;
  a3->fill(t);
  a3->fill(h);
  a3->fill(a);
  a3->fill(n);
  //a3->reverse();
  
  delete a1;
  delete a3;
  return 0;
}
