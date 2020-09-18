//
// Created by Anna on 12.09.2020.
//

#include "OperationWithMap.h"

std::map<int, std::vector<std::string>, std::greater<>> convertation::OperationWithMap::sortMap() {
    // перевернем MAP, а также посчитаем общее количество слов (для процентов частоты)
    std::map<int, std::vector<std::string>, std::greater<>> frequencyWords;
    for (const auto &itemMp : mp) {
        frequencyWords[itemMp.second].push_back(itemMp.first);
        ++wordCounter;
    }
    return frequencyWords;
}

unsigned int convertation::OperationWithMap::getWordCounter() const {
    return wordCounter;
}

void convertation::OperationWithMap::setMap(const convertation::Reader &reader) {
    this->mp = reader.fillMap();
}