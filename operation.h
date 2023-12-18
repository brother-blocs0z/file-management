// operation.h

#ifndef OPERATION_H
#define OPERATION_H

#include "file.h"
#include "directory.h"

void moveFileToDirectory(File* file, Directory* destinationDir);
void copyFileToDirectory(const File* file, const Directory* destinationDir);

#endif
