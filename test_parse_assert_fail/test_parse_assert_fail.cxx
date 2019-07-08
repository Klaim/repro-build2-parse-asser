#include <test_parse_assert_fail/test_parse_assert_fail.hxx>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace test_parse_assert_fail
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
