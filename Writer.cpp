//
// Created by Anna on 14.09.2020.
//

#include "Writer.h"

convertation::Writer::Writer() {
    this->fileOut= "output.txt";
}

convertation::Writer::Writer(const std::string &fileOut) {
    this->fileOut= fileOut;
}

void convertation::Writer::writeCSVFile(convertation::OperationWithMap& OperationWithMap) const {
    std::ofstream output;
    output.open(this->getFileOut());

    auto mapForWriting = OperationWithMap.sortMap();
    unsigned int wordCounter = OperationWithMap.getWordCounter();

    for (const auto& itemMp : mapForWriting)
        for (const auto& itemVector : itemMp.second)
            output << itemVector << ";" << itemMp.first << ";" << (double) itemMp.first / wordCounter << std::endl;

    output.close();
}

std::string convertation::Writer::getFileOut() const {
    return fileOut;
}
