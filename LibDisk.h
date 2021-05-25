//
// Disk.h
//
// Emulates a very simple disk (no timing issues). Allows user to
// read and write to the disk just as if it was dealing with sectors
//
//

/***************************/
/* DO NOT MODIFY THIS FILE */
/***************************/
    
#ifndef __Disk_H__
#define __Disk_H__

// a few disk parameters
#define SECTOR_SIZE 512
#define TOTAL_SECTORS 10000 

// disk errors
typedef enum {
  E_MEM_OP,
  E_INVALID_PARAM,
  E_OPENING_FILE,
  E_WRITING_FILE,
  E_READING_FILE,
} Disk_Error_t;

extern int diskErrno; // used to see what happened w/ disk ops

int Disk_Init();
int Disk_Save(char* file);
int Disk_Load(char* file);
int Disk_Write(int sector, char* buffer);
int Disk_Read(int sector, char* buffer);

#endif // __Disk_H__
