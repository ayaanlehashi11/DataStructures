/*
 * linear-linked-list.hpp
 *
 *  Created on: Jan 3, 2023
 *      Author: ayaanle
 */

#ifndef CPP_LINKED_LIST_LINEAR_LINKED_LIST_HPP_
#define CPP_LINKED_LIST_LINEAR_LINKED_LIST_HPP_

/*
 * linked-list.cpp
 *
 *  Created on: Jan 3, 2023
 *      Author: ayaanle
 */
template <class Type>
class nodeType{
public:
	Type info;
	nodeType<Type> * link;
protected:
	int count;
	nodeType<Type> *first;
	nodeType<Type> *last;
};
template <class Type>
class linkedListIterator{
public:
	linkedListIterator();
	//default constructor
	linkedListIterator(nodeType<Type>  *ptr);
	Type operator*();
	//overloading the dereferencing operator
	//PostCondition: the iterator is advanced to the next node
	bool operator == (const linkedListIterator<Type>& right);
	//overload the equality operator
	//PostCondition:returns true if this iterator not equal to the iterator specified by right otherwise false
	bool operator != (const linkedListIterator<Type>&right);
	//overload the equality operator
		//PostCondition:returns true if this iterator not equal to the iterator specified by right otherwise false
private:
	nodeType<Type> *current;
};

template <class Type>
class linkedList{
public:
	const linkedList<Type>& operator = (const linkedList<Type>&);
	void initializeList();
	//Initialize the list to an empty state
	//PostCondition: first = NULL, last = NULL , count = 0
	bool isEmptyList()const;
	//Function to determine whether the list is empty
	//Returns true if the list is empty
	//otherwise it returns false
	int length()const;
	//def: function that returns the number of node in the list
	//PostCondition: The value of count is returned
	void destroyList();
	Type front() const;
	Type back() const;
	virtual bool search(const Type& searchItem)const = 0;
	virtual void insertFirst(const Type& newItem) = 0;
	virtual void insertLast(const Type& newItem) = 0;
	virtual void deleteNode(const Type& deleteItem) = 0;
	linkedListIterator<Type> begin();
	linkedListIterator<Type> end();
	linkedList();
	linkedList(const linkedList<Type> & otheList);
	//copy constructor
	~linkedList();
	//destructor
	//deletes all the nodes from the list
	//PostCondition: The list object is destroyed
protected:
	int count;
	nodeType<Type> *first;
	nodeType<Type> *last;
private:
	void copyList(const linkedList<Type> & otherList);
	//Function to make a copy of otherlist
	};





#endif /* CPP_LINKED_LIST_LINEAR_LINKED_LIST_HPP_ */
