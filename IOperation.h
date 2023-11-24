//
// Created by venty on 2023/11/24.
//

#ifndef MOD_IOPERATION_H
#define MOD_IOPERATION_H

namespace MyCalculator {

    class IOperation {
    public:
        virtual int getResult(int a, int b) = 0;
    };

} // MyCalculator

#endif //MOD_IOPERATION_H
