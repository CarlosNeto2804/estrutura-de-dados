#include "./../include/linked-list-with-head.h"

LinkedListWithHead::LinkedListWithHead()
{
	this->head = new NodeInt();
}

void LinkedListWithHead::print_list()
{
	if (this->head->get_next() == 0)
		cout << "Lista vazia";
	else
		for (NodeInt* ptr = head->get_next(); ptr != 0; ptr = ptr->get_next())
			cout << ptr->get_value() << " ";
			
	cout << endl;
}

void LinkedListWithHead::add_head(int novaChave)
{
	NodeInt* new_node = new NodeInt(novaChave, this->head->get_next());
	head->set_next(new_node);	
}

int LinkedListWithHead::remove_value(int chave)
{
	NodeInt* ptr;
	NodeInt* aux;
	
	aux = this->head;
	ptr = this->head->get_next();
	
	while (ptr != 0 && ptr->get_value() != chave)
	{
		aux = ptr;
		ptr = ptr->get_next();
	}
	
	if (ptr)
	{
		int val = ptr->get_value();
		aux->set_next(ptr->get_next());
		delete ptr;
		return val;
	}
	else
		return INT_MAX;
}

//Destrutor
LinkedListWithHead::~LinkedListWithHead()
{
	//cout << "Destruindo a lista\n";
	for (NodeInt* ptr = this->head->get_next(); ptr != 0;)
	{
		//cout << "Liberando " << ptr->chave << endl;
		NodeInt* aux = ptr->get_next();
		
		delete ptr;
		
		ptr = aux;
	}
	
	delete this->head;
}
