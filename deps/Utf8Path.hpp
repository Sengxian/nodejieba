#ifndef UTF8_PATH_H
#define UTF8_PATH_H

#include <filesystem>

#define Utf8Path(string) std::filesystem::u8path(string)

#endif // UTF8_PATH_H
