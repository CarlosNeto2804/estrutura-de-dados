#include "./../include/linked-list-with-head.h" 

int main()
{
	LinkedListWithHead* lista = new LinkedListWithHead();
	
	lista->print_list();
	
	lista->add_head(10);
	lista->print_list();
	
	lista->add_head(20);
	lista->print_list();
	
	lista->add_head(30);
	lista->print_list();
	
	int v = lista->remove_value(20);
	if (v != INT_MAX)
		cout << "Removi o " << v << endl;
	else
		cout << "O valor não estava na lista\n";
	lista->print_list();
	
	v = lista->remove_value(10);
	if (v != INT_MAX)
		cout << "Removi o " << v << endl;
	else
		cout << "O valor não estava na lista\n";
	lista->print_list();
	
	v = lista->remove_value(40);
	if (v != INT_MAX)
		cout << "Removi o " << v << endl;
	else
		cout << "O valor não estava na lista\n";
	lista->print_list();
	
	v = lista->remove_value(30);
	if (v != INT_MAX)
		cout << "Removi o " << v << endl;
	else
		cout << "O valor não estava na lista\n";
	lista->print_list();
	
	lista->add_head(10);
	lista->print_list();
	
	delete lista;
	
	return 0;
}
