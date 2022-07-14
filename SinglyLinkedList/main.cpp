#include "SinglyLinkedList.h"

int main()
{
	SinglyLinkedList sll;

	// ������� � ����� ������
	sll.AddToTail(10);
	sll.AddToTail(20);
	sll.AddToTail(30);
	sll.AddToTail(40);
	sll.Print();
	// ������� � ������ ������
	sll.AddToHead(50);
	sll.AddToHead(60);
	sll.AddToHead(70);
	sll.AddToHead(80);
	sll.Print();

	// ���������� ���������, ����� ���������
	cout << "count: " << sll.GetCount() << "\n";
	cout << "index of 70: " << sll.IndexOf(70) << ", index of 90: " << sll.IndexOf(90) << "\n";

	// ������� �� �������
	sll.InsertInto(-1, -1);
	sll.Print();
	sll.InsertInto(2, 2);
	sll.Print();
	sll.InsertInto(22, 22);
	sll.Print();

	// �������� � ������ ������
	sll.DeleteFromHead();
	sll.DeleteFromHead();
	sll.DeleteFromHead();
	sll.Print();

	// �������� � ����� ������
	sll.DeleteFromTail();
	sll.DeleteFromTail();
	sll.DeleteFromTail();
	sll.Print();

	// �������� �� ���������� �������
	sll.DeleteByIndex(0);
	sll.DeleteByIndex(1);
	sll.DeleteByIndex(2);
	sll.Print();

	// ������� ������
	sll.Clear();
	sll.Print();
}