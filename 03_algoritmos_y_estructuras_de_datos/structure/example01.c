/*

structure or funtion

*/

#include <stdio.h>

#define LON 128

typedef struct
{
    char author[LON];
    char title[LON];
    int year;
} book;

int main() {
    book novel = {"Mario Vargas Llosa", "El heroe discreto"};

    printf("Enter the publication year of %s, de %s", novel.title, novel.author);
    scanf("%d", &novel.year);

    printf("%s fue escrito por %s en %d.\n", novel.title, novel.author, novel.year);

    return 0;
}
