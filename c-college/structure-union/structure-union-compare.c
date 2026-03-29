#include <stdio.h>
#include <string.h>

struct DataStruct {
    int intValue;
    float floatValue;
    char strValue[20];
};

union DataUnion {
    int intValue;
    float floatValue;
    char strValue[20];
};

int main() {
    struct DataStruct dataStruct;
    union DataUnion dataUnion;

    printf("Size of struct DataStruct: %d bytes\n", sizeof(dataStruct));
    printf("Size of union DataUnion: %d bytes\n", sizeof(dataUnion));

    return 0;
}