#include <iostream>

using namespace std;

template <typename T> class Node {
    T data;
    public:
    Node* prev;
    Node* next;
    void add_data(T data){
        this->data=data;
    }
    T get_data () {
        return this->data;
    }
    Node() : prev(nullptr), next(nullptr){}
};

int main(){
    Node <string> N1;
    N1.prev=nullptr;
    N1.add_data("first");
    Node <string> N2;
    N2.prev=&N1;
    N1.next=&N2;
    N2.next=nullptr;
    N2.add_data("second");
    Node <string> N3;
    N3.prev=&N2;
    N2.next=&N3;
    N3.next=nullptr;
    N3.add_data("third");
    cout << N1.get_data() << endl;
    cout << (*N2.prev).get_data() << endl;
    cout << (*N1.next).get_data() << endl;
    cout << N3.get_data() << endl;
}