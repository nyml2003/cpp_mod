//
// Created by venty on 2023/11/24.
//

#ifndef MOD_SUB_H
#define MOD_SUB_H

#include "IOperation.h"
#include "OperationFactory.h"
#include "Register.h"

namespace MyCalculator {

    class Sub : public IOperation {
    public:
        int getResult(int a, int b) override {
            return a - b;
        }
    };
    Register<Sub, IOperation, OperationFactory> registerSub("Sub");

} // MyCalculator

#endif //MOD_SUB_H
