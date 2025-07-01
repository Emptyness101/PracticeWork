#include <iostream>
#include "../Libs/json/json.hpp"

int main() {

    std::string json_string = R"({
        "name": "Keril",
        "age": 666,
        "is_student": false
    })";

    nlohmann::json data = nlohmann::json::parse(json_string);

    std::cout << data["name"];

    return 0;
}

