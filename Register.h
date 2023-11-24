//
// Created by venty on 2023/11/24.
//

#ifndef MOD_REGISTER_H
#define MOD_REGISTER_H

#include <string>

namespace MyCalculator {

    template <typename T,typename Interface,typename Factory>
    class Register {
    public:
        static Interface* createInstance() { return new T(); }
        explicit Register(const std::string& name) { Factory::registerClass(name, &Register::createInstance); }
    };
} // MyCalculator




#endif //MOD_REGISTER_H
