#ifndef _BETAWISE_H_
#define _BETAWISE_H_

// TODO: Provide our own 
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Use stream numbers as FILE pointers.
#undef stdin
#undef stdout
#undef stderr
#undef getchar
#undef putchar
#define stdin (FILE*)0
#define stdout (FILE*)1
#define stderr (FILE*)2

// Key codes definitions.
#define KEY_FILE_1      0x2D
#define KEY_FILE_2      0x2C
#define KEY_FILE_3      0x04
#define KEY_FILE_4      0x0F
#define KEY_FILE_5      0x0E
#define KEY_FILE_6      0x0A
#define KEY_FILE_7      0x01
#define KEY_FILE_8      0x27
#define KEY_PRINT       0x2B
#define KEY_SPELL_CHECK 0x35
#define KEY_FIND        0x3F
#define KEY_CLEAR_FILE  0x34
#define KEY_HOME        0x1F
#define KEY_END         0x3E
#define KEY_APPLETS     0x29
#define KEY_SEND        0x2A
#define KEY_GRAVE       0x2E
#define KEY_1           0x38
#define KEY_2           0x37
#define KEY_3           0x36
#define KEY_4           0x39
#define KEY_5           0x2F
#define KEY_6           0x30
#define KEY_7           0x3A
#define KEY_8           0x31
#define KEY_9           0x32
#define KEY_0           0x33
#define KEY_MINUS       0x28
#define KEY_EQUAL       0x25
#define KEY_BACKSPACE   0x03
#define KEY_TAB         0x06
#define KEY_Q           0x22
#define KEY_W           0x21
#define KEY_E           0x20
#define KEY_R           0x23
#define KEY_T           0x07
#define KEY_Y           0x09
#define KEY_U           0x24
#define KEY_I           0x1C
#define KEY_O           0x1D
#define KEY_P           0x1E
#define KEY_LEFTBRACE   0x02
#define KEY_RIGHTBRACE  0x00
#define KEY_BACKSLASH   0x15
#define KEY_CAPSLOCK    0x05
#define KEY_A           0x18
#define KEY_S           0x17
#define KEY_D           0x16
#define KEY_F           0x19
#define KEY_G           0x10
#define KEY_H           0x11
#define KEY_J           0x1B
#define KEY_K           0x12
#define KEY_L           0x13
#define KEY_SEMICOLON   0x14
#define KEY_APOSTROPHE  0x0B
#define KEY_ENTER       0x40
#define KEY_LEFTSHIFT   0x08
#define KEY_Z           0x43
#define KEY_X           0x42
#define KEY_C           0x41
#define KEY_V           0x44
#define KEY_B           0x4E
#define KEY_N           0x4F
#define KEY_M           0x46
#define KEY_COMMA       0x3B
#define KEY_DOT         0x3D
#define KEY_SLASH       0x47
#define KEY_RIGHTSHIFT  0x45
#define KEY_CTRL        0x4D
#define KEY_ALT         0x26
#define KEY_CMD         0x0C
#define KEY_SPACE       0x4C
#define KEY_ESC         0x48
#define KEY_DELETE      0x50
#define KEY_UP          0x4B
#define KEY_LEFT        0x49
#define KEY_DOWN        0x0D
#define KEY_RIGHT       0x4A

// Modifier key codes.
#define MOD_CTRL        0x8000
#define MOD_CMD         0x4000
#define MOD_ALT         0x1000
#define MOD_RIGHTSHIFT  0x0800
#define MOD_LEFTSHIFT   0x0400
#define MOD_CAPS_LOCK   0x0200
#define MOD_SHIFT       (MOD_LSHIFT | MOD_RSHIFT)

// Applet messages.
void ProcessMessage(uint32_t message, uint32_t param, uint32_t* status);
#define MSG_IDLE 0x00
#define MSG_INIT 0x18
#define MSG_SETFOCUS 0x19
#define MSG_KILLFOCUS 0x1A
#define MSG_CHAR 0x20
#define MSG_KEY 0x21
#define MSG_USB_PLUG 0x30001
#define MSG_USB_UNPLUG 0x3000C

// System functions.
void ClearScreen();
void SetCursor(uint8_t row, uint8_t col, uint8_t cursor_mode);
void GetCursorPos(uint8_t* row, uint8_t* col);
void PutStringCentered(const char *str);
void PutChar(const char c);
void PutStringRaw(const char* str);

void PutString(const char* str);

int IsKeyReady(void);

// Standard library functions.
int tolower(int c);
int toupper(int c);

// Header definitions.
struct Header_t {
    uint32_t signature;
    uint32_t romUsage;
    uint32_t ramUsage;
    uint32_t settingsOffset;
    uint32_t flags;
    uint16_t id;
    uint8_t headerVersion;
    uint8_t fileCount;
    char name[36];
    struct Version_t {
        uint8_t versionMajor;
        uint8_t versionMinor;
        char versionRevision[1];
    } version;
    uint8_t languageId;
    char info[60];
    uint32_t minAsmVersion;
    uint32_t fileUsage;
    void* entryPoint;
    uint32_t magic[3];
};

extern char __rom_size;

#define APPLET_HEADER_BEGIN \
    uint32_t __footer __attribute__ ((section("footer"))) = { 0xCAFEFEED }; \
    struct Header_t __header __attribute__ ((section("header"))) = { \
        .signature = 0xC0FFEEAD, \
        .romUsage = (uint32_t)&__rom_size, \
        .ramUsage = sizeof(struct gd_t), \
        .settingsOffset = 0, \
        .flags = 0xFF000000, \
        .headerVersion = 1, \
        .fileCount = 0, \
        .name = "Test", \
        .minAsmVersion = 0, \
        .fileUsage = 0, \
        .entryPoint = &ProcessMessage, \
        .magic = {0, 1, 2},
#define APPLET_ID(param) .id = param,
#define APPLET_NAME(param) .name = param,
#define APPLET_INFO(param) .info = param,
#define APPLET_VERSION(major, minor, ...) .version = {major, minor, #__VA_ARGS__},
#define APPLET_LANGUAGE_EN_US .languageId = 1,
#define APPLET_LANGUAGE_EN_UK .languageId = 2,
#define APPLET_LANGUAGE_FR .languageId = 3,
#define APPLET_LANGUAGE_FR_CR .languageId = 4,
#define APPLET_LANGUAGE_IT .languageId = 5,
#define APPLET_LANGUAGE_DE .languageId = 6,
#define APPLET_LANGUAGE_ES .languageId = 7,
#define APPLET_LANGUAGE_NL .languageId = 8,
#define APPLET_LANGUAGE_SV .languageId = 9,
#define APPLET_HEADER_END };
    
// Global data pointer (applets must store global static data in this struct)
struct gd_t;
register volatile struct gd_t* gd asm("a5");

#endif
