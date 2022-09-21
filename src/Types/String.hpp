#ifndef SYSTEM_LIBRARY_STRING_HPP
#define SYSTEM_LIBRARY_STRING_HPP

#include <string>
#include <iostream>
#include "Object.hpp"
#include "../Interfaces/IConvertable.hpp"

namespace System {
    class String : public System::Object, public System::IConvertable {
    private:
        std::string str;
    public:
        String() = default;

        String(const char *str) : str(str) {};

        String& operator=(const char* str) {
            return *this;
        }
        const char* ToCString() const {
            return str.c_str();
        }
        void Print()  {
            std::cout << str << std::endl;
        }

        /**
         * Object Interface
         */
        std::string GetType() const override {
            return "System::String";
        }

        /**
         * IConvertable Interface
         */
        bool ToBoolean() override {
            return str == "True";
        }
        char ToChar() override {
            return 0;
        }
        unsigned char ToByte() override {
            return 0;
        }
        short ToInt16() override {
            return 0;
        }
        ushort ToUInt16() override {
            return 0;
        }
        int ToInt32() override {
            return 0;
        }
        uint ToUInt32() override {
            return 0;
        }
        long ToInt64() override {
            return 0;
        }
        ulong ToUInt64() override {
            return 0;
        }
        float ToFloat() override {
            return 0;
        }
        double ToDouble() override {
            return 0;
        }
        std::string ToString() override {
            return str;
        }
        System::DateTime ToDateTime() override {
            return System::DateTime();
        }

    };
}

#endif//SYSTEM_LIBRARY_STRING_HPP
