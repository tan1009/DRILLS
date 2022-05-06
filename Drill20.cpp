#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

using namespace std;


template<typename T>
void print_elements(T& t)
{
	for (auto elements : t)
		cout << elements << " ";
	cout << endl;
}

template<typename T>
void increase(T& t, int n)
{
	for (auto &element : t)
	{
		element = element + n;
	}
}

//array tanishq
//array meero
//copy tanishq's number to meero
//copy(tanishq start, tansiq end,  meero)
//Iterator = tansisq - range of numbers that we gonna copy
//Iterator2 = meero - the copied numbers from tanishq

template<typename Iterator, typename Iterator2>
Iterator2 copyValues(Iterator from, Iterator To, Iterator2 result)
{
	if (from == To) return result;

	for (Iterator it = from; it != To; ++it)
	{
		*result++ = *it;
	}
	return result;
}


int main()
{
	
	int tanishq[10];
	for (int i = 0; i < 10; i++)
	{
		tanishq[i] = i;
	}
	increase(tanishq, 20);
	print_elements(tanishq);


	array<int, 10> meero;
	copyValues(tanishq, tanishq + 10, meero.begin()); //same as built in funciton
	std::copy(tanishq, tanishq + 10, meero.begin()); //built in function
	
	vector<int> vec(10);
	copyValues(tanishq, tanishq + 10, vec.begin());
	std::copy(tanishq, tanishq + 10, vec.begin());

	list<int> myList(10);
	copyValues(tanishq, tanishq + 10, myList.begin());
	std::copy(tanishq, tanishq+10, myList.begin());


	vector<int>::iterator it = std::find(vec.begin(), vec.end(), 3);

		cout << *it << endl;

		for (int i = 0; i < vec.size(); i++)
		{
			if (vec[i] == *it)
				cout << *it << " is at index: " << i << endl;
		}

	
		list<int>::iterator itListFound = std::find(myList.begin(), myList.end(), 27);
		
		list<int>::iterator itList = myList.begin();


		if (itList == itListFound)
		{
			cout << *itListFound << " is found at " << std::distance(myList.begin(), itList)<<endl;
		}
		else
		{
			cout << "not found" << endl;
		}




}
