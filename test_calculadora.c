#include <assert.h>


int multiplicar(int a, int b);
int dividir(int a, int b);

int main() {
    assert(multiplicar(2, 0) == 0);
    assert(multiplicar(3, 6) == 18);
    assert(multiplicar(42, 64) == 2688);
    assert(dividir(14, 2) == 7);
    assert(dividir(99, 3) == 33);
    assert(dividir(144, 12) == 12);

    return 0;
}