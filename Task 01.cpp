#include<iostream>
using namespace std;

template<typename Type>
class List {
	Type* arr;
	int maxSize;
	int currentSize;
public:
	virtual void addElementAtFirstIndex(Type) = 0;
	virtual void addElementAtLastIndex(Type) = 0;
	virtual void removeElementFromEnd() = 0;
	virtual void removeElementFromStart() = 0;
};
