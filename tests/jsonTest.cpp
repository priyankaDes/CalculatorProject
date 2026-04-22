#include <gtest/gtest.h>
#include "json.hpp"
#include <fstream>
using json = nlohmann::json;

class TestJson : public ::testing::Test {
protected:
    void SetUp() override {
        // Code here will be called immediately after the constructor (right before each test).
    }

    void TearDown() override {
        // Code here will be called immediately after each test (right before the destructor).
    }
};

TEST_F(TestJson, ParseJson){

    std :: ifstream file("tests/tests.json");
    ASSERT_TRUE(file.is_open()) << "Failed to open the JSON file.";
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}