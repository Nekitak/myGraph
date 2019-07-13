#include "Net.h"

#include <iostream>

namespace Network {



	Net::Net(int count) : _nodeCount(count)
	{
		this->_nodes = _nodes;


		for (size_t i = 0; i < count; i++) {

			Node<int> node(i);
	  
				int insert = this->generateInsert(count);
				node.insertBranch(i, insert);

			_nodes.push_back(node);
			 
		}
	}


	Node<int> Net::getNodeByIdx(int idx)
	{
		return  this->_nodes.at(idx);
	}

 

	Node<int> Net::nodeTravel(Node<int> node)
	{
		auto branches = node.getBranch();
		std::multimap<int, int>::iterator p_branches;

		std::cout << "Select node to travel : ";

		 

		std::vector<int> _nodes;

		for (p_branches = branches.begin(); p_branches != branches.end(); ++p_branches) {
				_nodes.push_back(p_branches->second);
				std::cout << p_branches->second << "  ";
		}std::cout << "\n";

		int target = 0;
		std::cin >> target;
		 for (auto i : _nodes) {
			if (target == i) {
				return  this->getNodeByIdx(target);
			}
			else {
				NULL;
			}
		} 

		 
	}

	int Net::generateInsert(int _nodeCount)
	{
		int insert = 0;

		while (this->_nodeCount != rand()&this->_nodeCount) {
			return insert = rand()&this->_nodeCount;
		}
	}

	void Net::insertNewNode()
	{
		  
  
		Node<int> node(this->_nodeCount);
		this->_nodeCount++;
			 
		int insert = this->generateInsert(_nodeCount);
		 

		node.insertBranch(this->_nodeCount, insert);
		this->_nodes.push_back(node);
		 

	}
 


	 


 

	 




}
