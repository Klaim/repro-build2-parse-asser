#include <cassert>
#include <sstream>
#include <stdexcept>

#include <test_parse_assert_fail/version.hxx>
#include <test_parse_assert_fail/test_parse_assert_fail.hxx>

int main ()
{
  using namespace std;
  using namespace test_parse_assert_fail;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
