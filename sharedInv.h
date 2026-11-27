/* sharedInv.h
 *
 * This header is shared by packInv and readInv
 *
 * Please do not modify any code in this file!  We will be testing your code
 * under the assumption that the public interface matches this interface.
 *
 * Hanan S.
 */


#ifndef SHAREDINV_H
#define SHAREDINV_H

#define INVP	"INVP"
#define VERSION 1

#define MAX_SKU_LEN   64
#define MAX_NOTE_LEN  254
#define MAX_QUANTITY  127
#define MIN_QUANTITY  -128

#define IN     0
#define OUT    1
#define ADJ    2
#define ALERT  3

#define INIT_SIZE 5 //initial array size

typedef struct {
    unsigned int timestamp;
    unsigned char even;
    char quantity;
    char  *sku;
    char  *note;
}Record;

/* packInventory(int argc, char *argv[]);
 *
 * Parses the command line arguments and calls the
 * appropriate functions to pack the log file into
 * a binary file.
 *
 * Parameters: argument count (argc)
 *					   argument vector (argv)
 * Return: None
 *
 * PRE : Input file is a .log file
 * POST: Given valid command line arguemnts, the log file
 *       is packed into a binary file.
 *
 */
void packInventory(int argc, char *argv[]);


/* readInventory(int argc, char *argv[]);
 *
 * Parses the command line arguments and calls the
 * appropriate functions that read the binary file and
 * produce a corresponding report
 *
 * Parameters: argument count (argc)
 *					   argument vector (argv)
 * Return: None
 *
 * PRE : Input file is a .bin file
 * POST: Given valid command line arguemnts, the binary input
 *       file is read and a report is produced.
 *
 */
void readInventory(int argc, char *argv[]);


#endif
