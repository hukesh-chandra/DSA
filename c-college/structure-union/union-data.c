#include <stdio.h>
#include <string.h>

union Data {
    int intValue;
    float floatValue;
    char strValue[20];
};

int main() {
    union Data data;

    // Assign integer value
    data.intValue = 10;
    printf("Data as integer: %d\n", data.intValue);

    // Assign float value
    data.floatValue = 220.5;
    printf("Data as float: %.2f\n", data.floatValue);
    printf("Data as integer after assigning float: %d\n", data.intValue);

    // Assign string value
    strcpy(data.strValue, "Hello, World!");
    printf("Data as string: %s\n", data.strValue);
    printf("Data as float after assigning string: %.2f\n", data.floatValue);

    return 0;
}