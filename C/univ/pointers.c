#include <stdio.h>
#include <string.h>

/*
 * Function Declare Region
 */
int createPointers();
int ptrAndArrays();

/*
 * Main Function Region
 */
int main() {
    char funcName[32];

    printf("Enter Function Name => ");
    scanf("%s", funcName);

    if (strcmp(funcName, "createPointers") == 0) createPointers();
    else if (strcmp(funcName, "ptrAndArrays") == 0) ptrAndArrays(); 
    else return main();
}

/*
 * Actual Function Region
 */
int aValue = 7;

int createPointers() {
    // ptr holds the value of aValue's memory address.
    int* ptr = &aValue; // A pointer variable, with the name ptr
                        // that stores the address of aValue
                        
    printf("aValue => %d/nmemoryAddr => %p\nptr => %p\nDereference => %d\n", \
            aValue, &aValue, ptr, *ptr);

    return 0;
}

int ptrAndArrays() {
    int aNumbers[4] = {25, 50, 75, 100};
   
    for (int i = 0; i < 4; i++) {
        printf("\n");

        printf("aNumbers[%d]\t", i);
        printf("%d\t", aNumbers[i]);
        printf("%p\t", &aNumbers[i]);
    }

    printf("\n\n");

    printf("Now Let's learn about the relationship between pointers and Arrays\n");
    printf("aNumbers : %p / &aNumbers[0] : %p\n\n", aNumbers, &aNumbers[0]);
    
    // Get the value of the first element in myNumbers
    printf("What value *aNumbers has => %d\n", *aNumbers);

    // Get the value of the second element in myNumbers
    printf("What value *(aNumbers + 1) has => %d\n", *(aNumbers + 1));

    // Get the value of the third element in myNumbers
    printf("What value *(aNumbers + 2) has => %d\n", *(aNumbers + 2));

    printf("\n");

    /*
     * We can know that *(aNumbers + N) equals to index; aNumbers[N]
     * This is how pointers and Arrays works.
     */
    
    // Now Let's change a value in an Arrays.
    // Change the value of the first element to 7.
    *aNumbers = 7;

    // Change th value of the second element to 18;
    *(aNumbers + 1) = 18;

    // Get the value of first element.
    printf("The changed equals to aNumbers[0] %d and aNumbers[1] %d\n", *aNumbers, *(aNumbers + 1));

    return 0;
}
