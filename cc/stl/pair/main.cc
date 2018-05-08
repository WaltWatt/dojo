#include <iostream>

using namespace std;

int main()
{
	cout << "pair<int, int> p = {5, 47};" << endl;
	pair<int, int> p = {5, 47};
	cout << "p.first: " << p.first << "; p.second: " << p.second << endl;

	cout << "\npair<int, string> q;" << endl;
	pair<int, string> q;
	cout << "q.first: " << q.first << "; q.second: " << q.second << endl;
	cout << "\nq.first = 42;" << endl;
	q.first = 42;
	cout << "q.second = \"Some string\";" << endl;
	q.second = "Some string";
	cout << "q.first: " << q.first << "; q.second: " << q.second << endl;
	cout << "\npair<int, string> s(q);" << endl;
	pair<int, string> s(q);
	cout << "s.first: " << s.first << "; s.second: " << s.second << endl;

	return 0;
}
