// file.h

#ifndef FILE_H
#define FILE_H

#define FILE_NAME_MAX_LENGTH 100

typedef struct {
    int fileId;
    char fileName[FILE_NAME_MAX_LENGTH];
} File;

void initializeFile(File* file, int fileId, const char* fileName);
void displayFileInfo(const File* file);

#endif
