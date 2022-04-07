#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <fcntl.h>

char *rdm = "-01234567890+";
char *empty = "";
char *dst;
int fd;
char *veryveryverylongline = "Кухни для нас — главное. В них воплощается весь наш опыт. Именно здесь профессиональные повара на современном производстве создают блюда, которые ежедневно заказывают тысячи людей. Мы тщательно отбираем поставщиков и продукты для каждого блюда. Все ингредиенты проходят этапы тестов и дегустаций, после чего ложатся в основу нового рецепта. После запуска мы внимательно следим за вашими отзывами и дорабатываем каждый продукт, чтобы он нравился всем. Ежедневно инспектор службы контроля проверяет каждую из наших кухонь на соответствие высоким стандартам качества и чистоты.";

int main()
{
	dst = malloc(1000);
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸STRLEN TEST✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("🌱TEST 1 random\n");
	printf("      strlen: %zu 🌞\n", strlen(rdm));
	printf("   ft_strlen: %zu 🌞\n", ft_strlen(rdm));
	printf("🌱TEST 2 empty line\n");
	printf("      strlen: %zu 🌞\n", strlen(empty));
	printf("   ft_strlen: %zu 🌞\n", ft_strlen(empty));
	printf("🌱TEST 3 long line 🌞\n");
	printf("      strlen: %zu 🌞\n", strlen(veryveryverylongline));
	printf("   ft_strlen: %zu 🌞\n", ft_strlen(veryveryverylongline));
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸STRCMP TEST✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("🌱TEST 1 empty and random\n");
	printf("      strcmp: %d 🌞\n", strcmp(empty, rdm));
	printf("   ft_strcmp: %d 🌞\n", ft_strcmp(empty, rdm));
	printf("🌱TEST 2 random and empty line\n");
	printf("      strcmp: %d 🌞\n", strcmp(rdm,empty));
	printf("   ft_strcmp: %d 🌞\n", ft_strcmp(rdm,empty));
	printf("🌱TEST 3 long line and long line 🌞\n");
	printf("      strcmp: %d 🌞\n", strcmp(veryveryverylongline, veryveryverylongline));
	printf("   ft_strcmp: %d 🌞\n", ft_strcmp(veryveryverylongline ,veryveryverylongline));
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸STRCPY TEST✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("🌱TEST 1 random\n");
	printf("      strcpy: %s 🌞\n", strcpy(dst, rdm));
	printf("   ft_strcpy: %s 🌞\n", ft_strcpy(dst, rdm));
	printf("🌱TEST 2 empty line\n");
	printf("      strcpy: %s 🌞\n", strcpy(dst, empty));
	printf("   ft_strcpy: %s 🌞\n", ft_strcpy(dst, empty));
	printf("🌱TEST 3 long line 🌞\n");
	printf("      strcpy: %s 🌞\n", strcpy(dst, veryveryverylongline));
	printf("   ft_strcpy: %s 🌞\n", ft_strcpy(dst, veryveryverylongline));
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸STRDUP TEST✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("🌱TEST 1 random\n");
	printf("      strdup: %s 🌞\n", strdup(rdm));
	printf("   ft_strdup: %s 🌞\n", ft_strdup(rdm));
	printf("🌱TEST 2 empty line\n");
	printf("      strdup: %s 🌞\n", strdup(empty));
	printf("   ft_strdup: %s 🌞\n", ft_strdup(empty));
	printf("🌱TEST 3 long line\n");
	printf("      strdup: %s 🌞\n", strdup(veryveryverylongline));
	printf("   ft_strdup: %s 🌞\n", ft_strdup(veryveryverylongline));
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸 READ TEST ✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	char lol[1000];
	char kek[1000];
	printf("🌱TEST 1 Write 4 symbols\n");
	printf("      read: %zu 🌞\n", read(0, lol, 5));
	printf("🌱TEST 1 Write 4 symbols\n");
	printf("      ft_read: %zu 🌞\n", ft_read(0, kek, 5));
	int fdlol = open("test",O_CREAT | O_WRONLY, 777);
	write(fdlol, veryveryverylongline, strlen(veryveryverylongline));
    char c[1000];
	printf("🌱TEST 2 From file\n");
    int fd1 = open("test", O_RDONLY, 0);
    int fd2 = open("test", O_RDONLY, 0);
    printf("      read: %zu\n", read(fd1, c, strlen(veryveryverylongline)));
    printf("   ft_read: %zu\n", ft_read(fd2, c, strlen(veryveryverylongline)));
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸WRITE TEST✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸✨🌸\n");
	printf("🌱STDIN TEST\n");
	char *strkek = strdup("lolkek");
	printf("🌱TEST 1 random\n");
	printf("     write: %zu 🌞\n", write(1, strkek,strlen(strkek)));
	printf("  ft_write: %zu 🌞\n", ft_write(1, strkek, strlen(strkek)));
	char *strkek1 = strdup(veryveryverylongline);
	printf("🌱TEST 2 very long line\n");
	printf("     write: %zu 🌞\n", write(1, strkek1,strlen(strkek1)));
	printf("  ft_write: %zu 🌞\n", ft_write(1, strkek1, strlen(strkek1)));
	char *strkek2 = strdup("");
	printf("🌱TEST 3 void line \n");
	printf("     write: %zu 🌞\n", write(1, strkek2,strlen(strkek2)));
	printf("  ft_write: %zu 🌞\n", ft_write(1, strkek2, strlen(strkek2)));
}

