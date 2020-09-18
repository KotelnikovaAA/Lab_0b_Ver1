//
// Created by Anna on 14.09.2020.
//

#ifndef LAB_0B_WRITER_H
#define LAB_0B_WRITER_H

#include "OperationWithMap.h"
#include <vector>
#include <map>
#include <fstream>
#include <string>

namespace convertation {
    class Writer {
    public:
        Writer();

        Writer(const std::string &fileOut);

        void writeCSVFile(convertation::OperationWithMap &OperationWithMap) const;

        [[nodiscard]] std::string getFileOut() const;

    private:
        std::string fileOut = "output.csv";
    };
}

#endif //LAB_0B_WRITER_H
