#include<iostream>
using namespace std;

template<typename Type>
class List {
	Type* arr;
	int maxSize;
	int currentSize;
public:
	  List(int size = 10) : maxSize(size), currentSize(0) {
       arr = new Type[maxSize];
   }

   List(const List& other) {
       maxSize = other.maxSize;
       currentSize = other.currentSize;
       arr = new Type[maxSize];
       for (int i = 0; i < currentSize; i++) {
           arr[i] = other.arr[i];
       }
   }

   virtual ~List() {
       delete[] arr;
   }
	virtual void addElementAtFirstIndex(Type) = 0;
	virtual void addElementAtLastIndex(Type) = 0;
	virtual void removeElementFromEnd() = 0;
	virtual void removeElementFromStart() = 0;
};
