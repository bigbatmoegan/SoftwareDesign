#include "Array_Base.h"
#include "Array.h"
#include "Queue.h"
#include "Stack.h"
#include "Fixed_Array.h"
#include <iostream>

int main (int argc, char * argv [])
{
	std::cout<< "HI" <<std::endl;
	Array_Base <int> *a1=new Array_Base<int> (5, 1);
	a1->fill(2);
	a1->fill(3);
	a1->fill(4);
	a1->fill(5);
	a1->fill(6);
	a1->fill(7);
	int n=a1->find(6);
	std::cout << n <<std::endl;
	a1->fill(9);
	int b=a1->size();
	std::cout<<b<<std::endl;
	int c=a1->max_size();
	std::cout<<c<<std::endl;
	Array_Base <int> *a2=new Array_Base<int> (8,2);
	a2->fill(2);
	a2->fill(9);
	a2->fill(9);
	a2->fill(9);
	a2->fill(9);
	a2->fill(9);
	a2->fill(9);
	int d=a2->size();
	Array <int> *a3=new Array<int>;
	std::cout<<d<<std::endl;
	Queue <char> *a4=new Queue<char>;
	char ch='f';
	a4->enqueue(ch);
	char cd=a4->dequeue();
	std::cout << ch <<std::endl;
	//std::cout <<"Hi";
	Fixed_Array <int, 5> *a5=new Fixed_Array<int, 5>;
	delete a1;
	delete a2;
	delete a3;
	delete a4;
	delete a5;
	Stack <int> *a6=new Stack<int>;
	delete a6;
	return 0;
	
	//TODO
	//fix queue exceptions
	//test basic items
	//when things work, save all on tesla and push to github
	
}
