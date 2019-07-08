#pragma once

#include <iosfwd>
#include <string>

#include <test_parse_assert_fail/export.hxx>

namespace test_parse_assert_fail
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  TEST_PARSE_ASSERT_FAIL_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
