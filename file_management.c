// file_management.c

#include "file.h"
#include "directory.h"
#include "operation.h"

int main() {
    File file1, file2;
    Directory dir1, dir2;

    initializeFile(&file1, 1, "document.txt");
    initializeFile(&file2, 2, "image.jpg");
    initializeDirectory(&dir1, 101, "Documents");
    initializeDirectory(&dir2, 102, "Pictures");

    displayFileInfo(&file1);
    displayFileInfo(&file2);
    displayDirectoryInfo(&dir1);
    displayDirectoryInfo(&dir2);

    moveFileToDirectory(&file1, &dir1);
    copyFileToDirectory(&file2, &dir2);

    return 0;
}
