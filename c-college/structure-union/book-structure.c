#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int pages;
    float price;
};

int main() {
    struct Book books[3];

    for(int i = 0; i < 3; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %s", books[i].title);
        printf("Author: ");
        scanf(" %s", books[i].author);
        printf("Number of pages: ");
        scanf("%d", &books[i].pages);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    printf("\nBook Details:\n");
    printf("S.No.\tBook Name\tPages\tAuthor Name\tPrice\n");
    for(int i = 0; i < 3; i++) {
        printf("%d \t%s \t\t%d \t%s \t\t%.2f\n", i + 1, books[i].title, books[i].pages, books[i].author, books[i].price);
    }
    return 0;
}
















