#include <bits/stdc++.h>
using namespace std;

int		main()
{
	multiset<int> s;

	//s.insert(10);
	//s.insert(4);
	//s.insert(10);
	s.emplace(4);
	s.emplace(3);
	s.emplace(2);
	
	
	multiset<int>::iterator it, it2, it3;
	for (it = s.begin(); it != s.end(); it++)
	{
		cout << *it << endl;
	}
	cout << endl;	
	it2 = s.find(4);
	s.erase(it2);
	it3 = s.find(10);
	s.erase(it3);
	for (it = s.begin(); it != s.end(); it++)
	{
		cout << *it << endl;
	}
}



