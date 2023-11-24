//
// Created by venty on 2023/11/24.
//

#ifndef MOD_OPERATIONFACTORY_H
#define MOD_OPERATIONFACTORY_H

#include <string>
#include <map>
#include "IOperation.h"

namespace MyCalculator {

    class OperationFactory {
    public:
        typedef IOperation* (*CreateOperationFunc)();
        static IOperation* createOperation(const std::string& name) {
            auto it = getMap()->find(name);
            if (it == getMap()->end()) {
                return nullptr;
            }
            return it->second();
        }
        static void registerClass(const std::string& name, CreateOperationFunc func) {
            getMap()->insert(std::make_pair(name, func));
        }
    private:
        static std::map<std::string, CreateOperationFunc>* getMap() {
            static std::map<std::string, CreateOperationFunc> m_map;
            return &m_map;
        }
    };

} // MyCalculator

#endif //MOD_OPERATIONFACTORY_H
