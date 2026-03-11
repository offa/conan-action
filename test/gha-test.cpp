#include <catch2/catch_test_macros.hpp>
#include <stdexcept>

class Example
{
public:
    explicit Example(int value) : value_(value)
    {
    }

    void run() const
    {
        if (value_ != 27)
        {
            throw std::runtime_error{"Value is not 27!"};
        }
    }

    int getValue() const
    {
        return value_;
    }

private:
    const int value_;
};

TEST_CASE("run accepts value", "[ExampleTest]")
{
    const Example example{27};
    CHECK(example.getValue() == 27);
    CHECK_NOTHROW(example.run());
}

TEST_CASE("run fails on invalid value", "[ExampleTest]")
{
    const Example example{9};
    CHECK_THROWS_AS(example.run(), std::runtime_error);
}
