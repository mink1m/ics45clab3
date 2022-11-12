#include "Movie.h"

using namespace std;

void test();

int main()
{
	cout << "Start testing\n" << endl;
	test();
	cout << "\nFinished testing" << endl;
	return 0;
}

void test()
{
	Movie mm;
	mm.setNumberOfActors(5);

	Movie nn(5,1999,3,19.99,"broiwhejiobr");
	Movie bb(nn);
}