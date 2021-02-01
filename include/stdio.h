#ifndef __KABUKI_STDIO_H
#define __KABUKI_STDIO_H

#define BUFSIZ  1024
#define NFILES  20
#define NULL       0
#define EOF     (-1)
#define CMASK   0377

#define READMODE     1
#define WRITEMODE    2
#define UNBUFF       4
#define _EOF         8
#define _ERR        16
#define IOMYBUF     32
#define PERPRINTF   64
#define STRINGS    128

#endif

#ifndef FILE

extern struct _io_buf {
    int     _fd;
    int     _count;
    int     _flags;
    char   *_buf;
    char   *_ptr;
}  *_io_table[NFILES];

#endif
