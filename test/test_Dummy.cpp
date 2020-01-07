#include <boost/test/unit_test.hpp>
#include <no_standard_layout_package/Dummy.hpp>

using namespace no_standard_layout_package;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    no_standard_layout_package::DummyClass dummy;
    dummy.welcome();
}
