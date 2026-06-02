int dividir(int numero1, int numero2) {
    int quociente = 0;
    int resto = numero1;

    while (resto >= numero2) {
        quociente = quociente + 1;
        resto = resto - numero2;
    }

    return quociente;
}