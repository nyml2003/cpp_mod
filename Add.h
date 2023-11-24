//
// Created by venty on 2023/11/24.
//

#ifndef MOD_ADD_H
#define MOD_ADD_H

#include <iostream>
#include "IOperation.h"
#include "Register.h"
#include "OperationFactory.h"

namespace MyCalculator {

    class Add : public IOperation {
    public:
        int getResult(int a, int b) override {
            return a + b;
        }
    };
    Register<Add, IOperation, OperationFactory> registerAdd("Add");
} // MyCalculator

#endif //MOD_ADD_H
