#include <iostream>
#include "clsDbilLinkedList.h"
using namespace std;

//int main()
//{
//	clsDbilLinkedList <int> MyLinkedList;
//
//	MyLinkedList.InsertAtBegining(1);
//	MyLinkedList.InsertAtBegining(2);
//	MyLinkedList.InsertAtBegining(3);
//	MyLinkedList.InsertAtBegining(4);
//
//	MyLinkedList.PrintList();
//
//
//	clsDbilLinkedList<int>::Node * N1 = MyLinkedList.Find(3);
//
//	if (N1 != NULL)
//		cout << "\nNode with value 3 is Found :-)\n";
//	else
//		cout << "\nNode Is not found :-(\n";
//
//
//	MyLinkedList.InsertAfter(N1, 500);
//	cout << "\nAfter Inserting 500 after 2:\n";
//	MyLinkedList.PrintList();
//
//
//
//	MyLinkedList.InsertAtend(700);
//	cout << "\nAfter Inserting 700 at end:\n";
//	MyLinkedList.PrintList();
//
//	clsDbilLinkedList<int>::Node* N2 = MyLinkedList.Find(4);
//	MyLinkedList.DeleteNode(N2);
//	cout << "\nAfter Deleting 4:\n";
//	MyLinkedList.PrintList();
//
//	MyLinkedList.DeleteFirstnode();
//	cout << "\nAfter Deleting First Node:\n";
//	MyLinkedList.PrintList();
//
//	cout << "\nAfter Deleting Last Node:\n";
//	MyLinkedList.DeleteLastnode();
//	MyLinkedList.PrintList();
//
//	MyLinkedList.Size();
//
//	if(MyLinkedList.IsEmpty())
//		cout << "\nList is Empty\n";
//	else
//		cout << "\nList is not Empty\n";
//
//
//	cout << "\nAfter Reversing the List:\n";
//	MyLinkedList.Reverse();
//
//
//	//MyLinkedList.Clear();
//
//
//	//if (MyLinkedList.IsEmpty())
//	//	cout << "\nList is Empty\n";
//	//else
//	//	cout << "\nList is not Empty\n";
//
//
//	clsDbilLinkedList<int>::Node* N3 = MyLinkedList.GetNode(2);
//	cout << "the value is " << N3->value << endl;
//
//
//	cout <<"\n\n" << "item of (2) is " << MyLinkedList.GetItem(2) << endl;
//
//
//	cout << "\n\n"<<"update item of (2) to 1000" << MyLinkedList.updateItem(2, 1000) << endl;
//	MyLinkedList.PrintList();
//
//	cout <<"\n\n" << "insert after value 3 the value 2500 " << endl;
//		MyLinkedList.InserAfterIndex(3, 2500) ;
//	MyLinkedList.PrintList();
//
//
//	system("pause>");
//
//
//}




#include "clsMyQueue.h"


//int main()
//{
//
//	clsMyQueue <int> MyQueue;
//
//	MyQueue.push(10);
//	MyQueue.push(20);
//	MyQueue.push(30);
//	MyQueue.push(40);
//	MyQueue.push(50);
//
//
//	cout << "\nQueue: \n";
//	MyQueue.Print();
//
//	cout << "\nQueue Size: " << MyQueue.Size();
//	cout << "\nQueue Front: " << MyQueue.front();
//	cout << "\nQueue Back: " << MyQueue.back();
//
//	MyQueue.pop();
//
//	cout << "\n\nQueue after pop() : \n";
//	MyQueue.Print();
//
//
//
//
//
//	system("pause>0");
//
//}


// Dynamic arrays 
#include "clsDynamicArray.h"

