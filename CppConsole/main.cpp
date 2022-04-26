#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Coords;

int main()
{
    init_apartment();
    Uri uri(L"http://aka.ms/cppwinrt");
    printf("Hello, %ls!\n", uri.AbsoluteUri().c_str());
    Coord a = Coord();
    Coord b = Coord(3, 4);
    printf("Distance between %ls and %ls is %f\n", a.ToString().c_str(), b.ToString().c_str(), a.Distance(b));
}
