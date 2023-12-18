// operation.c

#include "file.h"
#include "directory.h"

void moveFileToDirectory(File* file, Directory* destinationDir) {
    printf("Moving file '%s' to directory '%s'\n", file->fileName, destinationDir->dirName);
}

void copyFileToDirectory(const File* file, const Directory* destinationDir) {
    printf("Copying file '%s' to directory '%s'\n", file->fileName, destinationDir->dirName);
}
