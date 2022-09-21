//
// Created by Vlad Prokopev on 3/13/22.
// Test change
//

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
