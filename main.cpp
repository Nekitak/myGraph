#include "Net.h"

#include <iostream>

 
 


int main()
{

	Network::Net  net(5);
	 
	Network::Node<int> node = net.getNodeByIdx(2);
	node.insertBranch(node.getIndex() , 3);
	 
	net.insertNewNode();
	net.insertNewNode();
	net.insertNewNode();
	net.insertNewNode();
	net.insertNewNode();

	while (true)
	{
		node = net.nodeTravel(node);
	
	}


	 
	 

	 
	system("pause");
	return 0;
}
