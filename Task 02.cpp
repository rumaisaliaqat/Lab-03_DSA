//#include <iostream>
//using namespace std;
//
//template <typename Type>
//class List {
//protected:
//    Type* arr;
//    int maxSize;
//    int currentSize;
//
//public:
//    List(int size = 10) : maxSize(size), currentSize(0) {
//        arr = new Type[maxSize];
//    }
//
//    List(const List& other) {
//        maxSize = other.maxSize;
//        currentSize = other.currentSize;
//        arr = new Type[maxSize];
//        for (int i = 0; i < currentSize; i++) {
//            arr[i] = other.arr[i];
//        }
//    }
//
//    virtual ~List() {
//        delete[] arr;
//    }
//
//    virtual void addElementAtFirstIndex(Type element) = 0;
//    virtual void addElementAtLastIndex(Type element) = 0;
//    virtual Type removeElementFromEnd() = 0;
//    virtual void removeElementFromStart() = 0;
//};
//
//template <typename Type>
//class MyList : public List<Type> {
//public:
//    MyList(int size = 10) : List<Type>(size) {}
//
//    MyList(const MyList& other) : List<Type>(other) {}
//
//    ~MyList() {}
//
//    void addElementAtFirstIndex(Type element) override {
//        if (this->currentSize >= this->maxSize) {
//            cout << "List is full!" << endl;
//            return;
//        }
//        for (int i = this->currentSize; i > 0; i--) {
//            this->arr[i] = this->arr[i - 1];
//        }
//        this->arr[0] = element;
//        this->currentSize++;
//    }
//
//    void addElementAtLastIndex(Type element) override {
//        if (this->currentSize >= this->maxSize) {
//            cout << "List is full!" << endl;
//            return;
//        }
//        this->arr[this->currentSize++] = element;
//    }
//
//    Type removeElementFromEnd() override {
//        if (this->currentSize == 0) {
//            cout << "List is empty! Cannot remove element." << endl;
//            return Type();
//        }
//        return this->arr[--this->currentSize];
//    }
//
//    void removeElementFromStart() override {
//        if (this->currentSize == 0) {
//            cout << "List is empty!" << endl;
//            return;
//        }
//        for (int i = 0; i < this->currentSize - 1; i++) {
//            this->arr[i] = this->arr[i + 1];
//        }
//        this->currentSize--;
//    }
//
//    bool empty() const {
//        return this->currentSize == 0;
//    }
//
//    bool full() const {
//        return this->currentSize == this->maxSize;
//    }
//
//    int size() const {
//        return this->currentSize;
//    }
//
//    bool insertAt(int index, Type value) {
//        if (index < 0 || index > this->currentSize || this->currentSize >= this->maxSize) {
//            cout << "Invalid index or list is full!" << endl;
//            return false;
//        }
//        for (int i = this->currentSize; i > index; i--) {
//            this->arr[i] = this->arr[i - 1];
//        }
//        this->arr[index] = value;
//        this->currentSize++;
//        return true;
//    }
//
//    Type last() const {
//        if (this->currentSize == 0) {
//            cout << "List is empty! No last element." << endl;
//            return Type();
//        }
//        return this->arr[this->currentSize - 1];
//    }
//
//    bool search(Type value) const {
//        for (int i = 0; i < this->currentSize; i++) {
//            if (this->arr[i] == value) {
//                return true;
//            }
//        }
//        return false;
//    }
//};
//
//int main() {
//    MyList<int> myList(5);
//
//    myList.addElementAtLastIndex(10);
//    myList.addElementAtLastIndex(20);
//    myList.addElementAtFirstIndex(5);
//
//    cout << "List size: " << myList.size() << endl;
//    cout << "Last element: " << myList.last() << endl;
//
//    myList.removeElementFromEnd();
//    cout << "Last element after removal: " << myList.last() << endl;
//
//    return 0;
//}
