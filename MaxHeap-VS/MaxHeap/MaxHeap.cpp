// MaxHeap.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "heap.h"
#include <iostream>
#include <ctime>
#include <cmath>


using namespace std;

void use_demo();

int main()
{
	//use_demo();
	//getchar();

	heap<int> maxheap = heap<int>(100);

	srand(time(NULL));


	for (int i = 0; i < 50; i++)
	{
		maxheap.insert(rand() % 100);
	}

	while (!maxheap.isEmpty())
	{
		cout << maxheap.extractMax() << " ";
	}
	cout << endl;

	getchar();

    return 0;
}

