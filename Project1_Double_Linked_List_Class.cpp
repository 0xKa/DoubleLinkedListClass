// Project1_Double_Linked_List_Class 
#include <iostream>
#include "clsDblLinkedList.h";
using namespace std;


int main()
{

	clsDblLinkedList <float> LinkedList1;

	LinkedList1.InsertAtEnd(1111);
	LinkedList1.InsertAtEnd(2222);
	LinkedList1.InsertAtEnd(3333);
	LinkedList1.InsertAtEnd(4444);

	
	cout << "\nLinked List Before : " << endl;
	LinkedList1.Print();
	
	LinkedList1.InsertAfter(3, 900009);

	cout << "\nLinked List After : " << endl;
	LinkedList1.Print();




	system("pause>0");
	return 0;
}

