//
// Created by venty on 2023/11/24.
//

#ifndef MOD_CALCULATOR_H
#define MOD_CALCULATOR_H
#include "IOperation.h"
#include "Register.h"
#include "Add.h"
#include "Sub.h"
#include "OperationFactory.h"

namespace MyCalculator {
    class Calculator {
    public:
        static int getResult(const std::string& name, int a, int b) {
            IOperation* operation = OperationFactory::createOperation(name);
            if (operation == nullptr) {
                throw std::invalid_argument("Invalid operation name");
            }
            return operation->getResult(a, b);
        }
    };
}

#endif //MOD_CALCULATOR_H
