#include <stdio.h>
int main()
{
    char*red = "\033[1;31m";
    char*reset = "\033[0m";
    printf("Selamat Pagi, %sAUFA THARIQ AKRAM%s \nSelamat Siang, %sAUFA THARIQ AKRAM%s\nSelamat Malam, %sAUFA THARIQ AKRAM%s", red, reset, red, reset, red, reset);
    return 0;
}
