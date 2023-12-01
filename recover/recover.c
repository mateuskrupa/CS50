#include <stdio.h>
#include <stdint.h>

#define BLOCK_SIZE 512

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // Check for the correct number of command-line arguments
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s IMAGE\n", argv[0]);
        return 1;
    }

    // Open the input file for reading
    FILE *raw_file = fopen(argv[1], "r");
    if (raw_file == NULL)
    {
        fprintf(stderr, "Could not open file: %s\n", argv[1]);
        return 1;
    }

    BYTE buffer[BLOCK_SIZE];
    int jpeg_count = 0;
    FILE *jpeg_file = NULL;

    while (fread(buffer, 1, BLOCK_SIZE, raw_file) == BLOCK_SIZE)
    {
        // Check for the start of a JPEG signature
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // If we had an open JPEG file, close it
            if (jpeg_file != NULL)
            {
                fclose(jpeg_file);
            }

            // Create a new JPEG file
            char filename[8]; // ###.jpg plus null terminator
            sprintf(filename, "%03d.jpg", jpeg_count++);
            jpeg_file = fopen(filename, "w");
            if (jpeg_file == NULL)
            {
                fprintf(stderr, "Could not create JPEG file: %s\n", filename);
                return 2;
            }
        }

        // If we have an open JPEG file, write the data
        if (jpeg_file != NULL)
        {
            fwrite(buffer, 1, BLOCK_SIZE, jpeg_file);
        }
    }

    // Close the last JPEG file
    if (jpeg_file != NULL)
    {
        fclose(jpeg_file);
    }

    // Close the input file
    fclose(raw_file);

    return 0;
}
