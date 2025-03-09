int main() {
    // Declare variables
    int x = 0;
    int y = 0;
    int z = 0;

    // Ask for user input
    printf("Please enter a number: ");
    scanf("%d", &x);
    printf("Please enter another number: ");
    scanf("%d", &y);

    // Calculate the sum, product, and difference of the two numbers
    z = x + y;
    int product = x * y;
    int difference = x - y;

    // Print the results
    printf("The sum is: %d\n", z);
    printf("The product is: %d\n", product);
    printf("The difference is: %d\n", difference);

    return 0;
}
