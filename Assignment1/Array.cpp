// $Id: Array.cpp 820 2011-01-17 15:30:41Z hillj $

// Honor Pledge: Jeremorg
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
// 


//PLEASE READ
//Accidently added an extra letter to the repo name and only noticed on 1-30-2019, prievous
//repo was csc36300-spring2019-assignment1 and was completed on time 
#include "Array.h"
#include <iostream>
#include <stdexcept>

Array::Array (void)
:data_ (0), cur_size_ (0), max_size_ (10)
{
	data_=new char[10];
}

Array::Array (size_t length)
:data_ (0), cur_size_ (0), max_size_ (length)
{
	data_=new char[max_size_];
}

Array::Array (size_t length, char fill)
:data_ (&fill), cur_size_ (0), max_size_ (length)
{
	/*initialize first value*/
	cur_size_++;
	data_[0]=fill;
	std::cout<<data_[0]<<std::endl;
}


Array::Array (const Array & array)
{
	//copy passed in array to data_ array
	max_size_=array.max_size();
	std::cout<< max_size_<<std::endl;
	data_=new char[max_size_];
	int e=0;
	std::cout<<"Hi";
	for(int e=0; e<max_size_; e++);
	{
		data_[e]=array[e];
		std::cout<<data_[e];
	}
}


Array::~Array (void)
{
	data_=0;
}

const Array & Array::operator = (const Array & rhs)
{

}

char & Array::operator [] (size_t index)
{
	//check if index is valid
	if(index<0 || index>cur_size_)
	{
		throw std::out_of_range ("out of range");
	}
	return data_[index];
}

const char & Array::operator [] (size_t index) const
{

}


char Array::get (size_t index) const
{
	char temp=data_[index];
	return temp;
}

void Array::set (size_t index, char value)
{
	data_[index]=value;
}

void Array::resize (size_t new_size)
{
	if(new_size==max_size_)
	{
		//do nothing
	}
	else
	{
		//copy into a temp array, then set back to normal array
		char *temparray=new char[new_size];
		for(int f=0;f<new_size;f++)
		{
			//when growning, set new values to nothing
			if(f>max_size_)
			{
				temparray[f]=' ';
			}	
			else
			{
				temparray[f]=data_[f];
				std::cout<<temparray[f];
			}
		}
		data_=temparray;
		cur_size_=new_size;
	}
}


int Array::find (char ch) const
{
	for(int b=0;b<cur_size_;b++)
	{
		if(data_[b]==ch)
		{
			return b;
		}
		else if(data_[b]!=ch && b+1==cur_size_)
		{
			//character not in array
			return -1;
		}
		else
		{
			//just go through loop again
		}
	}
}

int Array::find (char ch, size_t start) const
{
	for(int c=start;c<cur_size_;c++)
	{
		if(data_[c]==ch)
		{
			return c;
		}
		else if(data_[c]!=ch && c+1==cur_size_)
		{
			//character not in array
			return -1;
		}
		else
		{
			//just go through loop again
		}
	}
}

bool Array::operator == (const Array & rhs) const
{
	if(cur_size_==rhs.size())
	{
		for(int y=0;y<cur_size_;y++)
		{
			if(data_[y]!=rhs[y])
			{
				return false;
			}
		}
		return true;
	}
	else
	{
		return false;
	}
}

bool Array::operator != (const Array & rhs) const
{
	if(cur_size_!=rhs.size())
	{
		return true;
	}
	else
	{
		for(int y=0;y<cur_size_;y++)
		{
			if(data_[y]==rhs[y])
			{
				return false;
			}
		}
		return true;
	}
}

void Array::fill (char ch)
{
	/*set value and increase cur size*/
	data_[cur_size_]=ch;
	std::cout<<data_[cur_size_]<<std::endl;
	cur_size_++;
}

void Array::shrink (void)
{
	if(cur_size_<max_size_)
	{
		max_size_=cur_size_;
	}
	else
	{
		//do nothing since no unused space
	}
}

void Array::reverse (void)
{
	int begin=0;
	int end=cur_size_-1;
	std::cout<<begin<<std::endl;
	std::cout<<end<<std::endl;
	char temp;
	while(begin<end)
	{
		temp=data_[begin];
		data_[begin]=data_[end];
		data_[end]=temp;
		begin++;
		end--;
	}
	for(int as=0;as<5;as++)
	{
		std::cout<<data_[as];
	}
}

void Array::slice (size_t begin) const
{
	/*create a new array, use a for loop to copy the contents from the beginning point
	* desired to the end of the array -1 since the end is not included. returns array 
	* when done (although its void return type)
	*/
	for(int z=begin;z<cur_size_;z++)
	{
		std::cout<<data_[z];
	}
}

void Array::slice (size_t begin, size_t end) const
{
	for(int z=begin;z<end;z++)
	{
		std::cout<<data_[z];
	}
}
