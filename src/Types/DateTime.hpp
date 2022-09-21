#ifndef SYSTEMLIBRARY_DATETIME_HPP
#define SYSTEMLIBRARY_DATETIME_HPP

#include "Object.hpp"

namespace System {
    class DateTime : public System::Object {
    public:
        std::string GetType() const override {
            return "System::DateTime";
        }
    };
}

#endif//SYSTEMLIBRARY_DATETIME_HPP
