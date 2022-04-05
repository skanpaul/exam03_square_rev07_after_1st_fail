#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
// -----------------------------------------------------------------
#define NO_ERROR            0
#define ERROR               1
// -----------------------------------------------------------------
#define ERR_END_OF_FILE     0
#define ERR_ARG             1
#define ERR_FILE_CRPT       2
// -----------------------------------------------------------------
#define TXT_ERR_ARG         "Error: argument\n"
#define TXT_ERR_FILE_CRPT   "Error: Operation file corrupted\n"
// -----------------------------------------------------------------
#define PXL_OUTSIDE         0
#define PXL_INSIDE          1
#define PXL_ON_EDGE         2
// -----------------------------------------------------------------
typedef struct  s_zone
{
    int w;
    int h;
    char bg;
    int total;
} t_zone;
// -----------------------------------------------------------------
typedef struct  s_square
{
    char type;
    float x;
    float y;
    float w;
    float h;
    char  c;
} t_square;
// -----------------------------------------------------------------
t_zone z;
t_square s;
char *map;
// -----------------------------------------------------------------
int msg_err(FILE *ptr_file, int err_type)
{
    
}
// -----------------------------------------------------------------
// -----------------------------------------------------------------
// -----------------------------------------------------------------