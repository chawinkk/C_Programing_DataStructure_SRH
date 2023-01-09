#include <stdio.h>
#include <stdlib.h>

#define BUFF_MAX 70
#define ARRAY_MAX 100

struct address {
    char main_street[BUFF_MAX];
    int number;
    int postcode;
    char city[BUFF_MAX];
    char country[BUFF_MAX];
};

struct record {
    char name[BUFF_MAX];
    char lname[BUFF_MAX];
    int age;
    char gen;
    struct address address;
};

struct array {
    struct record data[ARRAY_MAX];
};

int main(void) {
    FILE* file = fopen("Students_Data.txt", "r");

    if(!file) {
        perror("fopen");
        return 1;
    }

    char che;
    do {
        che = fgetc(file);
    } while (che != '\n');

    struct array array;
    struct record record;
    int array_size = 0;
    while (fscanf(file, "%[^;];%[^;];%d;%c;%[^,], %d, %d, %[^,], %[^.].\n",
                  record.name, record.lname, &record.age, &record.gen,
                  record.address.main_street, &record.address.number,
                  &record.address.postcode, record.address.city,
                  record.address.country) == 9) {
        array.data[array_size] = record;
        ++array_size;
        if (array_size == 100) {
            break;
        }
    }

    printf("Name, LastNames, Age, Gender, Address\n");
    for (int i = 0; i < array_size && i < 3; ++i) {
        struct record* record = &array.data[i];
        struct address* address = &record->address;
        printf("%s, %s, %d, %c, %s  %d  %d  %s  %s\n", record->name,
               record->lname, record->age, record->gen,
               address->main_street, address->number, address->postcode,
               address->city, address->country);
    }

    fclose(file);

    return 0;
}
