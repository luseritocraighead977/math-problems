int random_math(void) {
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    int result = 0;
    switch (rand() % 3) {
        case 0:
            result = num1 + num2;
            break;
        case 1:
            result = num1 - num2;
            break;
        case 2:
            result = num1 * num2;
            break;
    }
    return result;
}