// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Stack
//
template <typename T>
Stack <T>::Stack (void)
:data_(new T[10]), cur_size_(0), max_size_(10)
{

}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
:data_(new T[stack.max_size()]), cur_size_(0), max_size_(stack.max_size())
{
	int e = 0;
	for (int e = 0; e < max_size_; e++);
	{
		data_[e] = stack[e];
		cur_size_++;
	}
}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
	delete[] data_;
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
	//push by putting element at first free spot to simulate being at bottom
	for(int c=0;c<cur_size_;c++)
	{
		if(data_[c]==NULL)
		{
			data_[c]=element;
			cur_size_++;
		}
		else
		{
			//just keep going
		}
	}
}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
	//go through array from end and find first element to pop
	for(int j=cur_size_-1;j<-1;j--)
	{
		if(data_[j]!=NULL)
		{
			data_[j]==NULL;
			cur_size_-1;
		}
		else
		{
			//just keep going
		}
	}
}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
	cur_size_ = rhs.size();
	max_size_ = rhs.max_size();
	for (int a = 0; a < cur_size_; a++)
	{
		data_[a] == rhs[a];
	}

}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
	//set everything inside to null
	for(int i=0;i<cur_size_;i++)
	{
		data_[i]=NULL;
		cur_size_-1;
	}
}
