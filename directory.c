// directory.c

#include <stdio.h>
#include "directory.h"

void initializeDirectory(Directory* directory, int dirId, const char* dirName) {
    directory->dirId = dirId;
    snprintf(directory->dirName, sizeof(directory->dirName), "%s", dirName);
}

void displayDirectoryInfo(const Directory* directory) {
    printf("Directory ID: %d\n", directory->dirId);
    printf("Directory Name: %s\n", directory->dirName);
}
