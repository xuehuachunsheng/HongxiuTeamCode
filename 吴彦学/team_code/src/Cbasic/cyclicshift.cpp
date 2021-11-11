#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;
int main(int argc, char **argv)
{
    string str(argv[1]);
    unsigned int a = (unsigned int)stoi(str);

    for(int i = 31; i >= 0; --i)
        printf("%c", (a >> i) & 1 ? '1':'0');
    printf("\n");
    for(int i = 31; i < 63; ++i)
        printf("%c", (a >> i) & 1 ? '1':'0');
    return 0;
}