   // -*- C++ -*-
// $Id: Stack.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
//Just copied this from the stack file in case it was needed, can remove if required

#ifndef _CS507_QUEUE_H_
#define _CS507_QUEUE_H_

#include "Array.h"

template <typename T>
class Queue
{
public:

	///Type definition of the hype.
	typedef T type;
	
	///Default Constructor
	Queue (void);
	
	///Copy Constructor 
	Queue (const Queue & q);
	
	///Destructor
	~Queue (void);
	
	/**
   * Assignment operator
   *
   * @param[in]      rhs           Right-hand side of operator
   * @return         Reference to self
   */
  const Queue & operator = (const Queue & rhs);
  
  /**
  * Enqueue - adds element to end of list
  *
  * @param[in]      element           element to add to list
  */
  void enqueue(T element);
  
  /**
  * Dequeue - removes element at beginning of list
  *
  * @exception       empty_exception    the queue is empty
  */
  T dequeue(void);
  
  /**
   * Test if the queue is empty
   *
   * @retval         true          The queue is empty
   * @retval         false         The queue is not empty
   */
   bool is_empty(void) const;
   
   /**
   * Number of element on the queue.
   *
   * @return         Size of the queue.
   */
  size_t size (void) const;
  
  /// Remove all elements from the queue.
  void clear (void);
 
  private:
	/// Pointer to the actual data.
	T * data_;

	/// Current size of the array.
	size_t cur_size_;

	/// Maximum size of the array.
	size_t max_size_;
};

// include the inline files
#include "Queue.inl"

// include the source file since template class
#include "Queue.cpp"

#endif  // !defined _CS507_QUEUE_H_