//int main() {
//
//	clsDynamicArray<int> MyArray(4);
//
//	MyArray.SetItem(0,5);
//	MyArray.SetItem(1,10);
//	MyArray.SetItem(2,30);
//	MyArray.SetItem(3,40);
//	cout <<" SetItemray elements : "<<endl;
//	MyArray.PrintList();
//	cout << "\nArray Size: " << MyArray.Size()<<endl;
//	cout << "Array is Empty : "<< MyArray.isEmpty() << endl;

	/*MyArray.Resize(2);
	cout << "Array After Resize : " << endl;
	   MyArray.PrintList();*/

	//cout << "the item is " << MyArray.GetItem(0) << endl;

	//MyArray.Reverse();
	//cout << "Reverse Array :" << endl;
	//MyArray.PrintList();

	//	
	//MyArray.Clear();
	//cout << "Array After Clear : " << endl;
	//MyArray.PrintList();


	//cout << "Delete item by index :" << endl;
	//MyArray.DeleteItemAt(2);
	//MyArray.PrintList();

	//cout << "Delete first item :" << endl;
	//MyArray.DeleteFirstItem();
	//MyArray.PrintList();


	//cout << "Delete last item :" << endl;
	//MyArray.DeleteLastItem();
	//MyArray.PrintList();


	//int index = MyArray.Find(10);

	//if (index != -1)
	//	cout << "\nItem with value 10 is Found at index " << index << " :-)\n";
	//else
	//	cout << "\nItem Is not found :-(\n";


	//MyArray.DeleteItemByValue(10);
	//cout << "Array After Deleting item with value 10 :" << endl;
	//MyArray.PrintList();
//
//
//	MyArray.InsertAt(2, 25);
//	cout << "Array After Inserting 25 at index 2 :" << endl;
//	MyArray.PrintList();
//
//
//
//	MyArray.InsertAtBegging(15);
//	cout << "Array After Inserting 15 at the begining :" << endl;
//	MyArray.PrintList();
//
//	MyArray.InsertATEnd(60);
//	cout << "Array After Inserting 60 at the begining :" << endl;
//	MyArray.PrintList();
//
//	MyArray.InsertAfter(2, 35);
//	cout << "Array After Inserting 35 after index 2 :" << endl;
//	MyArray.PrintList();
//
//
//	MyArray.InsertBefore(4, 70);
//	cout << "Array After  70 before index 4 :" << endl;
//	MyArray.PrintList();
//
//
//	system("pause>0");
//
//}



#include "MyQueueArr.h"

//
//int main()
//{
//
//	MyQueueArr <int> MyQueue;
//
//	MyQueue.push(10);
//	MyQueue.push(20);
//	MyQueue.push(30);
//	MyQueue.push(40);
//	MyQueue.push(50);
//
//
//	cout << "\nQueue: \n";
//	MyQueue.Print();
//
//	cout << "\nQueue Size: " << MyQueue.Size();
//	cout << "\nQueue Front: " << MyQueue.front();
//	cout << "\nQueue Back: " << MyQueue.back();
//
//	MyQueue.pop();
//
//	cout << "\n\nQueue after pop() : \n";
//	MyQueue.Print();
//
//
//	cout << "\n\n Item(2) : " << MyQueue.GetItem(2);
//
//
//	MyQueue.Reverse();
//	cout << "\n\nQueue after reverse() : \n";
//	MyQueue.Print();
//
//
//	MyQueue.UpdateItem(2, 600);
//	cout << "\n\nQueue after updating Item(2) to 600 : \n";
//	MyQueue.Print();
//
//
//	MyQueue.InsertAfter(2, 800);
//	cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
//	MyQueue.Print();
//
//
//
//	MyQueue.InsertAtFront(1000);
//	cout << "\n\nQueue after Inserting 1000 at front: \n";
//	MyQueue.Print();
//
//
//	MyQueue.InsertAtBack(2000);
//	cout << "\n\nQueue after Inserting 2000 at back: \n";
//	MyQueue.Print();
//
//
//	MyQueue.Clear();
//	cout << "\n\nQueue after Clear(): \n";
//	MyQueue.Print();
//
//	system("pause>0");
//
//
//}

// system booking

#include "clsQueueLine.h"

int main() {
	clsQueueLine PayBillQueue("A0", 10);
	PayBillQueue.IssueTicket();
	PayBillQueue.IssueTicket();
	PayBillQueue.IssueTicket();
	PayBillQueue.IssueTicket();


	PayBillQueue.ServeClient();
	PayBillQueue.ServeClient();

	PayBillQueue.GetQueueInfo();


}

