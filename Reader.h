//
// Created by Anna on 12.09.2020.
//


#ifndef LAB_0B_READER_H
#define LAB_0B_READER_H

#include <string>
#include <map>
#include "Reader.h"

namespace convertation {
    class Reader {

    public:
        Reader();

        Reader(const std::string &fileIn);

        std::string getFileIn() const;

        std::map<std::string, int> fillMap() const;

        static bool betweenLimits(char symbol, char limit_1, char limit_2);

        static bool isPermissibleSymbol(char symbol);

    private:
        std::string fileIn;
    };
}

#endif //LAB_0B_READER_H
