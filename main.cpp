#include <iostream>
#include <memory>
#include "src/Types/String.hpp"
#include "src/Types/Double.hpp"


auto getObject(const bool &returnString) -> std::unique_ptr<System::Object> {
    if (returnString) {
        return std::unique_ptr<System::String>{new System::String("Hola Hupa!")};
    } else {
        return std::unique_ptr<System::Double>{new System::Double(123.456)};
    }
}

int main() {
    auto object = getObject(true);
    auto stringObject = dynamic_cast<System::String*>(object.get());
    std::cout << "\nReturned Type: " << object->GetType() << "\nValue: " << stringObject->ToString()  << std::endl;

    auto object2 = getObject(false);
    auto doubleObject = dynamic_cast<System::Double*>(object2.get());
    std::cout << "\nReturned Type: " << object2->GetType() << "\nValue: " << doubleObject->ToString()  << std::endl;
    return 0;
}
