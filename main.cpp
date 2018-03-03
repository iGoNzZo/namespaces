#include "f.h"
#include "g.h"

int main()	{
	std::cout << "\nCall to Namespace A with A::\n";
	A::f();
	A::g();
	
	std::cout << "\nCall to namespace A with using A::\n";
	using A::f;
	using A::g;
	f();
	g();
	
	std::cout << "\nCall to Namespace A with using namespace A\n";
	using namespace A;
	f();
	g();
	
	return 0;
}