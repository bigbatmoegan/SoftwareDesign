// $Id: Queue.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Stack
//
template <typename T>
Queue <T>::Queue (void)
:data_(new T[10]), cur_size_(0), max_size_(10)
{
	//default constructor
}

template <typename T>
Queue <T>::Queue (const Queue & queue)
:data_(new T[queue.max_size()]), cur_size_(0), max_size_(queue.max_size())
{
	int e = 0;
	for (int e = 0; e < max_size_; e++);
	{
		data_[e] = queue[e];
		cur_size_++;
	}
}
//
// ~Stack
//
template <typename T>
Queue <T>::~Queue (void)
{
	delete[] data_;
}


template <typename T>
void Queue <T>::enqueue(T element)
{
	//put element at the first available spot
	for(int a=0;a<cur_size_;a++)
	{
		if(data_[a]==NULL)
		{
			data_[a]==element;
			cur_size_++;
		}
		else
		{
			//just keep going
		}
	}
}

template <typename T>
T Queue <T>::dequeue(void)
{
	//take first in line out
	for(int b=0;b<cur_size_;b++)
	{
		if(data_[b]!=NULL)
		{
			T temp=data_[b];
			cur_size_-1;
			return temp;
		}
	}
}

//
// clear
//
template <typename T>
void Queue <T>::clear (void)
{
	//set everything inside to null
	for(int i=0;i<cur_size_;i++)
	{
		data_[i]=NULL;
	}
}

//
// operator =
//
template <typename T>
const Queue <T> & Queue <T>::operator = (const Queue & rhs)
{
	cur_size_ = rhs.size();
	max_size_ = rhs.max_size();
	for (int a = 0; a < cur_size_; a++)
	{
		data_[a] == rhs[a];
	}

}