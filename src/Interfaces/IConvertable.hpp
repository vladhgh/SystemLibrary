//
// Created by Vlad Prokopev on 3/13/22.
//

#ifndef SYSTEMLIBRARY_ICONVERTABLE_HPP
#define SYSTEMLIBRARY_ICONVERTABLE_HPP

#include <cstdlib>
#include "../Types/DateTime.hpp"
#include "../Types/String.hpp"

namespace System {
    class IConvertable {
    public:
        virtual ~IConvertable() = default;
        virtual bool ToBoolean() = 0;
        virtual char ToChar() = 0;
        virtual unsigned char ToByte() = 0;
        virtual short ToInt16() = 0;
        virtual ushort ToUInt16() = 0;
        virtual int ToInt32() = 0;
        virtual uint ToUInt32() = 0;
        virtual long ToInt64() = 0;
        virtual ulong ToUInt64() = 0;
        virtual float ToFloat() = 0;
        virtual double ToDouble() = 0;
        virtual std::string ToString() = 0;
        virtual System::DateTime ToDateTime() = 0;
    };
}


#endif//SYSTEMLIBRARY_ICONVERTABLE_HPP
