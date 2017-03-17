#ifndef __PAGING_H__
#define __PAGING_H__

void changeDirectoryToReadWrite(unsigned long virtualAddressFailure);
void saveSnapshotPage(unsigned long virtualAddressFailure);
void saveProcessList(sqInt aProcess);
void saveExternalSemaphorePages(sqInt index);
void saveProcessListPagesWithPriority(sqInt priority);

#endif __PAGING_H__