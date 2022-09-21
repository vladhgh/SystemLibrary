#ifndef SYSTEM_LIBRARY_DATETIME_HPP
#define SYSTEM_LIBRARY_DATETIME_HPP

#include "Object.hpp"

namespace System {
    class DateTime : public System::Object {
    public:
        std::string GetType() const override {
            return "System::DateTime";
        }
    };
}

#endif//SYSTEM_LIBRARY_DATETIME_HPP
