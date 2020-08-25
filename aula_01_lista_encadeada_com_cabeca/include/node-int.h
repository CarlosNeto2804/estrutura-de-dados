class NodeInt
{
	private:
		int node_value;
		NodeInt* next;
		
	public:
		//Construtor
		NodeInt()
		{
			this->next = 0;
		}
		
		NodeInt(int c, NodeInt* p = 0)
		{
			this->node_value = c;
			this->next = p;
		}
		
		//Setters
		void set_value(int c)
		{
			this->node_value = c;
		}
		
		void set_next(NodeInt* p)
		{
			this->next = p;
		}
		
		//Getters
		int get_value()
		{
			return this->node_value;
		}
		
		NodeInt* get_next()
		{
			return this->next;
		}
};
