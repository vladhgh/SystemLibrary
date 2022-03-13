//
// Created by Vlad Prokopev on 3/13/22.
//

#ifndef SYSTEMLIBRARY_DOUBLE_HPP
#define SYSTEMLIBRARY_DOUBLE_HPP

#include "Object.hpp"
namespace System {
    class Double : public System::Object, public System::IConvertable {
    private:
        double value;
    public:
        Double() = default;

        explicit Double(double value) : value(value) {};

        /**
         * Object Interface
         */
        std::string GetType() const override {
            return "System::Double";
        }

        /**
         * IConvertable Interface
         */
        bool ToBoolean() override {
            return false;
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
            return std::to_string(value);
        }
        DateTime ToDateTime() override {
            return System::DateTime();
        }
    };
}

#endif//SYSTEMLIBRARY_DOUBLE_HPP
