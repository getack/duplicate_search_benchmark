#include <iostream>
#include <vector>

#include "algorithms/algorithms.h"

// External Library includes
#include "../danlib/danlib.h"


using namespace std;
int main()
{


	vector<int> test;
	BSTSearch * algo;

	bool deleteCondition = true;

	cout << "No Dups:" << endl;
	test = {1,9,6,7,2,5};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "No Subtree" << endl;
	test = {7,3,1,7,2,5};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Left:" << endl;
	test = {2,1,9,6,7,2,5};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Right:" << endl;
	test = {7,8,3,1,7,2,5};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Both:" << endl;
	test = {7,8,6,3,1,7,2,5};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test1: 0" << endl;
	test = {2,5,9,10,7,4,3,1,6,8,};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test2: 0" << endl;
	test = {1,3,6,15,14,2,11,13,20,8,10,19,9,5,17,18,12,16,7,4,};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test3: 1" << endl;
	test = {19,14,6,9,11,5,4,13,17,16,7,3,8,1,2,15,12,18,10,1};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test4: 1" << endl;
	test = {9,5,8,1,3,6,1,4,2,7};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test5: 2" << endl;
	test = {9,2,1,6,1,4,3,10,13,12,15,18,17,5,14,16,2,8,7,11};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test6: 3" << endl;
	test = {14,11,7,15,4,5,17,8,2,12,9,16,1,1,10,2,13,6,3,3};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test7: 2" << endl;
	test = {8,7,6,2,1,3,5,4,2,1};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test8: 4" << endl;
	test = {15,1,14,13,4,5,1,12,2,7,3,11,6,3,4,9,10,2,16,8};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test9: 5" << endl;
	test = {4,15,3,13,11,3,5,1,9,12,7,6,2,5,1,4,14,2,8,10};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test10: 6" << endl;
	test = {2,5,6,3,2,6,14,5,3,13,7,4,1,10,4,9,1,11,8,12};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test11: 3" << endl;
	test = {2,6,3,2,1,3,4,1,5,7};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test12: 7" << endl;
	test = {7,6,5,10,4,1,9,8,2,13,5,3,2,12,1,4,11,3,6,7};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test13: 4" << endl;
	test = {1,2,3,6,5,2,4,3,4,1};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test14: 8" << endl;
	test = {5,3,7,4,3,8,2,6,2,11,4,12,1,9,1,7,8,5,6,10};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test15: 9" << endl;
	test = {5,4,1,6,1,8,9,6,7,11,3,4,5,8,7,3,10,9,2,2};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test16: 5" << endl;
	test = {3,2,2,5,1,1,4,5,3,4};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;

	cout << "Test17: 10" << endl;
	test = {4,3,5,8,7,8,4,9,3,9,2,10,1,6,2,5,10,1,6,7};
	DanLib::PrintArray(test);
	algo = new BSTSearch(test, deleteCondition);
	algo->Do();
	cout << algo->GetDuplicateCounter() << endl << endl;
	delete algo;
	algo = NULL;



cout << "DONE!" << endl;


}

