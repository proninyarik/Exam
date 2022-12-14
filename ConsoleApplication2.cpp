#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int v[] = { 1, 2, 3, 4, 6, 12 };
	//ВВодимо дільники 
	auto result = accumulate(begin(v), end(v), 0, [](int a, int b)
		{
			if (b % 2 == 0)
			{
				return a + b;
			}
			else
			{
				return a;
			}
		});
	// ВВели умову при якій працює сума парних елементів
	cout << "RESULT\t" << result << endl;
	return 0;
}
