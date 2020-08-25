#include "node-int.h"
#include <iostream>
#include <limits.h>

using namespace std;

class LinkedListWithHead
{
	private:
		NodeInt* head;
		
	public:
		LinkedListWithHead();

		void print_list();

		void add_head(int);

		int remove_value(int);

		~LinkedListWithHead();
};
