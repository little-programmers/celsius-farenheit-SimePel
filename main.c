#include <stdio.h>
#include <assert.h>

// Тут ваш код

void test_ctof() {
    assert(ctof(0) == 32);
    assert(ctof(1) == 33);
    assert(ctof(-1) == 30);
    assert(ctof(20) == 68);
    assert(ctof(43.4) == 110);
    assert(ctof(-102.8) == -153);

    printf("Все тесты перевода из C в F успешно пройдены!\n");
}

void test_ftoc() {
    assert(ftoc(32) == 0);
    assert(ftoc(33.9) == 1);
    assert(ftoc(30) == -1);
    assert(ftoc(68) == 20);
    assert(ftoc(111.3) == 44);
    assert(ftoc(-153.5) == -103);

    printf("Все тесты перевода из F в C успешно пройдены!\n");
}

int main() {
    test_ctof();
    test_ftoc();
    return 0;
}
