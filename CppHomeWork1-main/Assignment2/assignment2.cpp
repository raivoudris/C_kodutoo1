#include "assignment2.hpp"
#include <string>
#include <vector>
#include <array>

// Muutujate väärtuse muutmine (assignment, =)
bool RG::Homework1::assignment2()
{
    using namespace std::literals;
    int i1;
    long long i2{7ll};
    long double d{4.5l};
    char8_t c{u8'd'};
    std::u8string s{u8"Hello World!"s};
    std::vector v{1, 2, 3, 4, 5};
    std::array a{2, 3, 7, 5, 6};

    int i1 = 4; // Muuda muutuja i1 väärtus 4-ks

    i2 = ++i2; // Muuda muutuja i2 väärtus ++i2-ks
    
    d += 0.7l // Muuda muutuja d väärtus d + 0.7l-ks

    c = u8'b'; // Muuda muutuja c väärtus u8'b'-ks

    s = "Raivo"; // Muuda muutuja s väärtus enda nimeks

    v = {5, 4, 3, 2, 1} // Muuda muutuja v väärtus {5, 4, 3, 2, 1}-ks

    a[2] = i1 // Muuda muutuja a.at(2) väärtus i1-ks

    // Kontroll, et muutujad on õiget tüüpi ja väärtusega
    return (i1 == 4)
    && (i2 == 8ll)
    && (d == 5.2l)
    && (c == u8'b')
    && (s != u8"Hello World!"s)
    && (v == (std::vector{5, 4, 3, 2, 1}))
    && (a == (std::array{2, 3, 4, 5, 6}));
}

