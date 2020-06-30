#include "betawise.h"

#define DEFINE_SYSCALL(addr, name) \
    asm(".global " #name); \
    asm(#name ": .word " #addr)

DEFINE_SYSCALL(0xA000, ClearScreen);
DEFINE_SYSCALL(0xA004, SetCursor);
DEFINE_SYSCALL(0xA008, GetCursorPos);
DEFINE_SYSCALL(0xA00C, PutStringCentered);
DEFINE_SYSCALL(0xA010, PutChar);
DEFINE_SYSCALL(0xA014, PutStringRaw);
//DEFINE_SYSCALL(0xA018, ?);
//DEFINE_SYSCALL(0xA01C, ?);
//DEFINE_SYSCALL(0xA020, ?);
//DEFINE_SYSCALL(0xA024, ?);
//DEFINE_SYSCALL(0xA028, ?);
//DEFINE_SYSCALL(0xA02C, ?);
DEFINE_SYSCALL(0xA030, PutString);
//DEFINE_SYSCALL(0xA034, ?);
//DEFINE_SYSCALL(0xA038, ?);
//DEFINE_SYSCALL(0xA03C, ?);
//DEFINE_SYSCALL(0xA040, ?);
//DEFINE_SYSCALL(0xA044, ?);
//DEFINE_SYSCALL(0xA048, ?);
//DEFINE_SYSCALL(0xA04C, ?);
//DEFINE_SYSCALL(0xA050, ?);
//DEFINE_SYSCALL(0xA054, ?);
//DEFINE_SYSCALL(0xA058, ?);
//DEFINE_SYSCALL(0xA05C, ?);
//DEFINE_SYSCALL(0xA060, ?);
//DEFINE_SYSCALL(0xA064, ?);
//DEFINE_SYSCALL(0xA068, ?);
//DEFINE_SYSCALL(0xA06C, ?);
//DEFINE_SYSCALL(0xA070, ?);
//DEFINE_SYSCALL(0xA074, ?);
//DEFINE_SYSCALL(0xA078, ?);
//DEFINE_SYSCALL(0xA07C, ?);
//DEFINE_SYSCALL(0xA080, ?);
//DEFINE_SYSCALL(0xA084, ?);
//DEFINE_SYSCALL(0xA088, ?);
//DEFINE_SYSCALL(0xA08C, ?);
//DEFINE_SYSCALL(0xA090, ?);
//DEFINE_SYSCALL(0xA094, ?);
//DEFINE_SYSCALL(0xA098, ?);
DEFINE_SYSCALL(0xA09C, IsKeyReady);
//DEFINE_SYSCALL(0xA0A0, ?);
//DEFINE_SYSCALL(0xA0A4, ?);
//DEFINE_SYSCALL(0xA0A8, ?);
//DEFINE_SYSCALL(0xA0AC, ?);
//DEFINE_SYSCALL(0xA0B0, ?);
//DEFINE_SYSCALL(0xA0B4, ?);
//DEFINE_SYSCALL(0xA0B8, ?);
//DEFINE_SYSCALL(0xA0BC, ?);
//DEFINE_SYSCALL(0xA0C0, ?);
//DEFINE_SYSCALL(0xA0C4, ?);
//DEFINE_SYSCALL(0xA0C8, ?);
//DEFINE_SYSCALL(0xA0CC, ?);
//DEFINE_SYSCALL(0xA0D0, ?);
//DEFINE_SYSCALL(0xA0D4, ?);
//DEFINE_SYSCALL(0xA0D8, ?);
//DEFINE_SYSCALL(0xA0DC, ?);
//DEFINE_SYSCALL(0xA0E0, ?);
//DEFINE_SYSCALL(0xA0E4, ?);
//DEFINE_SYSCALL(0xA0E8, ?);
//DEFINE_SYSCALL(0xA0EC, ?);
//DEFINE_SYSCALL(0xA0F0, ?);
//DEFINE_SYSCALL(0xA0F4, ?);
//DEFINE_SYSCALL(0xA0F8, ?);
//DEFINE_SYSCALL(0xA0FC, ?);
//DEFINE_SYSCALL(0xA100, ?);
//DEFINE_SYSCALL(0xA104, ?);
//DEFINE_SYSCALL(0xA108, ?);
//DEFINE_SYSCALL(0xA10C, ?);
//DEFINE_SYSCALL(0xA110, ?);
//DEFINE_SYSCALL(0xA114, ?);
//DEFINE_SYSCALL(0xA118, ?);
//DEFINE_SYSCALL(0xA11C, ?);
//DEFINE_SYSCALL(0xA120, ?);
//DEFINE_SYSCALL(0xA124, ?);
//DEFINE_SYSCALL(0xA128, ?);
//DEFINE_SYSCALL(0xA12C, ?);
//DEFINE_SYSCALL(0xA130, ?);
//DEFINE_SYSCALL(0xA134, ?);
//DEFINE_SYSCALL(0xA138, ?);
//DEFINE_SYSCALL(0xA13C, ?);
//DEFINE_SYSCALL(0xA140, ?);
//DEFINE_SYSCALL(0xA144, ?);
//DEFINE_SYSCALL(0xA148, ?);
//DEFINE_SYSCALL(0xA14C, ?);
//DEFINE_SYSCALL(0xA150, ?);
//DEFINE_SYSCALL(0xA154, ?);
//DEFINE_SYSCALL(0xA158, ?);
//DEFINE_SYSCALL(0xA15C, ?);
//DEFINE_SYSCALL(0xA160, ?);
//DEFINE_SYSCALL(0xA164, ?);
//DEFINE_SYSCALL(0xA168, ?);
//DEFINE_SYSCALL(0xA16C, ?);
//DEFINE_SYSCALL(0xA170, ?);
//DEFINE_SYSCALL(0xA174, ?);
//DEFINE_SYSCALL(0xA178, ?);
//DEFINE_SYSCALL(0xA17C, ?);
//DEFINE_SYSCALL(0xA180, ?);
//DEFINE_SYSCALL(0xA184, ?);
//DEFINE_SYSCALL(0xA188, ?);
//DEFINE_SYSCALL(0xA18C, ?);
//DEFINE_SYSCALL(0xA190, ?);
//DEFINE_SYSCALL(0xA194, ?);
//DEFINE_SYSCALL(0xA198, ?);
//DEFINE_SYSCALL(0xA19C, ?);
//DEFINE_SYSCALL(0xA1A0, ?);
//DEFINE_SYSCALL(0xA1A4, ?);
//DEFINE_SYSCALL(0xA1A8, ?);
//DEFINE_SYSCALL(0xA1AC, ?);
//DEFINE_SYSCALL(0xA1B0, ?);
//DEFINE_SYSCALL(0xA1B4, ?);
//DEFINE_SYSCALL(0xA1B8, ?);
//DEFINE_SYSCALL(0xA1BC, ?);
//DEFINE_SYSCALL(0xA1C0, ?);
//DEFINE_SYSCALL(0xA1C4, ?);
//DEFINE_SYSCALL(0xA1C8, ?);
//DEFINE_SYSCALL(0xA1CC, ?);
//DEFINE_SYSCALL(0xA1D0, ?);
//DEFINE_SYSCALL(0xA1D4, ?);
//DEFINE_SYSCALL(0xA1D8, ?);
//DEFINE_SYSCALL(0xA1DC, ?);
//DEFINE_SYSCALL(0xA1E0, ?);
//DEFINE_SYSCALL(0xA1E4, ?);
//DEFINE_SYSCALL(0xA1E8, ?);
//DEFINE_SYSCALL(0xA1EC, ?);
//DEFINE_SYSCALL(0xA1F0, ?);
//DEFINE_SYSCALL(0xA1F4, ?);
//DEFINE_SYSCALL(0xA1F8, ?);
//DEFINE_SYSCALL(0xA1FC, ?);
//DEFINE_SYSCALL(0xA200, ?);
//DEFINE_SYSCALL(0xA204, ?);
//DEFINE_SYSCALL(0xA208, ?);
//DEFINE_SYSCALL(0xA20C, ?);
//DEFINE_SYSCALL(0xA210, ?);
//DEFINE_SYSCALL(0xA214, ?);
//DEFINE_SYSCALL(0xA218, ?);
//DEFINE_SYSCALL(0xA21C, ?);
//DEFINE_SYSCALL(0xA220, ?);
//DEFINE_SYSCALL(0xA224, ?);
//DEFINE_SYSCALL(0xA228, ?);
//DEFINE_SYSCALL(0xA22C, ?);
//DEFINE_SYSCALL(0xA230, ?);
//DEFINE_SYSCALL(0xA234, ?);
//DEFINE_SYSCALL(0xA238, ?);
//DEFINE_SYSCALL(0xA23C, ?);
//DEFINE_SYSCALL(0xA240, ?);
//DEFINE_SYSCALL(0xA244, ?);
//DEFINE_SYSCALL(0xA248, ?);
//DEFINE_SYSCALL(0xA24C, ?);
//DEFINE_SYSCALL(0xA250, ?);
//DEFINE_SYSCALL(0xA254, ?);
//DEFINE_SYSCALL(0xA258, ?);
//DEFINE_SYSCALL(0xA25C, ?);
//DEFINE_SYSCALL(0xA260, ?);
//DEFINE_SYSCALL(0xA264, ?);
//DEFINE_SYSCALL(0xA268, ?);
//DEFINE_SYSCALL(0xA26C, ?);
//DEFINE_SYSCALL(0xA270, ?);
//DEFINE_SYSCALL(0xA274, ?);
//DEFINE_SYSCALL(0xA278, ?);
//DEFINE_SYSCALL(0xA27C, ?);
//DEFINE_SYSCALL(0xA280, ?);
//DEFINE_SYSCALL(0xA284, ?);
//DEFINE_SYSCALL(0xA288, ?);
//DEFINE_SYSCALL(0xA28C, ?);
//DEFINE_SYSCALL(0xA290, ?);
//DEFINE_SYSCALL(0xA294, ?);
//DEFINE_SYSCALL(0xA298, ?);
//DEFINE_SYSCALL(0xA29C, ?);
//DEFINE_SYSCALL(0xA2A0, ?);
//DEFINE_SYSCALL(0xA2A4, ?);
//DEFINE_SYSCALL(0xA2A8, ?);
//DEFINE_SYSCALL(0xA2AC, ?);
//DEFINE_SYSCALL(0xA2B0, ?);
//DEFINE_SYSCALL(0xA2B4, ?);
//DEFINE_SYSCALL(0xA2B8, ?);
//DEFINE_SYSCALL(0xA2BC, ?);
//DEFINE_SYSCALL(0xA2C0, ?);
//DEFINE_SYSCALL(0xA2C4, ?);
//DEFINE_SYSCALL(0xA2C8, ?);
//DEFINE_SYSCALL(0xA2CC, ?);
//DEFINE_SYSCALL(0xA2D0, ?);
//DEFINE_SYSCALL(0xA2D4, ?);
//DEFINE_SYSCALL(0xA2D8, ?);
//DEFINE_SYSCALL(0xA2DC, ?);
//DEFINE_SYSCALL(0xA2E0, ?);
//DEFINE_SYSCALL(0xA2E4, ?);
//DEFINE_SYSCALL(0xA2E8, ?);
//DEFINE_SYSCALL(0xA2EC, ?);
//DEFINE_SYSCALL(0xA2F0, ?);
//DEFINE_SYSCALL(0xA2F4, ?);
//DEFINE_SYSCALL(0xA2F8, ?);
//DEFINE_SYSCALL(0xA2FC, ?);
//DEFINE_SYSCALL(0xA300, ?);
//DEFINE_SYSCALL(0xA304, ?);
//DEFINE_SYSCALL(0xA308, ?);
//DEFINE_SYSCALL(0xA30C, ?);
//DEFINE_SYSCALL(0xA310, ?);
//DEFINE_SYSCALL(0xA314, ?);
//DEFINE_SYSCALL(0xA318, ?);
//DEFINE_SYSCALL(0xA31C, ?);
//DEFINE_SYSCALL(0xA320, ?);
//DEFINE_SYSCALL(0xA324, ?);
//DEFINE_SYSCALL(0xA328, ?);
//DEFINE_SYSCALL(0xA32C, ?);
//DEFINE_SYSCALL(0xA330, getch);
//DEFINE_SYSCALL(0xA334, getche);
DEFINE_SYSCALL(0xA338, abort);
DEFINE_SYSCALL(0xA33C, atoi);
DEFINE_SYSCALL(0xA340, atol);
//DEFINE_SYSCALL(0xA344, ?);
DEFINE_SYSCALL(0xA348, fgetc);
DEFINE_SYSCALL(0xA34C, fprintf);
DEFINE_SYSCALL(0xA350, fputc);
DEFINE_SYSCALL(0xA354, fscanf);
DEFINE_SYSCALL(0xA358, memchr);
DEFINE_SYSCALL(0xA35C, memcmp);
DEFINE_SYSCALL(0xA360, memcpy);
DEFINE_SYSCALL(0xA364, memmove);
DEFINE_SYSCALL(0xA368, memset);
DEFINE_SYSCALL(0xA36C, printf);
DEFINE_SYSCALL(0xA370, rand);
DEFINE_SYSCALL(0xA374, scanf);
DEFINE_SYSCALL(0xA378, sprintf);
DEFINE_SYSCALL(0xA37C, srand);
DEFINE_SYSCALL(0xA380, strcat);
DEFINE_SYSCALL(0xA384, strchr);
DEFINE_SYSCALL(0xA388, strcmp);
DEFINE_SYSCALL(0xA38C, strcpy);
DEFINE_SYSCALL(0xA390, strlen);
DEFINE_SYSCALL(0xA394, strncat);
DEFINE_SYSCALL(0xA398, strncmp);
DEFINE_SYSCALL(0xA39C, strncpy);
DEFINE_SYSCALL(0xA3A0, strrchr);
DEFINE_SYSCALL(0xA3A4, strstr);
DEFINE_SYSCALL(0xA3A8, tolower);
DEFINE_SYSCALL(0xA3AC, toupper);
//DEFINE_SYSCALL(0xA3B0, ?);
//DEFINE_SYSCALL(0xA3B4, ?);
//DEFINE_SYSCALL(0xA3B8, ?);
//DEFINE_SYSCALL(0xA3BC, ?);
//DEFINE_SYSCALL(0xA3C0, ?);
//DEFINE_SYSCALL(0xA3C4, ?);
//DEFINE_SYSCALL(0xA3C8, ?);
//DEFINE_SYSCALL(0xA3CC, ?);
//DEFINE_SYSCALL(0xA3D0, ?);
//DEFINE_SYSCALL(0xA3D4, ?);
//DEFINE_SYSCALL(0xA3D8, ?);
//DEFINE_SYSCALL(0xA3DC, ?);
//DEFINE_SYSCALL(0xA3E0, ?);
//DEFINE_SYSCALL(0xA3E4, ?);
//DEFINE_SYSCALL(0xA3E8, ?);
//DEFINE_SYSCALL(0xA3EC, ?);
//DEFINE_SYSCALL(0xA3F0, ?);
//DEFINE_SYSCALL(0xA3F4, ?);
//DEFINE_SYSCALL(0xA3F8, ?);
//DEFINE_SYSCALL(0xA3FC, ?);
//DEFINE_SYSCALL(0xA400, ?);
//DEFINE_SYSCALL(0xA404, ?);
//DEFINE_SYSCALL(0xA408, ?);
//DEFINE_SYSCALL(0xA40C, ?);
//DEFINE_SYSCALL(0xA410, ?);
//DEFINE_SYSCALL(0xA414, ?);
//DEFINE_SYSCALL(0xA418, ?);
//DEFINE_SYSCALL(0xA41C, ?);
//DEFINE_SYSCALL(0xA420, ?);
//DEFINE_SYSCALL(0xA424, ?);
//DEFINE_SYSCALL(0xA428, ?);
//DEFINE_SYSCALL(0xA42C, ?);
//DEFINE_SYSCALL(0xA430, ?);
//DEFINE_SYSCALL(0xA434, ?);
//DEFINE_SYSCALL(0xA438, ?);
//DEFINE_SYSCALL(0xA43C, ?);
//DEFINE_SYSCALL(0xA440, ?);
//DEFINE_SYSCALL(0xA444, ?);
//DEFINE_SYSCALL(0xA448, ?);
//DEFINE_SYSCALL(0xA44C, ?);
//DEFINE_SYSCALL(0xA450, ?);
//DEFINE_SYSCALL(0xA454, ?);
//DEFINE_SYSCALL(0xA458, ?);
//DEFINE_SYSCALL(0xA45C, ?);
//DEFINE_SYSCALL(0xA460, ?);
//DEFINE_SYSCALL(0xA464, ?);
//DEFINE_SYSCALL(0xA468, ?);
//DEFINE_SYSCALL(0xA46C, ?);
//DEFINE_SYSCALL(0xA470, ?);

int fputs(const char* str, FILE* stream) {
    while(*str) {
        if(fputc(*str++, stream) == EOF) {
            return EOF;
        }
    }
    return fputc('\n', stream);
}

int getchar(void) {
    return fgetc(stdin);
}

int putchar(int character) {
    return fputc(character, stdout);
}

int puts(const char* str) {
    return fputs(str, stdout);
}