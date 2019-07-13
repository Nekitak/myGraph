#pragma once

 
#include "Node.h" 
 
 

namespace Network {

 


	class Net  
	{

		private:
		 
		 
			int _nodeCount;
			std::vector<Node<int>> _nodes;

			friend class Node<int>;

 
		public:
			Net(int count);
			 
			Node<int> getNodeByIdx(int idx);
			int getNodeCount() { return _nodeCount; }
			 
			Node<int> nodeTravel(Node<int> node);

			int generateInsert(int _nodeCount);

			void insertNewNode();
			void deleteSelectNode();

	};










	 

	 

}
