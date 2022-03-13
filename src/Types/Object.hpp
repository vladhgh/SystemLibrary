//
// Created by Vlad Prokopev on 3/13/22.
//

#ifndef SYSTEMLIBRARY_OBJECT_HPP
#define SYSTEMLIBRARY_OBJECT_HPP

namespace System {
    class Object {
    public:
        virtual std::string GetType() const = 0;
        virtual ~Object() = default;
    };
}

#endif//SYSTEMLIBRARY_OBJECT_HPP
