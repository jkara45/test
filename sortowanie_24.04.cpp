#include <algorithm>
#include <iostream>
#include <vector>

struct Student {
    std::string imie;
    std::string nazwisko;
    int wiek;
};

bool porownaj(const Student &wiek1, const Student &wiek2) {

    return wiek1.wiek < wiek2.wiek;
}

int main(void) {
    std::vector<Student> student = {{"Maciej", "Boguslawski", 22},
                                    {"LJoachim", "Karaczewski", 20},
                                    {"Kasia", "Wojciechowska", 20},
                                    {"Jakub", "Kowalski", 25},
                                     {"Ala", "Wojciechowska", 20}
                                };

    std::stable_sort(student.begin(), student.end(), porownaj);

    for(const auto s : student) {
        std::cout << s.imie << " " << s.nazwisko << " " << s.wiek << "\n";
    }

    return 0;
}