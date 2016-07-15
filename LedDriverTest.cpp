extern "C"
{
#include "LedDriver.h"
}

#include "CppUTest/CommandLineTestRunner.h"

TEST_GROUP(LedDriver)
{
	void setup()
	{

	}

	void teardown()
	{

	}
};

TEST(LedDriver, Create)
{
	FAIL("Start here");
}

int main(int argc, char* argv[])
{
	return RUN_ALL_TESTS(argc, argv);
}
