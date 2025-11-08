#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{
private:
	int _Size = 0;

	T* TempArray;

public:

	T* originalArray;

	clsDynamicArray(T size)
	{
		this->_Size = size;
		originalArray = new T[size];
	}
	clsDynamicArray() {};

	~clsDynamicArray() {
		delete[] originalArray;
	}


	bool SetItem(int Index, T value) {
		return originalArray[Index] = value;
	}

	int Size() {
		return this->_Size;
	}

	bool isEmpty() {
		return (this->_Size == 0);
	}

	void Resize(int NewSize) {

		if (NewSize < 0)
			NewSize = 0;

		TempArray = new T[NewSize];

		if (NewSize < _Size)
			_Size = NewSize;

		for (int i = 0; i < _Size; i++) {
			TempArray[i] = originalArray[i];

		}
		_Size = NewSize;
		delete[] originalArray;
		originalArray = TempArray;

	}

	T GetItem(int index) {
		return originalArray[index];
	}

	void Clear() {
		_Size = 0;
		TempArray = new T[0];
		delete[] originalArray;
		originalArray = TempArray;

	}

	void Reverse() {

		TempArray = new T[_Size];
		int couneter = 0;

		for (T i = _Size - 1; i >= 0; i--) {
			TempArray[couneter] = originalArray[i];
			couneter++;
		}
		delete[] originalArray;
		originalArray = TempArray;

	
};



	void DeleteItemAt(int index) {
		if (index < 0 || index >= _Size) return;
		TempArray = new T[_Size - 1];
		int couneter = 0;
		for (T i = 0; i < _Size; i++) {
			if (i == index) {
				continue;
			}
			TempArray[couneter] = originalArray[i];
			couneter++;
		}
		_Size--;
		delete[] originalArray;
		originalArray = TempArray;
		
	}

	void DeleteFirstItem() {

		DeleteItemAt(0);

	}


	void DeleteLastItem() {

		DeleteItemAt(_Size-1);

	}

	int Find (T value) {
		for (int i = 0; i < this->_Size; i++) {
			if (originalArray[i] == value) {
				return i;
			}
		}
		return -1;
	}


	void DeleteItemByValue (T value) {
		int index = Find(value);
		if (index != -1) {
			DeleteItemAt(index);
		}
	}

	void InsertAt(int index, T value) {
		
		TempArray = new T[_Size + 1];

			for (int i =0; i<_Size+1; i++) {
				if (i < index) {
					TempArray[i] = originalArray[i];
				}
				else if (i == index) {
					TempArray[i] = value;
				}
				else {
					TempArray[i] = originalArray[i - 1];
				}
			}

			_Size++;

		delete[] originalArray;
		originalArray = TempArray;
	}


	void InsertAtBegging(T value) {
		InsertAt(0, value);

	}

	void InsertATEnd(T value) {
		
		InsertAt(_Size, value);
	}

	void InsertBefore(int index, T value) {

		InsertAt(index, value);
	}

	void InsertAfter(int index, T value) {
		InsertAt(index + 1, value);
	}

	void PrintList () {
		for (int i = 0; i < this->_Size; i++) {
			cout << originalArray[i] << "\t";
		}
		cout << endl;
	}

};

