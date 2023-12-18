// file.c

#include <stdio.h>
#include "file.h"

void initializeFile(File* file, int fileId, const char* fileName) {
    file->fileId = fileId;
    snprintf(file->fileName, sizeof(file->fileName), "%s", fileName);
}

void displayFileInfo(const File* file) {
    printf("File ID: %d\n", file->fileId);
    printf("File Name: %s\n", file->fileName);
}
