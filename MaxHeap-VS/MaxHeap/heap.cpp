#include "stdafx.h"
#include "heap.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void use_demo()
{
	std::vector<int> a = { 1,4, 2,3,5,6 };

	std::sort(a.begin(), a.end());

	for (auto &i : a)
	{
		std::cout << i << std::endl;
	}
}