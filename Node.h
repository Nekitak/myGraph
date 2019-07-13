#pragma once
#include "Net.h"

#include <map>
#include <iostream>
#include <vector>

namespace Network 
{

template<typename T>
class Node
{

	public:

		friend class Net;

		int index;
		std::multimap<int, int> branches;
		 
	 

		T _data;



		Node(int v );

		int getIndex() { return this->index; }
		T getData() { return this->_data; }

		 

		void insertBranch(int idx1, int idx2);
		std::multimap<int, int> getBranch();




	};


	template<typename T>
	Node<T>::Node(int v  )
	{
		this->index = v;
		if (v != 0) {
			this->insertBranch(v, v - 1);
			this->insertBranch(v, v + 1);
		}
		else {
			this->insertBranch(v, v + 1);
		}

		 
	}

	template<typename T>
	void Node<T>::insertBranch(int idx1, int idx2)
	{
	  this->branches.insert(std::make_pair(idx1, idx2));
	  
	}

	template<typename T>
	std::multimap<int, int> Node<T>::getBranch()
	{		 
			return   branches;
	}



}