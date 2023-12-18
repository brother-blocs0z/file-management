// directory.h

#ifndef DIRECTORY_H
#define DIRECTORY_H

#define DIR_NAME_MAX_LENGTH 100

typedef struct {
    int dirId;
    char dirName[DIR_NAME_MAX_LENGTH];
} Directory;

void initializeDirectory(Directory* directory, int dirId, const char* dirName);
void displayDirectoryInfo(const Directory* directory);

#endif
