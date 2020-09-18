#include <iostream>
#include "Reader.h"
#include "OperationWithMap.h"
#include "Writer.h"

int main(int argc, char* argv[]) {

    if (argc <= 2) {
        std::cout << "Wrong number of parameters sent." << std::endl;
        return 0;
    }

    std::string nameFileIn = argv[1];
    std::string nameFileOut = argv[2];

    using namespace convertation;

    // Создаем три объекта каждого класса, сразу передаем первому в конструктор имя входного фалйа
    Reader reader(nameFileIn);
    OperationWithMap mapForWriting;
    Writer writer(nameFileOut);

    // Задаем мап объекту с операциями, там же будет по твоей логике считывание данных из файла
    mapForWriting.setMap(reader);
    // Отдаем этот мап врайтеру и сразу же записываем в файл
    writer.writeCSVFile(mapForWriting);

    return 0;
}