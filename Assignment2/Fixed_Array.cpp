// $Id: Fixed_Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void)
:data_(new T[N]), cur_size_(0), max_size_(N)
{
	
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr)
:data_(new T[N]), cur_size_(0), max_size_(N)
{
	for (int i = 0; i < max_size_; i++)
	{
		data_[i] = arr[i];
		cur_size_++;
	}
}

//
// Fixed_Array
//
template <typename T, size_t N>
template <size_t M>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, M> & arr)
	:data_(new T[M]), cur_size_(0), max_size_(M)
{
	for (int i = 0; i < max_size_; i++)
	{
		data_[i] = arr[i];
		cur_size_++;
	}
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill)
{
	if(cur_size_<max_size_)
	{
		data_[cur_size_] = fill;
		cur_size_++;
	}
}

//
// ~Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{
	delete[] data_;
}

//
// operator =
//
template <typename T, size_t N>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, N> & rhs)
{
	cur_size_ = rhs.size();
	max_size_ = rhs.max_size();
	for(int j=0;j<max_size_;j++)
	{
		data_[j]=rhs[j];
		cur_size_++;
	}
}

//
// operator =
//
template <typename T, size_t N>
template <size_t M>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, M> & rhs)
{
	//Unsure of what the difference between ths operator = and the one above it.
}
