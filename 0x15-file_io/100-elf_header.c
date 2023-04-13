#include "main.h"
#include <elf.h>

/**
 * print_error - Entry point
 * Descript: Print error message to stderr and exit with code 98
 * @message: he error message to be printed
 */

void print_error(char *message)
{
fprintf(stderr, "Error: %s\n", message);
exit(98);
}

/**
 * print_elf_header - Entry point
 * Descript: Displays the ELF header
 * @h: A pointer to the ELF header
 */
void print_elf_header(Elf64_Ehdr *header)
{
int i;

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
printf("  Class:                             %s\n",
header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf("  Data:                              %s\n",
header->e_ident[EI_DATA] == ELFDATA2LSB ?
"2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n",
header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            %d\n",
header->e_ident[EI_OSABI]);
printf("  ABI Version:                       %d\n",
header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header->e_type)
{
case ET_NONE:
printf("NONE (No file type)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * read_elf_header - Entry point
 * Descript: Reads the ELF header from a file
 * @fileName: The name of the file to be read
 * @h: A pointer to the ELF header
 */

void read_elf_header(char *fileName, Elf64_Ehdr *header)
{
int fd;

fd = open(fileName, O_RDONLY);
if (fd == -1)
print_error("Failed to open file");
if (read(fd, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
print_error("Failed to read ELF header");
close(fd);
}

/**
 * is_elf_file - Entry point
 * Descript: Checks if a file is an ELF file
 * @h: A pointer to the ELF header
 *
 * Return: 1 if the file is an ELF file, 0 otherwise
 */

int is_elf_file(Elf64_Ehdr *header)
{
if (header->e_ident[EI_MAG0] != ELFMAG0 ||
header->e_ident[EI_MAG1] != ELFMAG1 ||
header->e_ident[EI_MAG2] != ELFMAG2 ||
header->e_ident[EI_MAG3] != ELFMAG3)
return (0);
else
return (1);
}

/**
 * main - Entry point
 * Desript: Displays the information contained in the ELF header
 * at the start of an ELF file.
 * @argc: The number of command-line arguments provided.
 * @argv: An array of strings
 *
 * Return: 0 on success, 98 on failure.
 */

int main(int argc, char **argv)
{
Elf64_Ehdr header;

if (argc != 2)
{
print_error("Usage: elf_header elf_filename");
}
read_elf_header(argv[1], &header);
if (!is_elf_file(&header))
{
print_error("File is not an ELF file");
}
print_elf_header(&header);

return (0);
}
/*
 * Githubuser: Tosinkuzzy
 */
