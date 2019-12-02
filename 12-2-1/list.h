template<class T>
class Node {
public:
	T data;
	Node<T>* next;
};

template <class T>
class List {
	Node<T>* head;

public:
	List() : head(NULL) {}

	List(T* arr, int n) : head(NULL){
		for (int i = 0; i < n; i++){
			push_back(arr[i]);
		}
	}

	~List() {delete head;}

	void insert_at(int idx, T data){
		if (idx == 0) push_front(data);
		if (head == NULL)
            return;
		Node<T>* prev;
		Node<T>* iter = head;
		for (int i = 0; i < idx; i++){
			prev = iter;
			iter = iter->next;
			if (iter==NULL && i!= idx - 1) return;
		}
		prev->next = new Node<T>;
		prev->next->data = data;
		prev->next->next = iter;
	}

	void remove_at(int idx){
		if (head == NULL) return;
		if (idx == 0) {
			pop_front();
			return;
		}
		Node<T>* prev;
		Node<T>* iter = head;
		for (int i = 0; i < idx; i++){
			prev = iter;
			iter = iter->next;
			if (iter == NULL) return;
		}
		prev->next = iter->next;
		delete iter;
	}

	void push_back(const T& val){
		if (head == NULL){
			head = new Node<T>;
			head->data = val;
			return;
		}
		Node<T>* new_node = head;
		while (new_node->next)
            new_node = new_node->next;
		new_node->next = new Node<T>;
		new_node->next->data = val;
	}

	void pop_back(){
		if (head == NULL) return;
		Node<T>* prev;
		Node<T>* iter = head;
		while (iter->next) {
			prev = iter;
			iter = iter->next;
		}
		if (iter == head) {
			delete iter;
			head = NULL;
		} else {
			delete iter;
			prev->next = NULL;
		}
	}

    void push_front(const T& val) {
        Node<T>* new_node = new Node<T>;
        new_node->data = val;

        new_node->next = this->head;
        this->head = new_node;
  }

	void pop_front(){
		if (head == NULL) return;
		Node<T>* iter = head->next;
		delete head;
		head = iter;
	}

	friend std::ostream& operator<<(std::ostream& out, const List<T>& rhs){
		Node<T>* iter = rhs.head;
		while (iter) {
			out << iter->data << ", ";
			iter = iter->next;
		}
        return out;
	}
};
