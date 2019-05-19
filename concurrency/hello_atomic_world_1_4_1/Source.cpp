#include<iostream>
#include<thread>

using namespace std;

void hello()
{
	cout << "hello atomic world...\n";
}

int main()
{
	thread t(hello);
	t.join();

	system("pause");

	return 0;
}